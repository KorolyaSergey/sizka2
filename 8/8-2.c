#include <stdio.h>

double Factorial(int n) {
    if (n <= 1) return 1;
    return (n * Factorial(n - 1));
}

double Counting(int n, int d) {
    return Factorial(n) / (Factorial(d) * Factorial(n - d));
}

int main() {
    double c = Counting(4,1)*Counting(11,2)*Counting(48,1);
    printf("%f - In how many ways from a deck of 52 cards can you remove 10 cards to be among those cards\n"
           "was exactly one ace?", c);
    return 0;
}