#include<iostream>
using namespace std;

class person{
	public:
		std::string name;
		std::string code;
	
};

class person: public account{
	public:
		int pay;
};

class person: public admin{
	public:
		std::string experiance;
	
};

class master: public account, public admin{
	public:
		void create();
		void update();
		void display();
	
};
void master::create(){
	
}
