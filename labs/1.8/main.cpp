/*
Done by:
    Student: Yaroslav Yavon
    Group: 123:1
    Lab 1.8
*/

// 1. Checking if a number is even
#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int num;
    cout << "Enter an integer: ";
    cin >> num;
    bool isEven = num % 2 == 0;
    if (isEven)
        cout << "Number " << num << " is an even number\n" << endl;
    else
        cout << "Number " << num << " is an odd number\n" << endl;

    return 0;
}

// 2. Counting the number of 1-bits

int main() {

    int ones = 0, n;
    cout << "Enter an integer: ";
    cin >> n;
    for(int i = 0; i < sizeof(int) * 8; i++) {
        int mask = 1 << i;
        if((n & mask) != 0) ones++;
    }
    cout << "The number " << n << " has " << ones << " 1-bits\n" << endl;
    return 0;
}

// 3. Checking if a bit is set at a certain position

int main() {

    int n, r;
    cout << "Enter an integer: ";
    cin >> n;
    cout << "Enter the bit position: ";
    cin >> r;
    if(r < 0) {
        cout << "Bit position is out of range\n";
        return 0;
    }
    int bitAtPos = (n & (1 << r)) == 0 ? 0 : 1;
    cout << "Bit at position " << r << " is " << bitAtPos << "\n" << endl;
    return 0;
}

