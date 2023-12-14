#include<iostream>
using namespace std;

class animal{
	protected:
		string name;
		string species;
		int age;
	public:
		void gets();
};

class cat:public animal{
	protected:
		string colour;
		string breed;
	public:
		void get();
		void disp();
};

class dog:public animal{
	protected:
		int weight;
		string breed;
	public:
		void get();
		void disp();
};

void cat::get(){
	string col, bre;
	cout<<"Enter The Colour : "<<endl;
	getline(cin>>ws,col);
	cout<<"Enter the breed : "<<endl;
	getline(cin>>ws,bre);
	colour = col;
	breed = bre;
}

void dog::get(){
	int wei;
	string be;
	cout<<"Enter the weight : "<<endl;
	cin>>wei;
	cout<<"Enter the breed : "<<endl;
	getline(cin>>ws,be);
	weight = wei;
	breed= be;
}

void animal::gets(){
	string nam,spec;
	cout<<"Enter the name : "<<endl;
	getline(cin>>ws,nam);
	name = nam;
	cout<<"Enter the species : "<<endl;
	getline(cin>>ws,spec);
	species = spec;
}
void cat::disp(){
	cout<<"Colour is : "<<colour<<endl;
	cout<<"Breed is : "<<breed<<endl;
}

void dog::disp(){
	cout<<"Weight is : "<<weight<<endl;
	cout<<"Breed is : "<<breed<<endl;
}

int main()
{
	cat obj1;
	obj1.gets();
	obj1.get();
	obj1.disp();
	dog obj2;
	obj2.gets();
	obj2.get();
	obj2.disp();
}
