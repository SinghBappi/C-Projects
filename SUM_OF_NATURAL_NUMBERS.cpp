//Write a program to find the sum of the first N natural numbers using a for loop.
#include <iostream>
using namespace std;

int main() {
    int n,sum=0;
    cout<<"Enter a Number:";
    cin>>n;
    for (int i = 0; i <=n; i++) {
        sum=sum+i;

        
    }
    cout << "The sum of first "<< n <<" natural no. is "<<sum << endl;
    
    
    return 0;
}
