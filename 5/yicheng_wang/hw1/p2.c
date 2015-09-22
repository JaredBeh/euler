#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int isEven(int n) {
    return (n % 2 == 0);
}

int nextFib(int f1, int f2) {
    return f1 + f2;
}

int main() {
    int sum = 0;
    int f1 = 1;
    int f2 = 2;
    int tmp = 0;


    while (f2 < 4000000) {
        if (isEven(f2)) {
            sum = sum + f2;
        }
        tmp = f1 + f2;
        f1 = f2;
        f2 =tmp;
    }
    printf("%d\n", sum);
    return 0;
}
