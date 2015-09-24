#include <stdio.h>

int div_by(int dividend, int divisor) {
    return 0 == dividend % divisor;
}

int sum_of_mult35_below(unsigned int ceil) {
    unsigned int n = 0,
                 total = 0;

    for (n = 1; n < ceil; n++) {
        if (div_by(n, 3) || div_by(n, 5)) {
            total += n;
        }
    }

    return total;
}

int main() {
    printf("%u", sum_of_mult35_below(1000));

    return 0;
}
