#include <iostream>
using namespace std;

// Single Inheritance
class A{
    public:
    	void display(){
    		cout<<"Class A"<<endl;
		};
};

class B : public A{
    
};

// Multilevel Inheritance
class C {
	public:
    void display(){
    		cout<<"Class C"<<endl;
		};
};
class D : public C{
    
};
class E: public D{
    
};

// Multiple Inheritance
class F{
    public:
    	void display(){
    		cout<<"Class F"<<endl;
		};
};
class G{
    public:
    	void disp(){
    		cout<<"Class G"<<endl;
		};
};
class H : public F,G{
    
};
int main(){
	B b;
	b.display();
	
	E e;
	e.display();
	
	H h;
	h.display();	
}

