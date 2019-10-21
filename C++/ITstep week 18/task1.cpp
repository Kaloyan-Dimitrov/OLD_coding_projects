#include <iostream>
#include <string>
using namespace std;
class Drinkable {
		double mil;
	public:
		Drinkable() {
			mil = 100;
		}
		Drinkable(double m) {
			mil = m;
		}
		Drinkable(const Drinkable& d) {
			this->mil = d.mil;
		}
		void setMil(double m) {
			mil = m;
		}
		double getMil() {
			return mil;
		}
		friend ostream& operator<<(ostream& out, const Drinkable& d) {
			out<<d.mil;
			return out;
		}
};
class Water: public Drinkable {
		double pH;
	public:
		Water() : Drinkable(100) {
			pH = 7;
		}
		Water(double m, double p) : Drinkable(m) {
			pH = p;
		}
		void setpH(double p) {
			pH = p;
		}
		double getpH() {
			return pH;
		}
		friend ostream& operator<<(ostream& out, const Water& w) {
			out<<(Drinkable)w<<" ";
			out<<w.pH<<endl;
			return out;
		}
};

class Beer: public Drinkable {
		double alp;
	public:
		Beer() : Drinkable(100) {
			alp = 4.0;
		}
		Beer(double m, double a) : Drinkable(m) {
			alp = a;
		}
		void setAlp(double p) {
			alp = p;
		}
		double getAlp() {
			return alp;
		}
		friend ostream& operator<<(ostream& out, const Beer& b) {
			out<<(Drinkable)b<<" ";
			out<<b.alp<<endl;
			return out;
		}
};
class Eatable {
		double gr;
	public:
		Eatable() {
			gr = 500;
		}
		Eatable(double g) {
			gr = g;
		}
		Eatable(const Eatable& e) {
			this->gr = e.gr;
		}
		void setMil(double g) {
			gr = g;
		}
		double getMil() {
			return gr;
		}
		friend ostream& operator<<(ostream& out, const Eatable& e) {
			out<<e.gr;
			return out;
		}
};
class Broccoli: public Eatable {
		string cooked;
	public:
		Broccoli() : Eatable(500) {
			cooked = "Roasted";
		}
		Broccoli(double gr, string c) : Eatable(gr) {
			cooked = c;
		}
		void setCooking(string c) {
			cooked = c;
		}
		string getCooking() {
			return cooked;
		}
		friend ostream& operator<<(ostream& out, const Broccoli& b) {
			out<<(Eatable)b<<" ";
			out<<b.cooked<<endl;
			return out;
		}
};

class Pizza : public Eatable {
		string cooked;
	public:
		Pizza() : Eatable(700) {
			cooked = "Vegetarian";
		}
		Pizza(double gr, string c) : Eatable(gr) {
			cooked = c;
		}
		void setCooking(string c) {
			cooked = c;
		}
		string getCooking() {
			return cooked;
		}
		friend ostream& operator<<(ostream& out, const Pizza& p) {
			out<<(Eatable)p<<" ";
			out<<p.cooked<<endl;
			return out;
		}
};
template <typename T1, typename T2>
class Food_Stall2 {
		T1* foods1;
		T2* foods2;
		int size1, size2;
	public:
		Food_Stall<T1, T2>(){
			foods1 = new T1[10];
			foods2 = new T2[10];
			size1 = 10;
			size2 = 10;
		}
		Food_Stall<T1, T2>(int i, int j){
			foods1 = new T1[i];
			foods2 = new T2[j];
			size1 = i;
			size2 = j;
		}
		Food_Stall<T1, T2>(const Food_Stall& f){
			foods1 = new T1[f.size1];
			foods2 = new T2[f.size2];
			for(int i = 0; i < f.size1; i ++){
				this->foods1[i] = f.foods1[i]; 
			}
			for(int i = 0; i < f.size2; i ++){
				this->foods2[i] = f.foods2[i]; 
			}
			this->size1 = f.size1;
			this->size2 = f.size2;
		}
		Food_Stall<T1, T2> operator= (const Food_Stall& f){
			delete[] foods1;
			delete[] foods2;
			foods1 = new T1[f.size1];
			foods2 = new T2[f.size2];
			for(int i = 0; i < f.size1; i ++){
				this->foods1[i] = f.foods1[i]; 
			}
			for(int i = 0; i < f.size2; i ++){
				this->foods2[i] = f.foods2[i]; 
			}
			this->size1 = f.size1;
			this->size2 = f.size2;
		}
		T1 getEl1(int i){
			return foods1[i];
		} 
		T2 getEl2(int i){
			return foods2[i];
		} 
		~Food_Stall<T1, T2>(){
			delete[] foods1;
			delete[] foods2;
		} 
		void add1(T1 product){
			delete[] this->foods1;
			this->foods1 = new T1 [this->size1 + 1];
			this->size1 ++;
			foods1[size1 - 1] = product; 
		}
		void add2(T2 product){
			delete[] this->foods2;
			this->foods2 = new T2 [this->size2 + 1];
			this->size2 ++;
			foods1[size2 - 1] = product; 
		}
		friend ostream& operator<<(ostream& out, const Food_Stall& f) {
			for(int i = 0; i < f.size1; i ++){
				out<<f.foods1[i];
			}
			cout<<endl;
			for(int i = 0; i < f.size2; i ++){
				out<<f.foods2[i];
			}
			cout<<endl;
			return out;
		}
		void resize1(){
			T1 *productT1 = new T1[size1];
			for (int i = 0; i <= size1; i++)
			{
				productT1[i] = foods1[i];
			}
			foods1 = new T1[size1*2];
			for(int i = 0; i <= size1; i++)
			{
					foods1[i] = productT1[i];
			}
			size1*=2;
			delete [] productT1;
		}
		void resize2(){
			T2 *productT2 = new T2[size1];
			for (int i = 0; i <= size2; i++)
			{
				productT2[i] = foods2[i];
			}
			foods2 = new T2[size2*2];
			for(int i = 0; i <= size2; i++)
			{
					foods2[i] = productT2[i];
			}
			size2*=2;
			delete [] productT2;
		}
};
int main () {
	return 0;
}
