// C++ Program to demonstrate the functioning of a friend class
#include <iostream>
using namespace std;

class ABC {
private:
	int private_variable;

protected:
	int protected_variable;

public:
	ABC()
	{
		private_variable = 10;
		protected_variable = 99;
	}

	// friend class declaration
	friend class F;
};

class F {
public:
	void display(ABC& t)
	{
		cout << "The value of Private Variable = "
			<< t.private_variable << endl;
		cout << "The value of Protected Variable = "
			<< t.protected_variable;
	}
};

// Driver code
int main()
{
	ABC a;
	F fri;
	fri.display(a);
	return 0;
}

