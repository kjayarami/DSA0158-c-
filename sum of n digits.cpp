#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    cout << "Sum of all digits: " << sum << endl;

    return 0;
}
