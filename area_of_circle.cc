#include <iostream>
using namespace std;

int main()
{
    float pie = 3.1415;
    float r;
    cout << "Enter Raduis of circle: ";
    cin >> r;
    float a = pie * r * r;

    cout << "Area of Circle:" << a << endl;

    return 0;
}