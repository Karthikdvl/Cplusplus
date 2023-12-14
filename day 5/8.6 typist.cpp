#include<iostream>
using namespace std;

class staff{
	protected:
		string code_name;
	public:
		void get_inp(){
			cout<<"Enter Code Name : "<<endl;
			getline(cin>>ws,code_name);
		}
};

class teacher:public staff{
	protected:
		string sub_publication;
	public:
		void get(){
			cout<<"Enter Subject Publication : "<<endl;
			cin>>sub_publication;
		}
};

class officer:public staff{
	protected:
		string grade;
	public:
		void g(){
			cout<<"Enter Grade : "<<endl;
			cin>>grade;
		}
};

class typist:public staff{
	protected:
		int speed;
	public:
		void s(){
			cout<<"Enter Speed : "<<endl;
			cin>>speed;
		}
};

class regular:public typist{
	
};

class casual:public typist{
	protected:
		int wages;
	public:
		void w(){
		cout<<"Enter the Wage : "<<endl;
		cin>>wages;
	}
};

int main(){
	teacher s;
	s.get_inp();
	s.get();
	officer sa;
	sa.g();
	casual ta;
	ta.s();
	ta.w();
}
