#include <iostream>
#include "AlunoDAO.h"
#include "Aluno.h"
#include <vector>

using namespace std;

/**

    MENU:
     1 - Adicionar Aluno
     2 - Listar alunos matriculados
     3 - Buscar aluno pela matricula
     4 - Remover aluno pela matricula
     5 - Sair

*/
int main()
{
    int cod;
    AlunoDAO cadastro;
    Aluno a;
    do{
        cout <<"MENU: "<<endl;
        cout <<"1) Adicionar "<<endl;
        cout <<"2) Listar "<<endl;
        cout <<"3) Buscar "<<endl;
        cout <<"4) Remover "<<endl;
        cout <<"5) Sair "<<endl;
        cin >> cod;
        if(cod==1){
             int mat;
             Aluno a;
            string nome;
            cout <<"Informe a matricula do aluno: "<<endl;
            cin >> mat;
            getline(cin,nome);
            cout <<"Informe o nome do aluno: "<<endl;
            getline(cin,nome);
            a.setMat(mat);
            a.setNome(nome);
            cadastro.adicionar(a);
        }else if(cod==2){
            cadastro.exibir();
        }else if(cod==3){
            int mat;
             cout <<"Informe a matricula do aluno: "<<endl;
            cin >> mat;
            Aluno *a = cadastro.buscar(mat);
            a->mostrarDados();
        }else if(cod==4){
             int mat;
             cout <<"Informe a matricula do aluno: "<<endl;
            cin >> mat;
            cadastro.remover(mat);
        }else if(cod==5){
            cout <<"bye bye..."<<endl;
        }

    }while(cod!=5);
    return 0;
}

