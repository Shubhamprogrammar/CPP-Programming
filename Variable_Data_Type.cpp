#include <iostream>
using namespace std;

int main(){
	cout << "Size of char : " << sizeof(char) << endl;
    cout << "Size of int : " << sizeof(int) << endl;
 
    cout << "Size of long : " << sizeof(long) << endl;
    cout << "Size of float : " << sizeof(float) << endl;
 
    cout << "Size of double : " << sizeof(double) << endl;
	
	// Integer Data Types
  	int a = 10;
  	short b = 20;
  	long c = 30;
  	cout << "Integer data types: " << endl;
  	cout << "int: " << a << endl;
  	cout << "short: " << b << endl;
  	cout << "long: " << c << endl;
   
  	// Floating-point data types
  	float e = 3.14f;
  	double f = 3.141592;
  	cout << "Floating-point data types: " << endl;
  	cout << "float: " << e << endl;
  	cout << "double: " << f << endl;
  
  	// Character Data types
  	char h = 'a';
  	cout << "Character data types: " << endl;
  	cout << "char: " << h << endl;
   
  	// Boolean data type
  	bool l = true;
  	bool m = false;
  	cout << "Boolean data type: " << endl;
  	cout << "true: " << l << endl;
  	cout << "false: " << m << endl;
   
  	// String data type
  	string n = "Shubham";
  	cout << "String data type: " << endl;
  	cout << n << endl;
	return 0;
}
