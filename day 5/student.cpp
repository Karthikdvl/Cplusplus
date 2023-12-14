#include<iostream>
using namespace std;

class student{
	private:
		int reg_no;
		string name;
		string branch;
		int subj1,subj2,subj3,subj4;
	public:
		student(int reg,string nam,string br,int s1,int s2,int s3, int s4);
		void display();
};

student::student(int reg,string nam,string br,int s1,int s2,int s3, int s4){
	reg_no = reg;
	name = nam;
	branch = br;
	subj1 = s1;
	subj2 = s2;
	subj3 = s3;
	subj4 = s4;
}
void student::display(){
	int sum = subj1+subj2+subj3+subj4;
	int res = (sum*100)/400;
	cout<<endl;
	cout<<"Name : "<<name<<endl;
	cout<<"Reg No : "<<reg_no<<endl;
	cout<<"Branch : "<<branch<<endl;
	cout<<"Total Marks = "<<sum<<"/400"<<endl;
	if(res>=90){
		cout<<"Grade = S Grade"<<endl;
	}
	else if(res>=80 && res<90){
		cout<<"Grade = A Grade"<<endl;
	}
	else if(res>=80 && res<90){
		cout<<"Grade = B Grade"<<endl;
	}
	else if(res>=70 && res<80){
		cout<<"Grade = C Grade"<<endl;
	}
	else if(res>=60 && res<70){
		cout<<"Grade = D Grade"<<endl;
	}
	else if(res>=50 && res<60){
		cout<<"Grade = E Grade"<<endl;
	}
	else{
		cout<<"Grade = F Grade"<<endl;
	}
}

int main()
{
	int reg_no,s1,s2,s3,s4;
	string name,branch;
	cout<<"Enter your Name : "<<endl;
	getline(cin>>ws,name);
	cout<<"Enter your Reg No : "<<endl;
	cin>>reg_no;
	cout<<"Enter your Branch : "<<endl;
	cin>>branch;
	cout<<"Enter your Subject 1 : "<<endl;
	cin>>s1;
	cout<<"Enter your Subject 2 : "<<endl;
	cin>>s2;
	cout<<"Enter your Subject 3 : "<<endl;
	cin>>s3;
	cout<<"Enter your Subject 4 : "<<endl;
	cin>>s4;
	student obj(reg_no,name,branch,s1,s2,s3,s4);
	obj.display();
}
