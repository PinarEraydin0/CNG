// t3.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//
#include <iostream>
using namespace std;

class Circle {
public:
    int r;

    void calculateArea() {
        const double pi = 3.14;
        double area = pi * r * r;
        cout << "Area: " << area << endl;
    }
};

int main() {
    Circle c;

    cout << "Radius: ";
    cin >> c.r;

    c.calculateArea(); 

    return 0;
}
