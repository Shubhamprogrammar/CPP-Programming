#include <iostream>
using namespace std;

// Single Inheritance
class A{
    
};

class B : public A{
    
};

// Multilevel Inheritance
class A {
    
};
class B : public A{
    
};
class C: public B{
    
};

// Multiple Inheritance
class A{
    
};
class B{
    
};
class C : public A,B{
    
};

// Hierarchial Inheritance
class A{
    
};
class B :public A{
    
};
class C: public A{
    
};

// Hybrid Inheritance
class A{
    
};
class B:public A{
    
};
class C : public A{
    
};
class D:public B,C{
	
};

int main()
{
    
    return 0;
}
