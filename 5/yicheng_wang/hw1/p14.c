#include <stdlib.h>
#include <stdio.h>

long nextCollatzTerm(long n) {
    if (n % 2 == 0) {
        return n / 2;
    }
    else {
        return 3 * n + 1;
    }
}

long maxLoc(long vals[], int size) {
    long currentMax = vals[0];
    int loc = 0;
    int c;
    for (c = 1 ; c < size ; c++) {
        if (vals[c] > currentMax) {
            currentMax = vals[c];
            loc = c;
        }
    }
    return loc;
}

int main() {
    long chains[1000000];
    int c;
    for (c = 1 ; c < 1000000 ; c++) {
        long i = c;
        long stepCounter = 1;
        while (i != 1) {
            i = nextCollatzTerm(i);
            stepCounter++;
        }
        chains[c - 1] = stepCounter;
    }
    printf("%ld\n", maxLoc(chains, 1000000));
    return 0;
}
