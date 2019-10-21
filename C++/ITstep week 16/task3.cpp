#include <iostream>
#include <string.h>
using namespace std;
class Poem{
	char* content;   
	char* author;   
public:
	Poem(){ 
		author = "Untitled";
		content = "Nothing.";
	}
	Poem(char* _content, char* _author){		
		content = new char[strlen(_content) + 1];
		strcpy(content, _content);
				
		author = new char[strlen(_author) + 1];
		strcpy(author, _author);
	}

	Poem(Poem const &other){	
		//char* _content = new char[strlen(other.content) + 1];
		//char* _author = new char[strlen(other.author) + 1];
		char* _content = new char(*other.content);
		char* _author = new char(*other.author);
		this->content = new char[strlen(_content) + 1];
		strcpy(this->content, _content);
		this->author = new char[strlen(_author) + 1];
		strcpy(this->author, _author);
		delete[] _content;
		delete[] _author;
	}

	

	Poem& operator=(Poem const &other){
		this->author = other.author;
		this->content = other.content;
	}
	~Poem(){
		delete[] content;
		delete[] author;
	}

	

	friend ostream& operator<<(ostream& out, Poem const &str){
		out<<str.author<<"\n"<<str.content;
	}

	

	void setContent(char* _content){ //         ????????????
		content = _content;
	}

	void setAuthor(char* _author){ //????? ?? ????? ?? ??????
		author = _author;
	}

	

	char* getContent() const{ //????? ?? ????????????
		return content;
	}

	char* getAuthor() const{ //????? ?? ????? ?? ??????
		return author;
	}

};
class Book{
	int id; 
	int poemsnumber; 
	int bookcapacity; 
	char* name; 
	Poem* poems; 
public:

	Book(){
		id = -1;
		poemsnumber = 0;
		bookcapacity = 100;
		name = new char[100];
		name = "Undefined";	
		poems = new Poem[100];
	}
	Book(Book const &other){
		this->id = other.id;
		this->poemsnumber = other.poemsnumber;
		this->bookcapacity = other.bookcapacity;
		this->name = new char[strlen(other.name) + 1];
		strcpy(name, other.name);
		this->poems = new Poem[other.poemsnumber];
		for(int i = 0; i < other.poemsnumber; i ++){
			strcpy(poems[i].getContent(), other.poems[i].getContent());
		}
	}
	Book& operator=(Book const &other){
		this->id = other.id;
		this->poemsnumber = other.poemsnumber;
		this->bookcapacity = other.bookcapacity;
		strcpy(name, other.name);
		for(int i = 0; i < other.poemsnumber; i ++){
			strcpy(poems[i].getContent(), other.poems[i].getContent());
		}
	}
	~Book(){
		delete[] poems;
		delete name;
	}
	friend ostream& operator<<(ostream& out, Book b){
		out<<b.name<<"\n";
		for(int i = 0; i < b.poemsnumber; i ++){
			out<<b.poems[i];
		}
	}
	void resize(){
		bookcapacity *= 2;
		Poem* poemss = new Poem[poemsnumber];
		for(int i = 0; i < this->poemsnumber; i ++){
			poemss[i] = poems[i];
		}
		delete[] poems;
		poems = new Poem[bookcapacity];
		for(int i = 0; i < this->poemsnumber; i ++){
			poems[i] = poemss[i];
		}
		delete[] poemss;
	}
	void addPoem(Poem const &poem){ 
		if(this->poemsnumber == this->bookcapacity) this->resize();
		poems[poemsnumber] = poem;	
		poemsnumber ++;
	}
	Book operator+(const Book &other){ 
		for(int i = 0; i < other.poemsnumber; i ++){
			this->addPoem(other.poems[i]);
		}
	}
	Poem operator[](int n){ 
		return poems[n];
	}
	void sortByLength(){
		int* lenghts = new int[poemsnumber];
		for(int i = 0; i < poemsnumber; i ++){
			lenghts[i] = strlen(poems[i].getContent());
		}    
	    for (int i = 0; i < poemsnumber - 1; i++) {
	    	int minIndex = i;
	    	for (int j = i + 1; j < poemsnumber; j++){
	            if (lenghts[j] < lenghts[minIndex]){
                    minIndex = j;
                }
            }
            if (minIndex != i) {
                Poem buff(poems[i]);
                poems[i] = poems[minIndex];
                poems[minIndex] = buff;
            }
	    }
	    delete[] lenghts;
	}
	void setName(char* _name){
		name = _name;
	}
	void setID(int _id){
		id = _id;
	}
	char* getName() const{
		return name;
	}
	int getID() const{
		return id;
	}
	int getCapacity() const{
		return bookcapacity;
	}
};
class Library{
	int booksnumber; 
	int bookscapacity;
	Book* books;
public:
	Library(){
		booksnumber = 0;
		bookscapacity = 100;
		books = new Book[bookscapacity];
	}
	Library(Library const &other){
		this->booksnumber = other.booksnumber;
		this->bookscapacity = other.bookscapacity;
		this->books = new Book[other.bookscapacity];
		for(int i = 0; i < bookscapacity; i ++){
			this->books[i] = other.books[i];
		}
	}
	Library& operator=(Library const &other){

	}
	~Library(){
		delete[] books;	
	}
	friend ostream& operator<<(ostream& out, Library lib){ //?? ?? ???????? "Library", ??? ???, ? ?????????????? ???????

	//? ???????? ?? ????? ???????? ?????

	}
	void resize(){ // ?????????? ?? ?????? 2

	}
	void addBook(Book const &book){ // ???????? ?? ????? ? ????????????

	//?? ?? ?????????? ?????? ??? ?????

	}
	Library operator+(const Library &other){ // ????? ?? ??? ?????????? ? ???????? ????? ?? ?????? ????? ? ???.

	}
	Book operator[](int id){//?? ?? ????? ??????? ? ????? id, ??? ??? ??????

	}
	void sortByID(){ // ?? ?? ???????? ??????? ?? ?????

	//???-?????? ????? ?? ????? ?? ???????? ?????, ? ???-??????? ?? ?????

	}
	int getBookNumber() const{

	}
	int getCapacity() const{

	}
};
int main (){
	
return 0;
}


