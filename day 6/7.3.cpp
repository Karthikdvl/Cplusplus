#include<iostream>
using namespace std;

class mats{
	private:
		int mat[2][2];
		int res[2][2];
	public:
		void get();
		mats operator+(mats);
		mats operator-(mats);
		void disp();
};

void mats::get(){
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<"Enter value : "<<i<<" "<<j;
			cin>>mat[i][j];
		}
	}
}

mats mats::operator+(mats obj){
	mats obj4;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			obj4.res[i][j] = mat[i][j]+obj.mat[i][j];
		}
	}
	return obj4;
}

mats mats::operator-(mats obj){
	mats obj4;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			obj4.res[i][j] = mat[i][j]-obj.mat[i][j];
		}
	}
	return obj4;
}

void mats::disp(){
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<res[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main(){
	mats obj1,obj2,obj3;
	obj1.get();
	obj2.get();
	obj3 = obj1+obj2;
	obj3.disp();
	cout<<endl;
	obj3 = obj1-obj2;
	obj3.disp();
}
