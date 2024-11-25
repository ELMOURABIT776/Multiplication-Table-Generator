#include <iostream>
#include <iomanip>

int main() {
    const int SIZE = 10;


    std::cout << std::setw(4) << " ";
    for (int i = 1; i <= SIZE; ++i) {
        std::cout << std::setw(4) << i;
    }
    std::cout << std::endl;


    for (int i = 1; i <= SIZE; ++i) {
        std::cout << std::setw(4) << i;
        for (int j = 1; j <= SIZE; ++j) {
            std::cout << std::setw(4) << (i * j);
        }
        std::cout << std::endl;
    }

    return 0;
}
