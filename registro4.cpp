#include <iostream>
#include <cstring>
using namespace std;

typedef struct{
    string nome;
    int idade;
    float nota;
} estudante;
typedef struct{
    estudante aluno;
}curso;

int main(){
    curso novo;
    cout << "nome do aluno(a): ";
    getline(cin, novo.aluno.nome);
    cout << "idade: ";
    cin >> novo.aluno.idade;
    cout << "nota: ";
    cin >> novo.aluno.nota;
    cout << "o aluno(a) " << novo.aluno.nome << " de " << novo.aluno.idade << " anos de idade tirou: "
         << novo.aluno.nota << " pontos!" << endl;
}