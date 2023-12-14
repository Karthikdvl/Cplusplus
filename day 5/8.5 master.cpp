#include<iostream>
using namespace std;

class account{
	protected:
		int pay;
	public:
		account(int p){
			pay = p;
		}
};

class admin{
	protected:
		int exp;
	public:
		admin(int e){
			exp = e;
		}
};

class person{
	protected:
		string name;
		int code;
	public:
		person(string nam, int cod){
			name = nam;
			code = cod;
		}
};

class master : public account, public person, public admin{
	public:
		void display();
		master(int p,int e,string nam, int cod) : account(p),admin(e), person(nam,cod){
		}
};

void master::display(){
	cout<<"Name = "<<name<<endl;
	cout<<"Experience = "<<exp<<endl;
	cout<<"Pay amount = "<<pay<<endl;
	cout<<"Code = "<<code<<endl;
}
int main()
{
	master obj(10000,5,"karthik",56231);
	obj.display();
}
