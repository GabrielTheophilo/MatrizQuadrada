/*
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * 
 *   
 *   Criado por: Gabriel Theophilo de Souza Figueira - gabriel.figueira@ufv.br
 *   16/12/2021
 *     
 *   Função; -> Comentário
 *      @ input
 * 
 *   Funções Dispoíveis para chamada:
 *   leMatriz( MatrizQuadrada ); -> Recebe um struct da matriz quadrada e lê as dimensões e as posições
 *      @ (Número de dimensões) (Inteiro da posição 0x0) (Inteiro da posição 0x1) ... @
 * 
 *   criaMatrizIdentidade( MatrizQuadrada , Dimensão ); -> Recebe uma matriz(vazia) e o número de linhas/colunas e cria uma matriz identidade
 *      @ Sem input na execução @
 * 
 *   compara( MatrizQuadrada , MatrizQuadrada ); -> Percorre os elementos das matrizes para comparar se são Matrizes idênticas
 *      @ Sem input na execução @
 * 
 *   criaTransposta ( MatrizQuadrada, MatrizQuadrada ); ->
 * 
 *  
 *   produto( MatrizQuadrada, MatrizQuadrada, MatrizQuadrada ); ->
 * 
 * 
 *   soma( MatrizQuadrada, MatrizQuadrada, MatrizQuadrada ); ->
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
    desaloca(M1);
    desaloca(M2);
    desaloca(M3);
    desaloca(I);
    desaloca(R);

}