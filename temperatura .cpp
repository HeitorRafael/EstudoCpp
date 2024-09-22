#include <iostream>;
using namespace std;

float toFarenheit (float toConvert){
       float F;
       F = (toConvert * 9/5)  + 32;
       return F;
     } ;

 float toCelcius (float toConvert){
       float C;
       C = (toConvert - 32)  * 5/9;
       return C;
     };

int main (){
    int metodoEscolhido;
    float toConvert;
    cout << "Digite 1 para converter de Celcius para Farenheit e 2 para converter de Farenheit para Celcius \n";
    cin >> metodoEscolhido;

    cout << "Digite a temperatura: ";
    cin >> toConvert;

    if (metodoEscolhido == 1)
    {
       cout << "a conversão é :" << toFarenheit(toConvert) <<"\n";
    } else if(metodoEscolhido == 2)
    {
       cout << "a conversão é :" << toCelcius(toConvert) << "\n" ;
    }else
    {
        cout << "Escolha não permitida.";
    };
    
}