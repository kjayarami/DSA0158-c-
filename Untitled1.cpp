#include <iostream>
#include <algorithm>  
using namespace std;
int main() {

    int array[] = {1, 2, 3, 4, 2, 2, 5, 6, 2};
    int size = sizeof(array) / sizeof(array[0]);
    int value = 3;
    int occurrences = count(array, array + size, value);
    cout << "Number of occurrences of " << value << ": " << occurrences;
    return 0;
}
