#include<iostream>
using namespace std;
class employee{
	protected:
		string name;
		int id;
		int salary;
	public:
		employee(string nam,int i, int s){
			name = nam;
			id = i;
			salary = s;
		}
};

class manager : public employee{
	protected:
		string dept;
		int bonus;
	public:
		manager(string nam,int i, int s,string dep, int bon) : employee(nam,i,s){
			dept = dep;
			bonus = bon;
		}
};

class engineer : public employee{
	protected:
		string speciality;
		int hours;
	public:
		engineer(string nam,int i, int s,string spec, int hour) : employee(nam,i,s){
			speciality = spec;
			hours = hour;
		}
		void print();
};

void engineer::print(){
	
	cout<<"Id = "<<id<<endl;
	cout<<"Name = "<<name<<endl;
	cout<<"Salary = "<<salary<<endl;
	cout<<"Department = "<<speciality<<endl;
	cout<<"Working Hours = "<<hours<<endl;
}

int main()
{
	engineer eng("karthik",12345678,100000,"Software Engineer",10);
	eng.print();
}
