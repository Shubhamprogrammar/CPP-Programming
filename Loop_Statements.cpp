// Loops Tutorial

#include <iostream>
using namespace std;

int main()
{

    cout<<"** For Loop Tutorial **"<<endl;

    // Print Table of 3
    for (int i = 1; i <= 10; i++)
    {
        cout<<"3 * "<< i<<" = "<< 3 * i<<endl;
    }

    // Print Even Number
    cout<<"Even Numbers :- "<<endl;
    for (int i = 1; i < 50; i++)
    {
        if (i % 2 == 0)
        {
            cout<<i<<" ";
        }
    }

    // Print Odd Number
    cout<<"Odd  Numbers :- "<<endl;
    for (int i = 1; i < 100; i++)
    {
        if (i % 2 != 0)
        {
            cout<<i<<" ";
        }
    }

    cout<<"\n** While Loop Tutorial **"<<endl;

    // Print Table of 3
    int i = 1;
    while (i < 11)
    {
        cout<<"3 * "<< i<<" = "<< 3 * i<<endl;
        i++;
    }

    // Print Even Number
    cout<<"Even Numbers :- "<<endl;
    i = 1;
    while (i < 100)
    {
        if (i % 2 == 0)
        {
            cout<<i<<" ";
        }
        i++;
    }

    // Print Odd Number
    cout<<"Odd Numbers :- "<<endl;
    i = 1;
    while (i < 100)
    {
        if (i % 2 != 0)
        {
            cout<<i<<" ";
        }
        i++;
    }

    cout<<"\n** Do While Loop Tutorial **"<<endl;
    // Print Table of 3
    i = 1;
    do
    {
        cout<<"3 * "<< i<<" = "<< 3 * i<<endl;
        i++;
    } while (i < 11);

    // Print Even Number
    printf("\nEven Numbers :- ");
    i = 1;
    do
    {
        if (i % 2 == 0)
        {
            cout<<i<<" ";
        }
        i++;
    } while (i < 100);

    // Print Odd Number
    printf("\nOdd Numbers :- ");
    i = 1;
    do
    {
        if (i % 2 != 0)
        {
            cout<<i<<" ";
        }
        i++;
    } while (i < 100);
}
