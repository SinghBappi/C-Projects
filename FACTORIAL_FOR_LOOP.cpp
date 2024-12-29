#include <iostream>
//Write a program to calculate the factorial of a number using a for loop.

using namespace std;

int main() {
    int num;int factorial=1;
    cout<<"Enter a Number:"<<endl;
    cin>>num;
    for (int i = 1; i <= num; i++)
    {
         factorial=factorial*i;
    }
    cout<<"The factorial of Number is :"<< factorial<< endl;
    

    
    return 0;
}