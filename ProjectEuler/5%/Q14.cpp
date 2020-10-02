#include <bits/stdc++.h>

#define MAX 1000000 

int numbers[MAX + 1] = {0};

long collatz(long n) {
    if (n == 1)
        return n;
    else if (n % 2 == 0)
        return n / 2;
    else
        return 3 * n + 1;
}

int count(long n) {
    int c = 0;
    if (n <= MAX)
        c = numbers[n];
    if (!c) {
        long m = collatz(n);
        c = 1 + count(m);
        if (n <= MAX)
            numbers[n] = c;
    }
    return c;
}

int main() {
    int max = 0;
    int n;
    numbers[1] = 1;
    for (int i = 1; i < MAX; i++) {
        int c = count(i);
        if (max < c) {
            max = c;
            n = i;
        }
    }
    printf("Maximum chain length is %d terms starting at %d.\n", max, n);
    return 0;
}
