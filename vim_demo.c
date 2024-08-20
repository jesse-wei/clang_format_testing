#include <stdio.h>

int sum(int a, int b, int c) {
    return a + b + c;
}

int main(int argc, char* argv[]) {
    int x = 1;
    int y = 2;
    int z = 3;
    int rv = sum(x, y, z);
    printf("%d + %d + %d = %d\n", x, y, z, rv);
    return 0;
}

