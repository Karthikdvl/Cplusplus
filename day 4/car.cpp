#include<iostream>
using namespace std;

class car{
	private:
		string model;
		string company;
		int year;
		string colour;
	public:
		car(string m,string c,int y,string col);
		void mode();
		void compan();
		void color();
		void yea();
		void display();
};

car::car(string m,string c,int y,string col){
	model = m;
	company = c;
	year = y;
	colour = col;
}

void car::mode(){
	string newm;
	cout<<"Enter Update Model : "<<endl;
	getline(cin>>ws,newm);
	model = newm;
}

void car::yea(){
	int ye;
	cout<<"Enter Updated Of Purchase : "<<endl;
	cin>>ye;
	year = ye;
}

void car::compan(){
	string com;
	cout<<"Enter Updated Company : "<<endl;
	getline(cin>>ws,com);
	company = com;
}

void car::color(){
	string cco;
	cout<<"Enter Update Colour : "<<endl;
	getline(cin>>ws,cco);
	colour = cco;
}

void car::display()
{
	cout<<endl;
	cout<<"UPDATE DETAILS : "<<endl;
	cout<<"Updated Model = "<<model<<endl;
	cout<<"Updated Company = "<<company<<endl;
	cout<<"Updated Year = "<<year<<endl;
	cout<<"Updated Colour = "<<colour<<endl;
}

int main()
{
		string model;
		string company;
		int year;
		string colour;
		cout<<"Enter Model Of The Car : "<<endl;
		getline(cin>>ws,model);
		cout<<"Enter Car Company : "<<endl;
		getline(cin>>ws,company);
		cout<<"Enter Purchase Year : "<<endl;
		cin>>year;	
		cout<<"Enter Car Colour : "<<endl;
		cin>>colour;
		car obj(model,company,year,colour);
		obj.compan();
		obj.color();
		obj.mode();
		obj.yea();
		obj.display();
}
