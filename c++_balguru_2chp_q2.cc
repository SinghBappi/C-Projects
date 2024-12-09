#include <iostream>
using namespace std;

int main() {
    int n1,n2;
    cout << "Number1:" << endl;
    cin >> n1;
    cout << "Number2:" << endl;
    cin >> n2;
    if (n1>n2)
    {
        cout << "Number 1 is greater than Number 2" << endl;
        
    }else if(n1==n2){
        cout << "Both are equal" << endl;
        
    }
    else{
        cout << "Number 2 is greater than Number 1" << endl;
        
    }
    
    return 0;
}