#include<iostream>
using namespace std;

int main()
{
	string a ="karthik";
	int i,j,coun = 0;
	int size = sizeof(a)/sizeof(a[0]);
	for(i=0;i<size;i++){
		coun = 0;
		for(j=0;j<size;j++){
			if(a[i]==a[j]){
				coun+=1;
			}
		}
		cout<<"Frequency of "<<a[i]<<" = "<<coun<<endl;
	}
}
