#include<iostream>
using namespace std;

int main(){
	int n,i;
	cout<<"enter";
	cin>>n;
	double fact =1;
	for(i=1;i<=n;i++){
		fact = fact*i;
	}
	cout<<fact;
}
