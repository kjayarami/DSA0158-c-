#include <iostream>
using namespace std;
class Number {
protected:
    int M, N, K;

public:
    void getData() {
        std::cout << "Enter M, N, and K: ";
        std::cin >> M >> N >> K;
    }

    virtual void display() const = 0; 
};

class Skipper : public Number {
public:
    void display() const override {
        for (int i = M; i <= N; i += (K + 1)) {
            std::cout << i << " ";
        }
        std::cout << "\n";
    }
};

int main() {
    Skipper skipper;
    skipper.getData();
    skipper.display();
    return 0;
}
