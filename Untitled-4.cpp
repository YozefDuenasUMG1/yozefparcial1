#include <iostream>

int main() {
    int a = 0, b = 0;

    for (int i = 0; i <= 50; i++) {
        if (i % 2 == 0) {
            b += i;
        } else {
            a += i;
        }
    }

    return 0;