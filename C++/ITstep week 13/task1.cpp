#include <iostream>
using namespace std;
class Circle {
		double x, y, r;
	public:
		Circle() {
			x = 0;
			y = 0;
			r = 1;
		}
		Circle(double _x, double _y, double _r) {
			x = _x;
			y = _y;
			r = _r;
		}
		void setXandY(double _x, double _y) {
			x = _x;
			y = _y;
		}
		void setR(double _r) {
			r = _r;
		}
		double getX() {
			return x;
		}
		double getY(){
			return y;
		}
		double getR(){
			return r;
		}
		void expand(int n){
			r *= n;
		}
		void print(){
			cout<<"r = "<<r<<"\nx = "<<x<<"\ny = "<<y<<endl;
		}
		void move(double _x, double _y){
			x += _x;
			y += _y;			
		}
		
};
int main () {
	Circle c(0, 0, 5);
	c.print();
	c.setXandY(1, 1);
	c.setR(6);
	c.print();
	c.move(1, 1);
	c.expand(5);
	c.print();
	return 0;
}
