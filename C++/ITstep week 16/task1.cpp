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

	

	void setContent(char* _content){ //????? ?? ????????????
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
int main (){
	Poem p;
	char* name = new char[100];
	char* content = new char[100];
	cin>>content;
	p.setContent(content);
	cin>>name;
	p.setAuthor(name);
	cout<<p<<"\n";
	cout<<p.getAuthor()<<"\n"<<p.getContent();
	delete[] name;
	delete[] content;
	return 0;
}
