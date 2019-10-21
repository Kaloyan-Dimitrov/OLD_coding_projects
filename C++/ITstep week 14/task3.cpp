#include <iostream>
using namespace std;
class Queue{
	int queue[100];
	int last = 0;
	int first = 0;
	public:
		bool empty(){
			return last == first;
		}
		int size(){
			return last - first;
		}
		int front(){
			return queue[first];
		}
		int back(){
			return queue[last - 1];
		}
		void pop(){
			if(!empty()) first ++;
		}
		void swap(int a, int b){
			int buff = queue[a];
			queue[a] = queue[b];
			queue[b] = buff;
		}
		void push(int a){
			if(last <= 99){
				queue[last] = a;
				last ++;
			}
		}
		void swapqueue(Queue& q){
			Queue buff(q);
			q.last = 0;
			q.first = 0;
			for(int i = this->first; i < this->size(); i ++){
				q.push(this->queue[i]);
			}	
			this->last = 0;
			this->first = 0;
			for(int i = buff.first; i < buff.size(); i ++){
				this->push(buff.queue[i]);
			}
		}
		Queue(int arr[], int len){
			for(int i = 0; i < len; i ++){
				queue[i] = arr[i];
			}
			last = len;
		}
		Queue(){
		}
		Queue(Queue& q){
			for(int i = first; i < q.last; i ++){
				this->push(q.queue[i]);
			}
			this->last = q.last;
		}
		void print(){
			for(int i = first; i < last; i ++){
				cout<<queue[i]<<" ";
			}
			cout<<endl;
		}
};
class Stack{
	public:
	Queue stack;
	public:
		bool empty(){
			return stack.empty();
		}
		int size(){
			return stack.size();
		}
		void push(int a){
			if(stack.size() < 100){
				stack.push(a);
			}
		}
		int top(){
			if(!empty()) return stack.back();
		}
		void swap(int a, int b){
			this->stack.swap(a, b);
		}
		Stack (){
			
		}
		Stack(Queue arrr){
			Queue q(arrr);
			int arr[100], i;
			for(i = 0; !q.empty(); i ++){
				arr[i] = q.front();
				q.pop();
			}
			for(int j = i - 1; j >= 0; j --){
				stack.push(arr[j]);
			}		
		}
		Stack(Stack& s){
			Queue b(s.stack);
			Stack buff(b);
			while(!buff.empty()){
				this->stack.push(buff.top());
				buff.pop();
			}
		}
		void swapstack(Stack& s){
			//  this = 1 2 3 4                       
	        // buff1 = 5 6 7 8 9
			Stack buff1(s);
			do{
				s.pop();
				//cout<<99;
			}while(!s.empty());
			while(!this->empty()){
				s.push(this->top());
				this->pop();
			}
			while(!buff1.empty()){
				this->push(buff1.top());
				buff1.pop();
			}
		}
		void pop(){
			int e[] = {};
			Queue q(e, 0);
			while(this->stack.size() > 1){
				q.push(this->stack.front());
				this->stack.pop();
				//cout<<this->stack.size();
				//cout<<99;
			}
			this->stack.swapqueue(q);
			// 1 2 3 4 5 6 7
			//   6 5 4 3 2 1
			
		}
};
int main(){
	int e[] = {1, 2, 3, 4}, e1[] = {5, 6, 7, 8, 9};
	Queue q1(e, 4), q2(e1, 5);
	//q1.print();
	//q2.print();
	Stack a(q1);  // a = 1 2 3 4                       
	Stack b(q2);  // b = 5 6 7 8 9                        
 	a.swapstack(b);   
  	do{                           
		cout<<b.top()<<" "; 
		b.pop();
	}while(!b.empty());
	cout<<endl;
	do{
		cout<<a.top()<<" ";
		a.pop();
	}while(!a.empty());
	return 0;
}
