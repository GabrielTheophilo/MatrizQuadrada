/*

*******************************************************************************************
*   Arquivo com parte das funções referentes ao Trabalho 1 - INF 112 (2021/PHT)
*   
*   Criado por: Gabriel Theophilo de Souza Figueira - gabriel.figueira@ufv.br - es99198
*   
*   
*   16/12/2021
*******************************************************************************************


*/


struct MatrizQuadrada{
    int dimensao;
    int** m1;

};

//recebe como input uma dimensão para a matriz e aloca recursos na memória para uma dimensão,
//e em cada dimensão aloca recursos para uma variável receber uma quantidade de elementos correspondente a dimensão, formando assim uma matriz quadrada
void leMatriz(MatrizQuadrada &m1);



//percorre a matriz selecionada imprimindo cada membro individualmente
void imprimeMatriz(MatrizQuadrada m1);

//função recebe por referência o objeto de uma matriz para alocar recursos a ela e recebe também um inteiro representando o número de espaços que serão utilizados
void criaMatrizIdentidade(MatrizQuadrada &m1, int n);

//função recebe por referência o objeto de uma terceira matriz para alocar recursos a ela e realizar a soma das duas primeiras matrizes fornecidas
void soma(MatrizQuadrada m1, MatrizQuadrada m2, MatrizQuadrada &m3);

//função aloca dinamicamente recursos para uma segunda matriz e copia os elementos da primeira de forma a criar uma transposta -> linha 139 - o elemento linhaXcoluna da receptora recebe o elemento da colunaXlinha da primeira matriz
void criaTransposta(MatrizQuadrada m1, MatrizQuadrada m2);

//função recebe por referência o objeto de uma terceira matriz para alocar recursos a ela e realizar a multiplicação das duas primeiras matrizes fornecidas
void produto(MatrizQuadrada m1, MatrizQuadrada m2, MatrizQuadrada &m3);

//função utiliza dois loops aninhados para comparar cada posição de uma matriz com a posição correspondente de outra matriz
bool compara(MatrizQuadrada m1, MatrizQuadrada m2);


//desaloca os recursos alocados dinamicamente para a instância que guarda 
void desaloca(MatrizQuadrada m1);