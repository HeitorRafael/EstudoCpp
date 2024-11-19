#include <iostream>
using namespace std;

class Fila
{
private:
    int *VET;
    int MAX;
    int ProximaPosicaoLivre;

public:
    Fila(int qtde)
    {
        MAX = qtde;
        VET = new int[MAX];
        ProximaPosicaoLivre = 0;
    };

    void Enfileira(int n)
    {
        if (ProximaPosicaoLivre < MAX)
            VET[ProximaPosicaoLivre++] = n;
    };

    void Mostra()
    {
        for (int i = 0; i < ProximaPosicaoLivre; i++)
            cout << VET[i] << "\n";
    };

    int Desenfileira()
    {
        if (ProximaPosicaoLivre > 0) {
            int valor = VET[0];
            for (int i = 0; i < ProximaPosicaoLivre - 1; i++)
                VET[i] = VET[i + 1];
            ProximaPosicaoLivre--;
            return valor;
        }
        return -1;
    }
};

int main()
{
    Fila fila(10);
    fila.Enfileira(1);
    fila.Enfileira(2);
    fila.Enfileira(3);
    fila.Mostra();  
    cout << "\nDesenfileira " << fila.Desenfileira() << ".\n";
    fila.Mostra();
    return 0;
}