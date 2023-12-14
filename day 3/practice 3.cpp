#include<iostream>
using namespace std;
int main(){
	char ch;
	cout<<"enter char";
	cin>>ch;
	if(ch == 'a' || ch == 'A' ||ch == 'e' || ch == 'E'|| ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O'
	||ch == 'u' || ch == 'U'){
		cout<<ch<<"is vowel";
	}
	else{
		cout<<ch<<"is consonent";
	}

}
