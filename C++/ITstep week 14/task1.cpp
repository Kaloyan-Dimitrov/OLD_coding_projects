#include <iostream>
using namespace std;
class Stack{
	int stack[100];
	int last = 0;
	public:
		Stack(int arr[], int len){
			for(int i = 0;i < len;i ++){
				stack[last] = arr[i];
				last ++;
			}
			last = len;			
		}
		bool empty(){
			return last == 0;
		}
		int size(){
			return last;
		}
		void push(int a){
			if(last <= 99){
				stack[last] = a;
				last ++;
			}
		}
		void pop(){
			if(!empty()) last --;
		}
		int top(){
			if(!empty()) return stack[last - 1];
		}
		void swap(int a, int b){
			if(a < last and b < last){
				int buff = stack[a];
				stack[a] = stack[b];
				stack[b] = buff;
			}
		}
		Stack(Stack& s){
			for(int i = 0; i < s.size(); i ++){
				this->stack[i] = s.stack[i];
				this->last ++;
			}
		}
		void swapstack(Stack& s){
			Stack buff(s);
			s.last = 0;
			for(int i = 0; i < this->size(); i ++){
				s.push(this->stack[i]);
			}	
			this->last = 0;
			for(int i = 0; i < buff.size(); i ++){
				this->push(buff.stack[i]);
			}
		}
};
int main(){
	int e[] = {1, 2, 3, 4}, e1[] = {5, 6, 7, 8, 9};
	Stack a(e, 4);
	Stack b(e1, 5);
	a.swapstack(b);
	do{
		cout<<b.top();
		b.pop();
	}while(!b.empty());
	cout<<endl;
	do{
		cout<<a.top();
		a.pop();
	}while(!a.empty());
	return 0;
}
