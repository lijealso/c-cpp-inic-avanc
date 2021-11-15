#include <iostream>
#include <cstdlib>

using namespace std;

typedef struct Data
{
    int dia, mes, ano;
};

struct Aluno
{
    int id;
    Data nascimento;
};



int main(void)
{

    struct Aluno aluno1;
    aluno1.nascimento.ano = 1999;
    aluno1.nascimento.mes = 1;
    aluno1.nascimento.dia = 23;


    cout << "Dia: " << aluno1.nascimento.dia << "Mes: " << aluno1.nascimento.mes << "Ano: " << aluno1.nascimento.ano << endl;
    
return 0;
}
