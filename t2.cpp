#include <iostream>
using namespace std;

class ArrayOperations {
public:
    int array[5];

    void inputArray() {
        for (int i = 0; i < 5; i++) {
            cout << "Array " << i + 1 << ": ";
            cin >> array[i];
        }
    }

    void calculateSum() {
        int sum = 0;
        for (int i = 0; i < 5; i++) {
            sum += array[i];
        }
        cout << "Sum: " << sum << endl;
    }
};

int main() {
    ArrayOperations arr;

    arr.inputArray();     
    arr.calculateSum();   

    return 0;
}



