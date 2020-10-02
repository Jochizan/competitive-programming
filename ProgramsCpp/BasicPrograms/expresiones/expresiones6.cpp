// Escriba un programa que lea la nota final de cuatro alumnos y calcule la nota final de media de los cuatro alumnos

#include <iostream>

using namespace std;

int main() {
    float nota1, nota2, nota3, nota4, promedio;
    cout << "Ingrese la nota de 4 alumnos: " << endl;               
    cin >> nota1 >> nota2 >> nota3 >> nota4;
    promedio = (nota1 + nota2 + nota3 + nota4)/4;
    cout << "El promedio de sus notas es:" << promedio << endl;
    return 0;
}
