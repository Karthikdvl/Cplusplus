#include<iostream>
using namespace std;

class bank{
	protected:
		string name;
		int number;
		string type;
		float balance;
	public:
		bank(){
			balance = 10000;
		}
		void input();
		int withdraw();
		void deposit();
		void display();
};

void bank::input(){
	string nam,typ;
	int num;
	cout<<"Enter Account Holder Name : "<<endl;
	getline(cin>>ws,nam);
	cout<<"Enter Account Type : "<<endl;
	getline(cin>>ws,typ);
	cout<<"Enter Account Number : "<<endl;
	cin>>num;
	name = nam;
	number = num;
	type = typ;
}

int bank::withdraw(){
	int with;
	cout<<"Enter Amount To Withdraw : "<<endl;
	cin>>with;
	if(balance>with){
		balance-=with;
		cout<<"Total Balance = "<<balance<<endl;
		if(balance<1000){
			cout<<"low balance ";
		}
	}
	else{
		cout<<"Insufficient Balance!!!"<<endl;
	}
	return balance;
}

void bank::deposit(){
	int dept;
	cout<<"Enter Amount To Deposit : "<<endl;
	cin>>dept;
	balance+=dept;
	cout<<"Total Balance = "<<balance<<endl;
}

void bank::display(){
	cout<<"Account Holder Name : "<<name<<endl;
	cout<<"Account Number : "<<number<<endl;
	cout<<"Account Type : "<<type<<endl;
	cout<<"Account Balance : "<<balance<<endl;
}

class current : public bank{
	protected:
		float charge;
		string chequebook;
	public:
		current(){
			charge = 1000;
		}
		void cheque();
		void penalty();
};

void current::penalty(){
	if(balance<5000){
		cout<<"Your Penalty = 1000"<<endl;
		balance-=charge;
	}
}

void current::cheque(){
	int mo;
	cout<<"Enter Money For Cheque Issue : "<<endl;
	cin>>mo;
	 if(balance>mo){
	cout<<"Cheque Issuer Name : "<<name<<endl;
	cout<<"Cheque Issuer Number : "<<"101"<<number<<endl;
	balance-=mo;
	cout<<"Balance after Cheque Issued : "<<balance<<endl;
}
else if(balance<1000){
	cout<<"insufficient balance";
		cout<<"your panalty = 100";
	}
else{
	cout<<"Insufficient balance";
}
}

class saving : public bank{
	protected:
		float interest;
	public:
		void depint();
};

void saving::depint(){
	float time,rate=0.2;
	cout<<"Enter Intrest Time : "<<endl;
	cin>>time;
	interest = balance*rate/time;
	cout<<"Simple Interest = "<<interest<<endl;
}
int main(){
	string inp;
	saving s;
	current c;
	
	cout<<"Enter Account Type (savings , current): "<<endl;
	getline(cin>>ws,inp);
	if(inp=="savings"){
		s.input();
		s.deposit();
		s.withdraw();
		s.depint();		
	}
	else if(inp == "current"){
		c.input();
		c.deposit();
		int sav = c.withdraw();
		if(sav<1000){
			cout<<"panalty = 100";
		}
		else{
		c.cheque();}
		//c.penalty();	
	}
	else {
		cout<<"Bank type not found";
	}
}
