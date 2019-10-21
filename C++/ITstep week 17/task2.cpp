#include <iostream>
#include <string.h>
using namespace std;
class String{
	char* container;
	int lenght, curr;
	public:
		String(){
			container = new char[50];
			curr = 0;
			lenght = 50;
		}
		String(const String& v){
			this->lenght = v.lenght;
			this->curr = v.curr;
			container = new char[this->lenght];
			for(int i = 0; i < v.curr; i ++){
				this->container[i] = v.container[i];
			}	
		}
		String& operator=(String& v){
			this->lenght = v.lenght;
			this->curr = v.curr;
			container = new char[this->lenght];
			for(int i = 0; i < v.curr; i ++){
				this->container[i] = v.container[i];
			}
		}
		String& operator=(char* v){
			this->lenght = strlen(v);
			this->curr = strlen(v);
			container = v;
		}
		~String(){
			delete[] container;
		}
		char& operator[](const int& index){
			return container[index];
		}
		int size(){
			return curr;
		}
		String& operator+(String& s){
			char arr[this->size()];
			for(int i = 0; i < this->size(); i ++){
				arr[i] = container[i];
			}
			this->container = new char[this->lenght + s.lenght];
			this->lenght = this->lenght + s.lenght;
			this->curr = strlen(arr) + s.size();
			for(int i = 0; i < strlen(arr); i ++){
				this->container[i] = arr[i];
			}
			for(int i = strlen(arr); i < this->curr; i ++){
				this->container[i] = s.container[i];
			}
		}
		friend ostream &operator<<(ostream &out, const String& v){
			out<<v.container;
			out<<endl;
			return out;
		}
};
int main (){
String s;
s = "1234657890";
//String s1;
//s1 = "0987654321";
//s = s + s1;
return 0;
}

