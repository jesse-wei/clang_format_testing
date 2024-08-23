#include <stdio.h>

int sum(int a, int b, int c) {
    return a + b + c;
}

int main() {
    int x = 1;
    int y = 2;
    int z = 3;
    int rv = sum(x, y, z);
    return 0;
}
