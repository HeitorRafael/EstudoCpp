#include <iostream>
using namespace std;

int mostraImpares(int *p1, int *p2){
    int i = *p1;
    while (i >= *p1 && i < *p2 )
    {
        if (i % 2 != 0)
        {
            cout << i << endl;
        }
        
        i++;
    };
    
    return 0;
}

int main(){
    int n1;
    int n2;

    int *p1;
    int *p2;

    cout << "digite o intervalo de (2) numeros: ";
    cin >> n1 >> n2;

    p1 = &n1;
    p2 = &n2;

    cout << mostraImpares(p1,p2);



}