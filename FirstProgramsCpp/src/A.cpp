#include <iostream>
#include <string>
#include <map>

using namespace std;

typedef pair<int, string> par;
typedef map<int, string> nombres;

int main() {
    map<string, string> asoc;
    asoc["uno"] = "manzana";
    asoc["dos"] = "pera";
    asoc["tres"] = "naranja";
    cout << asoc["tres"] << endl;
    map<string, string>::iterator iter;
    for(iter = asoc.begin(); iter != asoc.end(); iter++) {
        cout << "Clave = " << iter -> first << ": Valor = " << iter -> second << endl;
    }
    nombres n;
    n.insert(par(1, "Manuel"));
    n.insert(par(2, "Antonio"));
    n.insert(par(3, "Joan"));
    map<int, string>::iterator i;
    for(i = n.begin(); i !=n.end(); ++i) {
        cout << "Clave = " << i -> first << ":Valor = " << i -> second << endl;
    }
    return 0;
}
