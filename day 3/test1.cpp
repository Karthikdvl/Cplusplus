#include<iostream>
using namespace std;

class book{
	private:
		string author;
		string title;
		int price;
		string publisher;
		int stock;
		int s_transaction=0, f_transaction=0;
	public:
		book(string aut,string tit,int pri,string pub,int sto,int st,int ft);
		void buy();
		void change_price();
		void transaction();
};

book::book(string aut,string tit,int pri,string pub,int sto,int st,int ft){
	author = aut;
	title = tit;
	price = pri;
	publisher = pub;
	stock = sto;
	s_transaction = st;
	f_transaction = ft;
}

void book::buy(){
	string titl;
	cout<<"Enter the title of the book"<<endl;
	getline(cin>>ws,titl);
	string aut;
	cout<<"Enter Author Name : "<<endl;
	getline(cin>>ws,aut);
	if(titl==title && aut==author){
		cout<<"Book Name : "<<title<<endl;
		cout<<"Author Name : "<<author<<endl;
		cout<<"Price of the book : "<<price<<endl;
		cout<<"Current Stock Available : "<<stock<<endl;
		int copy;
		cout<<"Enter the number of copies required : "<<endl;
		cin>>copy;
		if(stock>copy){
			int pri;
			pri = price*copy;
			cout<<"Grand Total = "<<pri<<endl;
			stock = stock-copy;
			s_transaction+=1;
		}
		else{
			cout<<"Requested Copies Not In stock"<<endl;
			if(f_transaction>0){
			f_transaction-=1;}
		}
	}
	else{
		cout<<"Book is Not Available"<<endl;
	}
}

void book::change_price(){
	int pr;
	string nam;
	cout<<"Enter the book name : "<<endl;
	getline(cin>>ws,nam);
	if(nam==title){
		cout<<"Enter New Price : "<<endl;
		cin>>pr;
		price = pr;
	}else{
		cout<<"Book Not available"<<endl;
	}
}

void book::transaction(){
	cout<<"Successful Transaction : "<<s_transaction<<endl;
	cout<<"UnSuccessful Transaction : "<<f_transaction<<endl;
}

int main()
{
	string aut;
	string tit;
	int pri;
	string pub;
	int sto;
	int st;
	int ft;
	int opt;
	int i=0;
	cout<<"Enter Author Name : "<<endl;
	getline(cin>>ws,aut);
	cout<<"Enter Book Title : "<<endl;
	getline(cin>>ws,tit);
	cout<<"Enter Price Of the Book : "<<endl;
	cin>>pri;
	cout<<"Enter Publisher Name : "<<endl;
	getline(cin>>ws,pub);
	cout<<"Enter The Stock Available : "<<endl;
	cin>>sto;
	cout<<"Enter Successful Transaction : "<<endl;
	cin>>st;
	cout<<"Enter Failure Transaction : "<<endl;
	cin>>ft;
	book obj(aut,tit,pri,pub,sto,st,ft);
	while(opt!=4){
		cout<<endl;
		cout<<"1) Buy Book "<<endl;
		cout<<"2)  Change Price Of Book"<<endl;
		cout<<"3) Transaction Details"<<endl;
		cout<<" 4) Exit"<<endl;
		cout<<"Enter your option : "<<endl;
		cin>>opt;
		if(opt==1){
			obj.buy();
		}
		else if(opt==2){
			obj.change_price();
		}
		else if(opt==3){
			obj.transaction();
		}
		else if(opt==4){
			break;
		}
		else{
			break;
		}
	}
}
