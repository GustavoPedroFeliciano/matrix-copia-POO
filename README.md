ELE078 - Programação Orientada a Objetos 

Atividade Prática 04 

Parte 01: Construtor de Cópia 

Modifique a classe Ponto2D , inovadora na Atividade Prática 03, para que seja possível, além das formas usadas, inicializar objetos da seguinte forma:

// formas usuais (já inovadoras) 
Ponto2D  p1 ;              
Ponto2D  p2 ( 3,0 ,  4,0 );   

// inicializações usando o construtor de cópia 
Ponto2D  p3 ( p1 );       // Ponto2D p3 é inicializado com as coordenadas do ponto p1 
Ponto2D  p4  =  p2 ;      // Ponto2D p4 é inicializado com as coordenadas do ponto p2


Parte 02: Revisitando a classe Matrix (Gerência de Memória e Construtor de Cópia) 

Readequar o código do TAD Matrix , implementado na Atividade Prática 02. A classe deve ser inovadora de forma a permitir que os usuários manipulem seus índices (linhas e colunas) começando de 1 (um) e não de 0 (zero) . Os elementos devem ser armazenados com estruturas criadas dinamicamente na memória através do uso de ponteiros duplos.

A interface da classe Matrix encontra-se a seguir. Você deve usar os recursos aprendidos até o momento para tornar o programa eficiente:

inicialização e destruição de objetos
gerenciamento de memória de forma adequada (sem vazamento)
Sobrecarga de construtores e funções de membros
argumentos _default_ em construtores e funções membro, funções membro _inline_
passagem de argumentos por referência sempre que possível
argumentos e funções membros constantes ( _const_ ) sempre que possível
// matrix.h (arquivo de cabeçalho)

#incluir  <iostream>

classe  Matrix  { 
    privada :

        duplo **  m ;  // m é um array 2D a ser implementado como um ponteiro de ponteiros 
        int  nRows ;   // número de linhas 
        int  nCols ;   //número de colunas

    público :

        // Construtores 
        Matrix ();                            
        Matrix ( int  ​​rows ,  int  cols ,  const  double  & value  =  0.0 ); 
        Matrix ( ifstream  & myFile ) 
        Matrix ( const  Matrix &  that ) 
        // destruidor 
        ~ Matrix ();
    
        // getters básicos 
        int  getRows ()  const ; 
        int  getCols ()  const ; 
        double  get ( int  row ,  int  col )  const ;   
        
        // outros métodos 
        void  print ()  const ; 
        void  unit (); 
        void  zeros (); 
        void  ones ();
           
};
// matrix.cpp 
#include  "matrix.h"

// construtor default - cria uma matriz vazia com nRows = nCols = 0   
Matrix :: Matrix (){ 
    ...  
}
    

// construtor paramétrico 1 - cria uma matriz com nRows = rows, nCols = 
cols e // com todos os elementos iguais a 0.0 (double) 
Matrix :: Matrix ( int  rows ,  int cols  , const double & value = 0.0 ){ ... }     
    


// construtor paramétrico 2 - cria uma matriz com os dados fornecidos pelo arquivo texto myFile. 
Matriz :: Matriz ( fstream  & meuArquivo ){ 
    ... 
}


// construtor da cópia 
Matrix :: Matrix ( const  Matrix &  that ){ 
    ... 
}


// destruidor 
Matrix ::~ Matrix ()  { 
    ... 
}


//obtem o número de linhas 
int  Matrix :: getRows ()  const  { 
    ... 
}

//obtem o número de colunas 
int  Matrix :: getCols ()  const  { 
    ... 
}


// obtem um elemento específico na posição (row,col). Obs: deve verificar consistência 
double  Matrix :: get ( int  row ,  int  col )  const  { 
    ... 
}

//imprime o conteúdo da matriz 
void  Matrix :: print ()  { 
    ... 
}

// faz com que a matriz torne-se uma matriz identidade 
void  Matrix :: unit (){
    
}

// faz com que a matriz torne-se uma matriz nula 
void  Matrix :: zeros (){
    
}

// faz com que a matriz torne-se uma 
matriz interessantes elementos sao iguaia a 1 void Matrix  :: ones (){
    
}
Programa Teste:

Complemente o programa teste a seguir para que todas as operações rompidas na classe possam ser testadas.

int  main () 
{ 
    ifstream  in ( "myMatrix.txt" ); 
    Matriz  Y ; 
    Matriz  X ( 3 , 1 ); 
    Matriz  Z ( 3 , 2 , 7.0 ); 
    Matriz  W ( em );
    
    ...
    
    retornar  0 ; 
}
