#include <iostream> 
#define N 3
using namespace std;

void imprima();
typedef struct{
    string nome;
    int idade;
    float nota;
}Alunos;
Alunos alunosV[N];

int main(){
    for(int i=0; i<N; i++){
        cout << "aluno(a) " << i+1 << endl;
        cout << "nome: ";
        getline(cin, alunosV[i].nome);
        cout << "idade: ";
        cin >> alunosV[i].idade;
        cout << "nota: ";
        cin >> alunosV[i].nota;
        cin.ignore();
    }
    system("cls");
    imprima();
}

void imprima(){
    for(int i=0;i<N;i++){
        cout << "o aluno(a) " << alunosV[i].nome << " tem " << alunosV[i].idade
             << " anos de idade. sua nota e: " << alunosV[i].nota<< endl;
    }
}