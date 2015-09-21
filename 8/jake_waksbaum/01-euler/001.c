#include <stdio.h>

main() {

    printf("%u", sum_of_mult35_below(1000));

    return 0;
}

sum_of_mult35_below(int ceil) {
    unsigned int n = 0, 
                 total = 0;

    for (n = 1; n < ceil; n++) {
        if (div_by(n, 3) || div_by(n, 5)) {
            total += n;
        }
    }

    return total;
}

div_by(int dividend, int divisor) {
    return 0 == dividend % divisor;
}
