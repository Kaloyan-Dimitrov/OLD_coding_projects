#include <iostream>
using namespace std;
class Vector{
	int* container;
	int lenght, curr;
	public:
		Vector(){
			container = new int[50];
			lenght = 50;
			curr = 0;
		}
		Vector(const Vector& v){
			this->lenght = v.lenght;
			this->curr = v.curr;
			container = new int[this->lenght];
			for(int i = 0; i < v.curr; i ++){
				this->container[i] = v.container[i];
			}	
		}
		Vector& operator=(Vector& v){
			this->lenght = v.lenght;
			this->curr = v.curr;
			container = new int[this->lenght];
			for(int i = 0; i < v.curr; i ++){
				this->container[i] = v.container[i];
			}
		}
		~Vector(){
			delete[] container;
		}
		friend ostream &operator<<(ostream &out, const Vector& v){
			for(int i = 0; i < v.curr; i ++){
				out<<v.container[i]<<" ";
			}
			out<<endl;
			return out;
		}
		friend istream &operator>>(istream &in, Vector& v){
			in>>v.lenght;
			v.lenght += 3;
			v.container = new int[v.lenght];
			for(int i = 0; i < v.lenght - 3; i ++){
				in>>v.container[i];
			}
			v.curr = v.lenght - 3;
			return in;
		}
		int& operator[](const int& index){
			return container[index];
		}
		int size(){
			return curr;
		}
		int max_size(){
			return lenght;
		}
		bool empty(){
			return curr == 0;
		}
		int back(){
			return container[curr - 1];
		}
		int front(){
			return container[0];
		}
		void push_back(const int& a){
			container[curr] = a;
			curr ++;
		}
		void pop_back(){
			curr --;
		}
		void erase(){
			delete[] container;
			container = new int[50];
			lenght = 50;
			curr = 0;
		}
		void insert(int pos, int el){
			if(pos < this->curr){
				int arr[curr];
				for(int i = pos; i < curr; i ++){
					arr[i] = container[i];
				}
				container[pos] = el;
				curr ++;
				for(int i = pos + 1; i < curr; i ++){
					container[i] = arr[i - 1];
				}
			}
			// 0 1 2 3 4 5 6 7 8
			else{
				push_back(el);
				curr ++;
			}
		} 
};
int main (){
Vector v;
cin>>v; // 0 1 3 4 5 6 7 8
v.insert(2, 2); // 0 1 2 3 4 5 6 7 8 
cout<<v;
v.push_back(9); // 0 1 2 3 4 5 6 7 8 9
cout<<v; 
v.pop_back(); // 0 1 2 3 4 5 6 7 8 
cout<<v;
cout<<v.front()<<" "<<v.back()<<endl;//
cout<<v.empty();
/* out:
0 1 2 3 4 5 6 7 8
0 1 2 3 4 5 6 7 8 9
0 1 2 3 4 5 6 7 8
0 8
0
*/
return 0; 
}

