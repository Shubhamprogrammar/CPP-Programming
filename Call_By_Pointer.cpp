#include <iostream>
using namespace std;

void swap(int *a,int *b){
    
    cout<<"\nAddress of a is "<<&a;
    
    cout<<"\nAddress of b is "<<&b;
    
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    // Call By Pointer 
    
    int a=10;
    int b=20;
    
    cout<<"\nValue of a is "<<a<<" and Value of b is "<<b;
    
    cout<<"\nAddress of a is "<<&a;
    
    cout<<"\nAddress of b is "<<&b;
    
    swap(&a,&b);
    
    cout<<"\nValue of a is "<<a<<" and Value of b is "<<b;

    return 0;
}
