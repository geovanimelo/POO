#include "AlunoDAO.h"

AlunoDAO::AlunoDAO()
{
    //ctor
}

void AlunoDAO::adicionar(Aluno a){
    alunos.push_back(a);
}

void AlunoDAO::exibir(){
    int i;
    for(i=0;i<alunos.size();i++){
        alunos.at(i).mostrarDados();
        cout <<".........."<<endl;
    }
    cout <<"----------------------"<<endl;
}

Aluno* AlunoDAO::buscar(int mat){
    int i;
    for(i=0;i<alunos.size();i++){
        if(alunos.at(i).getMat()==mat){
            return &alunos.at(i);
        }
    }
    return NULL;
}

void AlunoDAO::remover(int mat){
    int i,p=-1;
    for(i=0;i<alunos.size();i++){
        if(alunos.at(i).getMat()==mat){
            p = i;
            break;
        }
    }
    if(p!=-1){
        alunos.erase(alunos.begin()+p);
    }else{
        cout <<"Erro ao remover. Aluno não encontrado"<<endl;
    }
}
