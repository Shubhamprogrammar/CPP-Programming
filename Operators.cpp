//Arithmetic Operators 
// Binary Operator(+,-,*,/,%) & Unary Operator(++,--)
//Relational Operators (==,>=,<=,>,<,!=)
//Logical Operators (&&, ||, !)
//Bitwise Operators (&, |, ^, >>, <<, ~)
//Assignment Operators (=, +=, -=, *=, /=)
//Ternary or Conditional Operators (?:)

#include<iostream>
using namespace std;

int main(){
	int p=5;
	cout<<p++<<endl;
	cout<<++p<<endl;
	cout<<p--<<endl;
	cout<<--p<<endl;
	
	int a = 6, b = 4;

	// Binary AND operator
	cout << "a & b is " << (a & b) << endl;

	// Binary OR operator
	cout << "a | b is " << (a | b) << endl;

	// Binary XOR operator
	cout << "a ^ b is " << (a ^ b) << endl;

	// Left Shift operator
	cout << "a<<1 is " << (a << 1) << endl;

	// Right Shift operator
	cout << "a>>1 is " << (a >> 1) << endl;

	// One’s Complement operator
	cout << "~(a) is " << ~(a) << endl;
	
	int res = (a < b) ? b : a;
    cout << "The greatest number is " << res << endl;
	return 0;
}


