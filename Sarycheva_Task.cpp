#include <iostream>
#include <string>
#include "Surname_Task.h"

using namespace std;

int getNthDigitFromRight(int number, int n) {
    string numStr = to_string(number);
    int len = numStr.length();
    if (n > len) {
        return -1;
    }
    return numStr[len - n] - '0';
}

int getNthDigitFromLeft(int number, int n) {
    string numStr = to_string(number);
    int len = numStr.length();
    if (n > len) {
        return -1;
    }
    return numStr[n - 1] - '0';
}

int main() {
    int K, N;

    cout << "Введите натуральное число K: ";
    cin >> K;

    cout << "Введите цифру N: ";
    cin >> N;

    int digitRight = getNthDigitFromRight(K, N);
    if (digitRight != -1) {
        cout << "Цифра справа налево: " << digitRight << endl;
    } else {
        cout << "Число K не содержит " << N << " цифр справа налево." << endl;
    }

    int digitLeft = getNthDigitFromLeft(K, N);
    if (digitLeft != -1) {
        cout << "Цифра слева направо: " << digitLeft << endl;
    } else {
        cout << "Число K не содержит " << N << " цифр слева направо." << endl;
    }

    return 0;
}