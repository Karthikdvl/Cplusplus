#include<iostream>
using namespace std;

class vector{
	private:
		int arr[5];
	
	public:
		void create();
		void modify();
		void multiply();
		void display();
		
};

void vector::create(){
//	int size;
//	cout<< "enter the size of array";
//	cin>>size;
//	int arr[size];
	cout<<"enter array elements"<<endl;
	for(int i=0;i<5;i++){
		cin>>arr[i];
		
	}
}
void vector::modify(){
	int mod,n;
	cout<<"enter element to be modified"<<endl;
	cin>>mod;
	cout<<"enter new element "<<endl;
	cin>>n;
	for(int i=0;i<5;i++){
		if(arr[i]==mod){
			arr[i]=n;
		}
	}
	
}

void vector::display(){
	cout<<"vector = (";
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
	cout<<")"<<endl;
}

void vector::multiply(){
	cout<<"enter the number to be multipliyed by vector"<<endl;
	int mul,i;
	cin>>mul;
	for(i=0;i<5;i++){
		arr[i]=arr[i]*mul;
	}
}

int main(){
//	int size;
//	cout<< "enter the size of array";
//	cin>>size;
//	cout<<"enter array elements";
//	int arr[size];
//	for(int i=0;i<size;i++){
//		cin>>arr[i];
//		cout<<"\n";
//	}
	int  arr[5];
	vector v;
	int choice;

	
	do{
		cout<<"\\ vector operations \\"<<endl;
		cout<<"1. create "<<endl;
		cout<<"2. modify "<<endl;
		cout<<"3. multiply"<<endl;
		cout<<"4. display "<<endl;
		cout<<"5. exit"<<endl;
		cout<<"enter your choice"<<endl;
		cin>>choice;
		switch (choice){
			case 1:
				v.create();
				break;
			case 2:
				v.modify();
				break;
			case 3:
				v.multiply();
				break;
			case 4:
				v.display();
				break;
			case 5:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
						
	}	
	}while (choice!=5);
	return 0;
	
}
