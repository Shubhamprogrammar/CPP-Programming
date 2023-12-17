#include <iostream>
using namespace std;

int main() {
    // Declare and initialize an integer array
    int numbers[5] = {10, 20, 30, 40, 50};

    // Access and print elements of the array
    cout << "Elements in the array:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Modify an element of the array
    numbers[1] = 25;

    // Access and print elements of the array
    cout << "Elements in the array:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Calculate the sum of the elements
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += numbers[i];
    }

    cout << "Sum of the elements: " << sum << endl;
    
    int arr[4][2] = {
		{ 10, 11 },
		{ 20, 21 },
		{ 30, 31 },
		{ 40, 41 }
		} ;
		
	int i,j;
	
	cout<<"Printing a 2D Array:\n";
	for(i=0;i<4;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<"\t"<<arr[i][j];
		}
		cout<<endl;
	}

    return 0;
}

// Practice
//Q.1. Program to find the largest element in array
//Q.2. Program to find the smallest element in array
//Q.3. Program to reverse the array
//Q.4. Program to find the average of the elements of the array
//Q.5. Program to count the even and odd elements in an array
