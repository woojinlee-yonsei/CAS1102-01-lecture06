#include <iostream>

int main() {
    int codeArray[48] = {
        16, 6, 19, 24, 14, 11, 18, 12, 15, 17, 2, 13, 22, 7, 10, 3, 23, 5, 20, 8, 9, 1, 4, 21,
        116, 108, 32, 33, 104, 119, 101, 105, 32, 104, 111, 116, 97, 117, 32, 111, 109, 32, 101, 99, 107, 71, 100, 120
    };
    int* pointerArray[24] = {};
    int n = 24;

    for (int i = 0; i < n; ++i) {
        int key = codeArray[i];
        pointerArray[key - 1] = &codeArray[n + i];
    }

    for (int i = 0; i < n; ++i)
        std::cout << static_cast<char>(*pointerArray[i]);

    std::cout << '\n';
    return 0;
}
