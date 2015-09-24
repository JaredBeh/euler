#include <stdio.h>

int is_even(int n) { return n % 2 == 0; }

int main() {
    unsigned int a = 1,
                 b = 2,
                 ceil = 4000000,
                 total = 0;

    while(b < ceil) {
        if (is_even(b)) {
            total += b;
        }

        int temp = b;
        b = a + b;
        a = temp;
    }

    printf("%u", total);

    return 0;
}
