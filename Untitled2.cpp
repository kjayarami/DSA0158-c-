#include <iostream>
using namespace std;

double calculateSimpleInterest(double principal, double rate, int time) {
    return (principal * rate * time) / 100;
}

int main() {
    double principal, interest;
    int time;
    char isSenior;

    cout << "Enter the principal amount: ";
    cin >> principal;

    cout << "Enter the time period (in years): ";
    cin >> time;

    cout << "Is the customer a senior citizen? (y/n): ";
    cin >> isSenior;

    double rate = (isSenior == 'y' || isSenior == 'Y') ? 12.0 : 10.0;
    interest = calculateSimpleInterest(principal, rate, time);
    cout << "The simple interest is: " << interest << endl;

    return 0;
}
