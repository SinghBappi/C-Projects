#include <iostream>
using namespace std;

class TemperatureConverter {
public:
    void setFahrenheit(float f) {
        fahrenheit = f;
    }

    float toCelsius() {
        return (5.0 / 9.0) * (fahrenheit - 32);
    }

private:
    float fahrenheit;
};

int main() {
    TemperatureConverter tempConverter;
    float f;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> f;
    tempConverter.setFahrenheit(f); 
    cout << "Equivalent temperature in Celsius: " << tempConverter.toCelsius() << endl;

    return 0;
}
