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
			return last;
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
int main(){
int el1[] = {1, 2, 3, 4}, el2[] = {2, 4, 6, 8}, el3[] = {32, 52};
Queue q1(el1, 4), q2(el2, 4);
Queue q3(el3, 2);
q1.swapqueue(q3);
q3.swapqueue(q2);
cout<<endl;
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
cout<<endl;
return 0;
}
