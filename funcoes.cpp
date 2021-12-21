#include "funcoes.h"
#include <iostream>

void leMatriz(MatrizQuadrada &m1){
    std::cin >> m1.dimensao;
    m1.m1 = new int*[m1.dimensao];
    for(int i = 0; i < m1.dimensao;i++){
        m1.m1[i] = new int[m1.dimensao];
    }
    for(int i = 0; i < m1.dimensao;i++){
        for(int j = 0; j < m1.dimensao;j++){
            std::cin >> m1.m1[i][j];
            
        }
    }
}

void imprimeMatriz(MatrizQuadrada m1){
    std::cout << m1.dimensao << std::endl;
    for(int i = 0; i < m1.dimensao;i++){
        for(int j = 0; j < m1.dimensao;j++){
            std::cout << m1.m1[i][j] << " ";
        }
        std::cout << '\n';
    }
}

void criaMatrizIdentidade(MatrizQuadrada &m1, int n){
    m1.m1 = new int*[n];
    for(int i = 0; i < n;i++){
        m1.m1[i] = new int[n];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i==j){
                m1.m1[i][j] = 1;
            }
            else{
                m1.m1[i][j] = 0;
            }
        }
    }
    for(int i = 0; i < n;i++){
        for(int j = 0; j < n;j++){
            std::cout << m1.m1[i][j] << " ";
        }
        std::cout << '\n';
    }
}

void soma(MatrizQuadrada m1, MatrizQuadrada m2, MatrizQuadrada &m3){
    int *dimensao = &m1.dimensao;
    m3.dimensao = m1.dimensao;
    m3.m1 = new int*[*dimensao];
        for(int i = 0; i < *dimensao;i++){
            m3.m1[i] = new int[*dimensao];
        }
    for(int i = 0; i < *dimensao;i++){
        for(int j = 0; j < *dimensao;j++){
            m3.m1[i][j] = m1.m1[i][j] + m2.m1[i][j];
        }
    }
    imprimeMatriz(m3);
}

void criaTransposta(MatrizQuadrada m1, MatrizQuadrada m2){
    int *dimensao = &m1.dimensao;
    m2.dimensao = m1.dimensao;
    m2.m1 = new int*[*dimensao];
    for(int i = 0; i < *dimensao;i++){
            m2.m1[i] = new int[*dimensao];
    }
    for(int i = 0; i < *dimensao;i++){
        for(int j = 0; j < *dimensao;j++){
            m2.m1[i][j] = m1.m1[j][i];
        }
    }
    imprimeMatriz(m2);
}

void produto(MatrizQuadrada m1, MatrizQuadrada m2, MatrizQuadrada &m3){
    int *dimensao = &m1.dimensao;
    m3.m1 = new int*[*dimensao];
    for(int i = 0; i < *dimensao;i++){
            m3.m1[i] = new int[*dimensao];
    }
    for(int i = 0; i < *dimensao;i++){
        for(int j = 0; j < *dimensao;j++){
            for(int k = 0; k < *dimensao;k++){
                m3.m1[i][j] += m1.m1[i][k]*m2.m1[k][j];
            }
        }
    }
    m3.dimensao = m1.dimensao;
    imprimeMatriz(m3);
}

bool compara(MatrizQuadrada m1, MatrizQuadrada m2){
    int* dimensao = &m1.dimensao;
    for(int i=0; i<*dimensao; i++){
        for(int j=0; j<*dimensao; j++){
            if(m1.m1[i][j] != m2.m1[i][j]){
                return false;
            }
        }
    }
    return true;
}

void desaloca(MatrizQuadrada m1){
    delete [] m1.m1;
}