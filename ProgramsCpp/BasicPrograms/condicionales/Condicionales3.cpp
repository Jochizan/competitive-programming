#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    int numero;
    cin >> numero;
    printf((0 < numero) ? "\nEl número es positivo\n":"\nEl número es negativo\n");
    return 0;
}
