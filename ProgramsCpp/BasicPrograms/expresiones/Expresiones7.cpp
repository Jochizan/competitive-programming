// La calificación final de un estudiante es la media ponderada de tres notas:
// la nota de prácticas que cuenta un 30% del total, la nota teórica que cuenta un
// 60% y la nota de participación que cuenta el 10% restante. Escriba un programa
// que lea de la entrada estándar las tres notas de un alumno y escriba en la 
// salida estándar su nota final.

#include <iostream>

using namespace std;

int main() {
    float practica, teorica, participacion, notaFinal;
    cout << "Digite la nota de práctica: "; cin >> practica;
    cout << "Digite la nota teoríca: "; cin >> teorica;
    cout << "Digite la nota de práctica: "; cin >> participacion;
    practica *= 0.30;
    teorica *= 0.60;
    participacion *= 0.10;
    notaFinal = practica + teorica + participacion;
    cout << "\nLa nota final es: " << notaFinal << endl;
    return 0;
}
