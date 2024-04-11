#include <iostream>
#include <cmath>
using namespace std;

void printPrimeFactors(int n) {
    while (n % 2 == 0) {
        cout << "2 ";
        n /= 2;
    }

    for (int i = 3; i <= std::sqrt(n); i += 2) {
        while (n % i == 0) {
            cout << i << " ";
            n /= i;
        }
    }

    if (n > 2) {
        cout << n;
    }
}

int main() {
    int num;

    cout << "Enter a positive integer: ";
    cin >> num;

    if (num <= 0) {
        cout << "Please enter a positive integer." << std::endl;
    } else {
        cout << "Prime factors of " << num << " are: ";
        printPrimeFactors(num);
        cout << std::endl;
    }

    return 0;
}
