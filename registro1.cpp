#include <iostream> 
using namespace std;

void imprima();
typedef struct {
    string nome;
    int idade;
    float nota;
}Aluno;
Aluno aluno;

int main(){
    cout << "nome do aluno(a): ";
    getline(cin, aluno.nome);
    cout << "idade: ";
    cin >> aluno.idade;
    cout << "insira a nota: ";
    cin >> aluno.nota;
    system("cls");
    imprima();
}

void imprima(){
    cout << "o aluno(a) " << aluno.nome << " tem " << aluno.idade
         << " anos de idade. sua nota e: " << aluno.nota << endl;
}