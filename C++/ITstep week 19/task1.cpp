#include <iostream>
#include <string.h>
using namespace std;
class Page {
	int formatA;
	public:
		Page(){
			formatA = 4;
		}
		Page(int p){
			formatA = p;
		}
		Page(const Page& p){
			this->formatA = p.formatA;
		}
		void setF(int p){
			formatA = p;
		}
		int getF(){
			return formatA;
		}
		friend ostream& operator<<(ostream& out, const Page p){
			out<<"A"<<p.formatA<<endl;
			return out;
		}
};
class Text : public Page {
	char* text;
	int curr, capacity;
	int page;
	public:
		Text(): Page(4){
			page = 1;
			curr = 0;
			capacity = 150;
			text = new char[150];				
		}
		Text(const Text& t): Page((Page)t){
			this->page = t.page;
			this->curr = t.curr;
			this->capacity = t.capacity;
			this->text = new char[this->capacity];
			for(int i = 0; i < this->capacity; i ++)	{
				text[i] = t.text[i];
			}
		}
		~Text(){
			delete[] text;
		}
		Text& operator=(const Text& t){
			delete[] text;
			this->page = t.page;
			this->curr = t.curr;
			this->capacity = t.capacity;
			this->text = new char[this->capacity];
			for(int i = 0; i < this->capacity; i ++)	{
				text[i] = t.text[i];
			}
		}
		void setText(char* t){
			delete[] text;
			text = new char[strlen(t) + 1];
			for(int i = 0; i < strlen(t); i ++){
				text[i] = t[i];
			}
			text[strlen(t)] = '\0';
		}
		void setPage(int i){
			page = i;
		}
		int getPage(){
			return page;
		}
		char* getText(){
			return text;
		}
		friend ostream& operator<<(ostream& out, const Text t){
			out<<(Page)t<<"Page Number: "<<t.page<<" and has in it: "<<t.text<<endl;
			return out;
		}
};
class Cover: public Page {
	char* heading;
	int fontSize;
	public:
		Cover(): Page(4){
			heading = new char[9];
			fontSize = 12;
		}
		Cover(const Cover& c): Page((Page)c){
			this->heading = new char[strlen(c.heading)];
			for(int i = 0; i < strlen(c.heading); i ++)	{
				heading[i] = c.heading[i];
			}					
			this->fontSize = c.fontSize;	
		}
		~Cover(){
			delete[] heading;
		}
		Cover& operator=(const Cover& c){
			this->heading = new char[strlen(c.heading)];
			for(int i = 0; i < strlen(c.heading); i ++)	{
				heading[i] = c.heading[i];
			}		
			this->fontSize = c.fontSize;	
		}
		void setHeading(char* h){
			delete[] heading;
			heading = new char [strlen(h)+ 1];
			for(int i = 0; i < strlen(h); i ++)	{
				heading[i] = h[i];
			}
			heading[strlen(h)+ 1] = '\0';
		}
		void setFontSize(int i){
			this->fontSize = i;
		}
		char* getHeading(){
			return heading;
		}
		int getFontSize(){
			return fontSize;
		}
		friend ostream& operator<<(ostream& out, const Cover c){
			out<<(Page)c<<"FontSize: "<<c.fontSize<<endl<<"Heading: "<<c.heading<<endl;
			return out;
		}
};
class Illustration: public Page {
	char* content;
	public:
		Illustration(): Page(4){
			content = new char[9];
		}
		Illustration(const Illustration& c): Page((Page)c){
			this->content = new char[strlen(c.content)];
			for(int i = 0; i < strlen(c.content); i ++)	{
				content[i] = c.content[i];
			}		
		}
		~Illustration(){
			delete[] content;
		}
		Illustration& operator=(const Illustration& c){
			this->content = new char[strlen(c.content)];
			for(int i = 0; i < strlen(c.content); i ++)	{
				content[i] = c.content[i];
			}		
		}
		void setContent(char* h){
			delete[] content;
			content = new char[strlen(h) + 1];
			for(int i = 0; i < strlen(h); i ++)	{
				content[i] = h[i];
			}
			content[strlen(h) + 1] = '\0'; 	
		}
		char* getContent(){
			return content;
		}
		friend ostream& operator<<(ostream& out, const Illustration c){
			out<<(Page)c<<"Content:"<<c.content<<endl;
			return out;
		}
};
template <typename T>
class Book {
	Cover h;
	T* pages;
	int pageNumber;
	public:
		Book() {
			pageNumber = 10;
			pages = new T[10];
		}
		Book(const Book& b){
			this->h = b.h;
			this->pageNumber = b.pageNumber;
			this->pages = new T[this->pageNumber];
			for(int i = 0; i < this->pageNumber; i ++){
				pages[i] = b.pages[i];
			}
		}
		~Book(){
			delete[] pages;	
		}
		Book& operator=(const Book& b){
			delete[] pages;
			this->h = b.h;
			this->pageNumber = b.pageNumber;
			this->pages = new T[this->pageNumber];
			for(int i = 0; i < this->pageNumber; i ++){
				pages[i] = b.pages[i];
			}
		}
		void setCover(const Cover& c){
			h = c;
		}
		void setPageNumber(int j){
			T* pc = new T[pageNumber];
			for(int i = 0; i < pageNumber; i ++){
				pc[i] = pages[i];
			}
			delete[] pages;
			pages = new T[j];
			for(int i = 0; i < pageNumber; i ++){
				pages[i] = pc[i];
			}
			pageNumber = j;
			delete[] pc;
		}
		void setPages(T* p, int l){
			delete[] pages;
			pages = new T[l];
			for(int i = 0; i < l; i ++){
				pages[i] = p[i];
			}
		}
		T getPages(){
			return pages;
		}
		int getPageNumber(){
			return pageNumber;
		}
		Cover& getCover(){
			return h;
		}
		T& operator[](int i){
			return pages[i];
		}
		friend ostream& operator<<(ostream& out, const Book b){
			out<<"Cover:\n"<<b.h<<endl<<"Page number:"<<b.pageNumber<<endl<<"Content:"<<endl;
			for(int i = 0; i < b.pageNumber; i ++){
				cout<<b.pages[i];
			}
			return out;
		}
};
int main (){
Book<Illustration> book;
book.setPageNumber(20);
book.getCover().setHeading("hahaha");
cout<<book;
return 0;
}
