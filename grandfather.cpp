#include <iostream>
using namespace std;
class Grandfather {
protected:
    int propertyValue;
public:
    Grandfather(int value) : propertyValue(value) {}
    void transferProperty() {
        cout << "Property worth " << propertyValue << "Cr is being transferred to grandson." << endl;
    }
};
class Grandson : public Grandfather {
public:
    Grandson(int value) : Grandfather(value) {}
    void receiveProperty() {
        transferProperty();
        cout << "Received the Property" << endl;
    }
};
int main() {
    Grandson grandson(500);
    grandson.receiveProperty();
    return 0;
}