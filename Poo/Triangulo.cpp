#include <iostream>
using namespace std;

class Triangulo {
    public:
    int a, b, c;

    bool verificaseeh(){
        if (a + b > c && a + c > b && b + c > a) {
            return true;
        } else {
            return false;
        }
    }

    string tipoTriangulo(){
        if (verificaseeh()==true) {
            if (a == b && b == c) {
                return "equilatero";
            } else if (a == b || b == c || a == c) {
                return "isosceles";
            } else {
                return "escaleno";
            }
        } else {
            return "nao eh triangulo"; 
        }
    }
};

int main(){
    Triangulo triangulo;
    cout << "Digite os lados do triangulo: ";
    cin >> triangulo.a >> triangulo.b >> triangulo.c;
    cout << triangulo.tipoTriangulo() << endl;
    return 0;
}