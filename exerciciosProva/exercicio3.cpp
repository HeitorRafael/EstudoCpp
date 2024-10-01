#include <iostream>;
using namespace std;

bool verificacao (int a){
    if(a > 0 && a % 2 == 0){
        return true;
    }else{
        return false;
    }
}

int contador(){
    int contador = 0;
    int num;

    cout << "Digite um quantos numeros desejar ou 0 para para: ";

    do{
        cin >>  num;
        if (verificacao(num))
        {
            contador ++;
        }
        
    }while (num != 0);

    return contador;
}

int main (){
    int total = contador();
    cout << total;
}
