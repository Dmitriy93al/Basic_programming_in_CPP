#include <iostream>

class Counter {
private:
    int startCounter;

public:
    Counter(int count) {
        this->startCounter = count;
    }

    Counter() {
        this->startCounter = 1;
    }


    void plus(int count) {
        ++count;
    };

    void minus(int count) {
        --count;
    };

    void print(int count) {
        std::cout << count << std::endl;
    }
};