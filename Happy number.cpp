#include <iostream>
#include <unordered_set>
using namespace std;
int getNext(int num) {
    int sum = 0;
    while (num) {
        int digit = num % 10;
        sum += digit * digit;
        num /= 10;
    }
    return sum;
}
bool isHappy(int num) {
    unordered_set<int> seen;
    while (num != 1 && seen.find(num) == seen.end()) {
        seen.insert(num);
        num = getNext(num);
    }
    return num == 1;
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << num << (isHappy(num) ? " is a Happy Number." : " is not a Happy Number.") << endl;
    return 0;
}
