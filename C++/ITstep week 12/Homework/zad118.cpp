#include <iostream>  
#include <math.h> 
using namespace std;
class point {
	float x, y;
	public:
	point(float = 0, float = 0);
	void print();
	void move (float, float);
	void set_x(float);
	void set_y(float);
};
point::point(float ix, float iy){
	x = ix;
	y = iy;
}	
void point::print(){
	cout<<"("<<x<<", "<<y<<")\n";
}	
void point::move(float tox, float toy){
	x += tox;
	y += toy;	
}
void point::set_x(float mx){
	x = mx;
}
void point::set_y(float my){
	y = my;
}
int main(){
float x, y;
int n;
cout<<"n = ";
cin>>n;
point p[10];
for(int i = 0;i < n;i ++){
	cout<<"Point number "<<i + 1<<endl;	
	cout<<"x = ";
	cin>>x;
	cout<<"y = ";
	cin>>y;
	cout<<endl;
	p[i].set_x(x);
	p[i].set_y(y);
	p[i].move(2, 4);
}
for(int i = 0;i < n;i ++){
	p[i].print();
}
return 0;	
}
