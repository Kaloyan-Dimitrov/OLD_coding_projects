#include <iostream>
using namespace std;
class Stack{
	int stack[100];
	int last = 0;
	public:
		Stack(){
		}
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
		void print(){
			for(int i = 0; i < last; i ++){
				cout<<stack[i]<<" ";
			}
			cout<<endl;
		}
};
class Queue{
	Stack queue;
	public:
		bool empty(){
			return queue.empty();
		}
		int size(){
			return queue.size();
		}
		int back(){
			return queue.top();
		}
		int front(){
			Stack s(this->queue);
			while(s.size() > 1){
				s.pop();
			}
			return s.top();
		}
		void swap(int a, int b){
			queue.swap(a, b);
		}
		void push(int a){
			if(queue.size() < 100) queue.push(a);
		}
		void swapqueue(Queue& q){
			this->queue.swapstack(q.queue);
		}
		void pop(){
			if(size() > 0){
				// 1 2 3 4 5
				//   2 3 4 5
				int arr[100], i;
				//Stack buff(Queue(arr, 0));
				for(i = 0; queue.size() > 1; i ++){
					arr[i] = queue.top();
					queue.pop();
				}
				queue.pop();
				for(int j = i - 1; j >= 0; j --){
					queue.push(arr[j]);
				}
			}
		}
        Queue(int arr[], int len){
			for(int i = 0; i < len; i ++){
				this->queue.push(arr[i]);
			}
		}
		Queue(Queue& q){
			int qv[100], i;
			for(i = 0; !q.empty(); i ++){
				qv[i] = q.front();
				q.pop();
			}
			for(int j = 0; j < i; j ++){
				queue.push(qv[j]);
				q.push(qv[j]);
			}
		}
		Queue(){}
		void print(){
			queue.print();
		}
};
int main(){
int el1[] = {1, 2, 3, 4}, el2[] = {2, 4, 6, 8}, el3[] = {32, 52};
Queue q1(el1, 4), q2(el2, 4);
Queue q3(el3, 2);
q1.swapqueue(q3);
q3.swapqueue(q2);
do{
	cout<<q1.front()<<" ";
	q1.pop();
}while(!q1.empty());
cout<<endl;
do{
	cout<<q2.front()<<" ";
	q2.pop();
}while(!q2.empty());
cout<<endl;
do{
	cout<<q3.front()<<" ";
	q3.pop();
}while(!q3.empty());	
return 0;
}
