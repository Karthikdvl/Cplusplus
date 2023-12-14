#include<iostream>
using namespace std;
class dm;
class db{
	private:
		double feet;
		double inches;
	public:
		db(double f, double i);
		friend void sum(db,dm);
};

class dm{
	private:
		double metre;
		double centimetre;
	public:
		dm(double m, double c);
		friend void sum(db,dm);
};

dm::dm(double m, double c){
	metre = m;
	centimetre = c;
}

db::db(double f,double i){
	feet = f;
	inches = i;
}

void sum( db obj1, dm obj2){
	cout<<obj2.centimetre+obj1.inches;
}

int main(){
	db obj1(5,6);
	dm obj2(8,9);
	sum(obj1,obj2);
}
