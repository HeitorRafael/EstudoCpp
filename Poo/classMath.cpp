#include <iostream>
using namespace std;

class Math {
    public:
        int soma(int a, int b) {
            return a + b;
        };
        int sub(int a, int b) {
            return a - b;
        };
        int mult(int a, int b) {
            return a * b;
        };
        int div(int a, int b) {
            return a / b;
            if (b == 0) {
                cout << "Erro: Divisão por zero!" << endl;
                return 0;
            }   
        };
};

int main() {
    cout << "selecione a operação: \n1 - soma\n2 - subtração\n3 - multiplicação\n4 - divisão\n  ";
    int op;
    cin >> op;
    cout << "digite o primeiro numero: ";
    int a;
    cin >> a;
    cout << "digite o segundo numero: ";
    int b;
    cin >> b;
    Math math; // Cria o objeto sem argumentos
    if (op == 1) {
        cout << math.soma(a, b) << endl;
    } else if (op == 2) {
        cout << math.sub(a, b) << endl;
    } else if (op == 3) {
        cout << math.mult(a, b) << endl;
    } else if (op == 4) {
        cout << math.div(a, b) << endl;
    } else {
        cout << "opção invalida" << endl;
    }
}

