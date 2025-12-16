#include <iostream>
#include <climits>
using namespace std;


void swapValues(int input, int& currentMin, int& currentCount);

int main() {
    int number;
    int minVal = INT_MAX;
    int count = 0;


    for (;;) {
        cout << "Enter number: ";
        cin >> number;


        if (number == 0) {
            break;
        }

        swapValues(number, minVal, count);
    }


    cout << endl;
    if (count > 0) {
        cout << "Total numbers entered: " << count << endl;
        cout << "Minimum value: " << minVal << endl;
    }
    else {
        cout << "No numbers entered." << endl;
    }

    return 0;
}


void swapValues(int input, int& currentMin, int& currentCount) {

    currentCount++;


    if (input < currentMin) {
        currentMin = input;
    }
}