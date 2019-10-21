#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string>
using namespace std;
class Weapon {
		int damage;
		double cs;
	public:
		Weapon() {
			damage = 10;
			cs = rand();
		}
		Weapon(int d) {
			damage = d;
			cs = rand();
		}
		int WeaponDamage() {
			if(rand() < cs) {
				cs = rand();
				return damage * 2;
			} else {
				cs = rand();
				return damage;
			}
		}
};
class Player {
		string name;
		int health, level;
		Weapon weapon;
		public:
			Player(){
				Weapon w(50);
				weapon = w;
				name = "Untitled";
				health = 100;
				level = 1;
			}
			Player(Weapon w, string n, int h, int l){
				weapon = w;
				name = n;
				health = h;
				level = l;
			}
			string getName(){
				return name;
			}
			int getLevel(){
				return level;
			}
			int getHealth(){
				return health;
			}
			void setName(string n){
				name = n;
			}
			void setHealth(int h){
				health = h;
			}
			void setLevel(int l){
				level = l;
			}
			void LevelUp(){
				level ++;
				health += level * 2;
			}
			bool Alive(){
				return health > 0;
			}
			void LoseHealth(int h){
				health -= h;
			}
			void Attack(Player& p){
				p.LoseHealth(this->weapon.WeaponDamage());
				if(!p.Alive()) this->LevelUp();
			}
};
int main () {
	srand(time(NULL));
	Weapon w(100);
	Player a(w, "1", 100, 1), b(w, "1", 100, 1);
	a.Attack(b);
	cout<<b.getHealth()<<" "<<a.getLevel();
	return 0;
}
