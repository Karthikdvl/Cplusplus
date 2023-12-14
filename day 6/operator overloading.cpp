#include<iostream>
using namespace std;

class FLOAT{
	protected:
		float a;
		float b;
	public:
		FLOAT(float n1):a(n1){}	
		
		FLOAT operator+(const FLOAT& obj){
			return FLOAT (a + obj.a);
		}
		FLOAT operator-(const FLOAT& obj){
			return FLOAT (a - obj.a);
		}
		FLOAT operator*(const FLOAT& obj){
			return FLOAT (a * obj.a);
		}
		FLOAT operator/(const FLOAT& obj){
			if (obj.a != 0) {
            return FLOAT(a /obj.a);
        } else {
            std::cout << "Error: Division by zero." << std::endl;
            return FLOAT(0.0);  
        }
		}
		void display(){
			std::cout<<"value = "<<a<<std::endl;
		}
};
int main(){
	FLOAT num1(6.5);
	FLOAT num2(3.5);
	
	FLOAT res_add = num1 + num2;
	cout<<"addition"<<endl;
    res_add.display();

    FLOAT res_sub = num1 - num2;
    cout<<"subtraction"<<endl;
    res_sub.display();

    FLOAT res_mul = num1 * num2;
    cout<<"multiplication"<<endl;
    res_mul.display();

    FLOAT res_div = num1 / num2;
    cout<<"division"<<endl;
    res_div.display();

    return 0;
}
