#include <iostream>
using namespace std;

bool anoBissexto(int ano)
{
    if (((ano % 4 == 0) && (ano % 100 != 0)) || (ano % 400 == 0))
    {

        return true;
    }
    else
    {

        return false;
    }
}

int diaSemana(int dia, int mes, int ano)
{
    int f = ano + dia + 3 * (mes - 1) - 1;

    if (mes < 3)
        ano--;

    else
        f -= int(0.4 * mes + 2.3);

    f += int(ano / 4) - int((ano / 100 + 1) * 0.75);

    f %= 7;

    return f + 1;
}

void calendario(int dia, int mes, int ano)
{
    cout << "DOM\tSEG\tTER\tQUA\tQUI\tSEX\tSAB\n\n";

    short TamanhoDoMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (anoBissexto(ano) == true)
    {

        TamanhoDoMes[1] = 29;
    }

    for (int j = 1; j < diaSemana(dia, mes, ano); j++)
        cout << '\t';

    for (int dia = 1; dia <= TamanhoDoMes[mes - 1]; dia++)
    {

        if (dia < 10)
            cout << '0' << dia << '\t';
    }
}

int main()
{
    int dia, mes, ano;

    cout << "defina o ano do calendario a ser impresso: ";
    cin >> ano;

    cout << "defina o mês do calendario a ser impresso: ";
    cin >> mes;
    while (mes < 1 || mes > 12)
    {
        cout << "Mês inválido. Insira um mês entre 1 e 12: ";
        cin >> mes;
    }

    cout << "Defina o ate que dia o calendario sera mostrado: ";
    cin >> dia;

    calendario(dia, mes, ano);

    return 0;
}