#include<iostream>
using namespace std;

class shape{
	public:
		virtual double area(){
			return 0.0;
		}
};

class rectangle: public shape{
	private:
		double length;
		double width;
	public:
	rectangle(double l, double w):length(l),width(w)   {}
		double area() {
			return length * width;
		}
		
};

class circle: public shape{
	private:
		double radius;
	public:
	circle(double r):radius(r)  {}
	
	double area(){
	
		return 3.14159 * radius *radius;}
	
	
		
	
};

int main(){
	shape *s[2];
	s[1] = new rectangle(3.4,5.6);
	s[2] = new circle(4.5);
	cout<<"area of rectangle = ";
	cout<<s[1]->area();
	cout<<"area of circle = ";
	cout<<s[2]->area();
}
