#include <math.h>
#include <stdio.h>

long largest_prime_factor(long n) {
    long i=2, largest_factor;
    while(i*i <= n) {
        if (n % i == 0) {
            n /= i;
            largest_factor = i;
        } else { 
            i++; 
        }
    }
    if (n > largest_factor) {
        return n;
    } else {
        return largest_factor;
    }
}

int main() {
    const long n = 600851475143;

    printf("%lu", largest_prime_factor(n));

    return 0;
}
