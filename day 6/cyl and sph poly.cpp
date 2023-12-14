#include<iostream>
using namespace std;

class shape{
	public:
	virtual	double area(){
			return 0.0;
		}
	virtual	double volume(){
			return 0.0;
		}
		
		
};

class sphere: public shape{
	private:
		double radius;
	public:
	sphere(double r):radius(r){
	}
	double area(){
		return 4.0 * 3.14159 * radius * radius;
	}	
	double volume(){
		return (4.0/3.0) * 3.14159 *radius *radius *radius; 
	}
};

class cylinder: public shape{
	private:
		double radius;
		double height;
	public:
	cylinder(double r,double h):radius(r), height(h){}
	
	double area(){
		return 2.0*3.14159*radius*(radius+height);
	}	
	double volume(){
		return 3.14159*radius*radius*height;
	}	
};

int main(){
	
sphere sp(2.0);
    cylinder cy(1.0, 3.0);

    shape* s[2];
    s[0] = &sp;
    s[1] = &cy;

    for (int i = 0; i < 2; i++) {
        std::cout << "Area: " << s[i]->area() << std::endl;
        std::cout << "Volume: " << s[i]->volume() << std::endl;
    }

    return 0;
}
