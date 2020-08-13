// Escriba un programa que lea de la entrada estándar el precio de un producto
// y muestre en la salida estándar el precio del producto al aplicarle el IVA.

#include <iostream>

using namespace std;

int main(){
    
    double precio, IGV = 0.19;
    cout << "Ingrese el valor del precio del producto: ";
    cin >> precio;
    precio = precio*(1.0+IGV);
    cout << "\nEl precio final de producto es: " << precio << endl;

    return 0;
}
