#include <iostream>
#include "funcoes.cpp"
using namespace std;



int main(void){
    MatrizQuadrada M1, M2, M3, I, R, T;
    leMatriz(M1);
    criaMatrizIdentidade(I, 3);
    produto(M1,I,R);
    if(compara(M1, I)){
        cout << "Matrizes iguais" << endl;
    }
    else{
        cout << "Matrizes diferentes" << endl;
    }
    imprimeMatriz(M1);
    imprimeMatriz(R);
    criaTransposta(R, T);
    leMatriz(M2);
    soma(R, M2, M3);
    imprimeMatriz(M2);
    imprimeMatriz(M3);
    desaloca(M1);
    desaloca(M2);
    desaloca(M3);
    desaloca(I);
    desaloca(R);

}