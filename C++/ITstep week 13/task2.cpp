#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
class Fraction {
		int numer, denom;
		int lcm(int a, int b){
			int lcm, i = 1;
			while(lcm % b != 0) {
				lcm = a * i;
				i ++;	
			}
			return lcm;
		}
		int gcd(int a, int b) {
			int del1[1000], del2[1000], j = 0;
			for(int i = 2;i <= a;i ++) {
				if(a % i == 0){
					del1[j] = i;
					j ++;
				}	
			}
			int m = 0;
			for(int i = 2;i <= b;i ++) {
				if(b % i == 0){
					del2[m] = i;
					m ++;
				}	
			}
			int maxDel = 1;
			for(int i = 0;i < j;i ++){
				for(int z = 0;z < m;z ++){
					if(del1[i] == del2[z] and maxDel < del1[i]) maxDel = del1[i]; 
				} 
			}
			return maxDel;
		}
	public:
		void print(){
			cout<<numer<<"/"<<denom<<endl;
		}
		Fraction() {
			numer = 1;
			denom = 1;
		}
		Fraction(int n, int d) {
			if(d != 0){
				n /= gcd(n, d);
				d /= gcd(n, d);
				numer = n;
				denom = d;
			}
		}
		double getNumer(){
			return numer;
		}
		double getDenom(){
			return denom;
		}
		double setNumer(double _numer){
			numer = _numer;
		}
		double setDenom(double _denom){
			_denom = denom;
		}	
		Fraction operator+(const Fraction& f){
			int d = lcm(f.denom, this->denom);
			int n = this->numer * (d / this->denom) + f.numer * (d / f.denom);  
			Fraction result(n, d);
			return result;
		}
		Fraction operator-(const Fraction& f){
			int d = lcm(f.denom, this->denom);
			int n = this->numer * (d / this->denom) - f.numer * (d / f.denom);  
			Fraction result(n, d);
			return result;
		}
		Fraction operator*(const Fraction& f){
			int d = this->denom * f.denom;
			int n = this->numer * f.numer;
			n /= gcd(n, d);
			d /= gcd(n, d);
			Fraction result(n, d);
			return result;
		}
		Fraction operator/(const Fraction& f){
			int d = this->denom * f.numer;
			int n = this->numer * f.denom;
			n /= gcd(n, d);
			d /= gcd(n, d);
			Fraction result(n, d);
			return result;
		}
};
int main () {
	Fraction a(1, 2), b(1, 3), c;
	c = a * b;
	c.print();
	return 0;
}
