#include <iostream>
using namespace std;

int main()
{
    float p, r, t;
    cout << "Enter p: ";
    cin >> p;
    cout << "Enter r: ";
    cin >> r;
    cout << "Enter t: ";
    cin >> t;
    float si = (p * r * t) / 100;

    cout << "simple interest:" << si << endl;

    return 0;
}