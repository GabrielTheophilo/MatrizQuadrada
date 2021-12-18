/*
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * 
 *   
 *   Criado por: Gabriel Theophilo de Souza Figueira - gabriel.figueira@ufv.br
 *   16/12/2021
 *   
 *   
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
*/

#include <iostream>
#include "funcoes.h"
using namespace std;


int main(void){
    MatrizQuadrada M1, M2, M3, I, R, T;
    leMatriz(M1);
    criaMatrizIdentidade(I, 3);
    produto(M1,I,R);
    if(compara(M1, I)){
        cout << "Matrizes iguais";
    }
    else{
        cout << "Matrizes diferentes";
    }
    imprimeMatriz(M1);
    imprimeMatriz(R);
    criaTransposta(R, T);
    leMatriz(M2);
    soma(R, M2, M3);
    imprimeMatriz(M2);
    imprimeMatriz(M3);
    
}