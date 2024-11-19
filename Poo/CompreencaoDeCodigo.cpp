#include <cstdlib>
#include <iostream>
using namespace std;

class PilhaDeArray
{
private:
    int *VET;
    int ProximaPosicaoLivre;
    int MAX;

public:
    PilhaDeArray(int qtde) //construtor da pilha
    {
        MAX = qtde; //MAX recebe o valor de qtde    
        VET = new int[MAX]; //transforma o ponteiro VET em um vetor de inteiros com tamanho MAX
        ProximaPosicaoLivre = 0; //inicializa a próxima posição livre como 0
    }

    void Empilha(int n) //função para empilhar
    {
        if (ProximaPosicaoLivre < MAX) //verifica se a próxima posição livre é menor que o tamanho máximo da pilha
            VET[ProximaPosicaoLivre++] = n; //incrementa a próxima posição livre e atribui o valor de n ao vetor VET
    }

    void Mostra() //função para mostrar os elementos da pilha
    {
        for (int i = 0; i < ProximaPosicaoLivre; i++) //loop para percorrer os elementos da pilha
        {
            cout << VET[i] << "\n"; //exibe os elementos da pilha e pula para a próxima linha
        }
    }

    int Desempilha() //função para desempilhar
    {
        if (ProximaPosicaoLivre > 0) //verifica se a próxima posição livre é maior que 0
            return VET[--ProximaPosicaoLivre]; //decrementa a próxima posição livre e retorna o valor do vetor VET
            VET[ProximaPosicaoLivre] = 0; //zera o valor da próxima posição livre
    }
};

int main()
{
    PilhaDeArray pilha(50);
    pilha.Empilha(3);
    pilha.Empilha(5);
    pilha.Empilha(7);
    pilha.Empilha(1);
    pilha.Mostra();
    cout << "\nDesempilha " << pilha.Desempilha() << ".\n";
    pilha.Mostra();

    return 0;
}
