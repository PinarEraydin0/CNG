#include <iostream>
using namespace std;

class Temperature {
public:
    double celsius;

    double toFahrenheit() {
        return (celsius * 9.0 / 5.0) + 32;
    }

    double toKelvin() {
        return celsius + 273.15;
    }
};

int main() {
    Temperature temp;

    cout << "Enter temperature in Celsius: ";
    cin >> temp.celsius;

    cout << "Temperature in Fahrenheit: " << temp.toFahrenheit() << " °F" << endl;
    cout << "Temperature in Kelvin: " << temp.toKelvin() << " K" << endl;

    return 0;
}

