#include <iostream>
using namespace std;

class ContaBanco {
    public:

    int numero;
    double saldo;
    double limite;
    string nome;
    ContaBanco(){

    }

    ContaBanco(int numero, double saldo, double limite, string nome) {
        this->numero = numero;
        this->saldo = saldo;
        this->limite = limite;
        this->nome = nome;
    }

    bool sacar(double valor) {
        if (valor > saldo) {
            return false;
        } else {
            saldo -= valor;
            return true;
        }
    };

    void depositar(double valor) {
        saldo += valor;
    };

    bool transferir(ContaBanco &destino, double valor) {
        if (saldo < valor) {
            cout << "Saldo insuficiente" << endl;
            return false;
        } else {
            saldo -= valor;
            destino.saldo += valor;
            return true;
        }
    };
};

int main() {
    //teste de alteração inline
    ContaBanco conta0;
    conta0.limite = 1000;
    //fim do teste de alteração inline

    ContaBanco conta1(1, 1000, 1000, "João");
    ContaBanco conta2(2, 0, 1000, "Maria");
    cout << "Saldo da conta 1: " << conta1.saldo << endl;
    cout << "Saldo da conta 2: " << conta2.saldo << endl;
    
    for(int i = 0; i < 3; i++) {
        cout << "." << flush;
        _sleep(1000);
    }
    cout << endl;
    conta1.transferir(conta2, 500);
    cout << "Saldo da conta 1: " << conta1.saldo << endl;
    cout << "Saldo da conta 2: " << conta2.saldo << endl;
    return 0;
}
