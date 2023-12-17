#include <iostream>
using namespace std;

class MyClass {
public:
    // Constructor
    MyClass() {
        cout << "Constructor called\n";
    }
    
    void display(){
        cout<<"The Myclass Display function\n";
    }

    // Destructor
    ~MyClass() {
        cout << "Destructor called\n";
    }
};

int main() {
    // Creating an object of MyClass
    MyClass myObject;
    myObject.display();

    // The object goes out of scope when main() finishes
    // The destructor is automatically called at this point

    return 0;
}
