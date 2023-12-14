#include<iostream>
using namespace std;
class karthik{
	private:
		string m;
		bool res;
	public:
		void get(string);
		karthik operator==(karthik);
		void disp();
};
void karthik::disp(){
	if(res==0){
		cout<<" both are not equal";
	}
	else{
		cout<<"both are equal";
	}
}
void karthik::get(string s){
	m = s;
}
karthik karthik::operator==(karthik obj){
	karthik obj4;
	obj4.res = m==obj.m;
	return obj4;
}
int main()
{
	karthik obj4,obj1,obj2;
	obj1.get("abcdef");
	obj2.get("ghijkl");
	obj4 = obj1==obj2;
	obj4.disp();
}
