#include <iostream>;
using namespace std;

bool printResult (int num){
    int contador = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num%i ==0)
        {
           contador += 1;
        }
    }

    if (contador <= 2)
    {
     return 1;
    } else
    {
        return 0;
    }
    
    
    
}

int main(){
    
    int num;
    cout << "digite um numero \n";
    cin >> num;

    cout << printResult(num);


 return 0;
}