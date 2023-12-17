#include<iostream>
using namespace std;

class construct{
	public:
		int age;
		string name;
		void getName(){
			cout<<"The Name is: "<<name<<endl;
		}
};
int main(){
	construct c1;
	c1.age=20;
	c1.name="Shubham";
	cout<<c1.name<<" "<<c1.age<<endl;
	c1.getName();
	return 0;
}
