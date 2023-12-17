#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Declare a vector of integers
    vector<int> numbers;

    // Add elements to the vector
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    // Access elements
    cout << "Elements in the vector:" <<endl;
    for (int i = 0; i < numbers.size(); ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Modify an element
    numbers[1] = 25;

    // Add more elements
    numbers.push_back(40);
    numbers.push_back(50);


    // Remove the last element
    numbers.pop_back();
    
    // Access elements
    cout << "Elements in the vector:" <<endl;
    for (int i = 0; i < numbers.size(); ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Check if the vector is empty
    if (numbers.empty()) {
        cout << "The vector is empty." << endl;
    } else {
        cout << "The vector is not empty." << endl;
    }

    // Get the size of the vector
    cout << "Size of the vector: " << numbers.size() << endl;

    // Clear all elements from the vector
    numbers.clear();

    // Check if the vector is empty again
    if (numbers.empty()) {
        cout << "The vector is empty after using clear method." << endl;
    }

    return 0;
}
