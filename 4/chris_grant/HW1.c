#include <stdio.h>

int multiples() {
    int sum = 0;
    int i;
    int d;
    for (i = 3; i < 1000; i*=3) {
        sum += i;
    }
    for (d = 5; d < 1000; d*=5) {
        sum += d;
    }
    return sum;
}

int fibonacci() {
    int last = 1;
    int sum = 0;
    int i;
    for (i = 1; i < 4000000; i += last) {
        last = i;
        if (i % 2 == 0) {
            sum += i;
        }
    }
    return sum;
}


int main() {
    printf("Problem 1: %d\n", multiples());
    printf("Problem 2: %d\n", fibonacci());
    return 0;
}
