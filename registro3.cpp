#include <iostream>
#define N 3
using namespace std;

void imprima();
typedef struct{
    string nome;
    int idade;
    float nota;
} alunos;

int main(){
    alunos *ptr = new alunos;

    cout << "nome do aluno(a): ";
    getline(cin, ptr->nome);
    cout << "idade: ";
    cin >> ptr->idade;
    cout << "insira a nota: ";
    cin >> ptr->nota;
    cout << "o aluno(a) " << ptr->nome << " tem " << ptr->idade
         << " anos de idade. sua nota e: " << ptr->nota << endl;

    delete ptr;

    return 0;
}