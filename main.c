#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int hammingDistance(int x, int y);

int main() {
    printf("%d\n", hammingDistance(2, 13));
    return 0;
}

int hammingDistance(int x, int y) {
    x = x ^ y;
    y = 0;
    for (int i = 0; i < 32; i++) {
        if (x & 1 == true) {
            y++;
        }
        x = x >> 1;
    }
    return y;
}
