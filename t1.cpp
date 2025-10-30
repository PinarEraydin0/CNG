#include <iostream>
using namespace std;

class Rectangle {
public:
    int width;
    int height;

    void calculateArea() {
        int area = width * height;
        cout << "Area: " << area << endl;
    }
};

int main() {
    Rectangle rect;

    cout << "Enter width: ";
    cin >> rect.width;

    cout << "Enter height: ";
    cin >> rect.height;

    rect.calculateArea(); 

    return 0;
}


