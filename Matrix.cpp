// matrix.cpp
#include "Matrix.h"
#include <iostream>
#include <fstream>

using namespace std;


// contrutor default - cria uma matriz vazia com nRows = nCols = 0  
Matrix::Matrix(){
    m = new double*[0];

  for(int i=0; i<0; i++)
  {
    m[i] = new double[0];
    for(int j=0; j<0; j++)
    {
      m[i][j] = 0;
    }
  }
}
    

// contrutor parametrico 1 - cria uma matriz com nRows  = rows, nCols = cols e 
// com todos os elementos iguais a 0.0 (double)
Matrix::Matrix(int rows, int cols, const double &value){

  this -> nRows = rows;
  this -> nCols = cols;

  m = new double*[nRows];

  for(int i=0; i<nRows; i++)
  {
    m[i] = new double;
    for(int j=0; j<nCols; j++)
    {
      m[i][j] = value;
    }

  }
}

// contrutor parametrico 2 - cria uma matriz com os dados fornecidos pelo arquivo texto myFile.

Matrix::Matrix(ifstream &myFile){
}


// contrutor de copia
Matrix::Matrix(const Matrix& that){
    this -> nRows = that.nRows;
  this -> nCols = that.nCols;

 this -> m = new double*[nRows];

  for(int i=0; i<nRows; i++)
  {
    m[i] = new double;
    for(int j=0; j<nCols; j++)
    {
      m[i][j] = false;
    }
}
}


// destrutor
Matrix::~Matrix() {
    
    for(int j=0; j<nRows; j++)
  {
    for(int i=0; i<nCols; i++)
    {
      m[j][i] = 0;
    }
  }

    delete m;
}


// obtem o numero de linhas
int Matrix::getRows() const {

    return nRows;
}

// obtem o numero de colunas
int Matrix::getCols() const {

    return nCols;
}


// obtem um elemento específico na posição (row,col). Obs: deve checar consistencia
double Matrix::get(int row, int col) const{
  double elem = 0.0;
  elem = m[row][col];
  return elem;
}

// imprime o conteudo da matriz
void Matrix::print() const{
    for(int j=0; j<nRows; j++)  
    {
    for(int i=0; i<nCols; i++)
    {
       cout << m[j][i] << " ";
    }
    cout << endl;
}
cout << endl;
}

// faz com que a matriz torne-se uma matriz identidade
void Matrix::unit(){
 if(nRows == nCols){
  for(int j=0; j<nRows; j++)  
    {
    for( int i=0; i<nCols; i++)
    {
       if (j == i)
       {
         m[j][i] = 1;
       }
       else{
         m[j][i] = 0;
       }
    }
}
}
else{
  cout << "A matriz não é quadrada, portanto não tem identidade" << endl;
  cout<< endl;
}
}


// faz com que a matriz torne-se uma matriz nula
void Matrix::zeros(){

  for(int j=0; j<nRows; j++)  
    {
    for(int i=0; i<nCols; i++)
    {
      m[j][i] = 0;
       
    }
}

}

// faz com que a matriz torne-se uma matriz cujos elementos sao iguaia a 1
void Matrix::ones(){

  for(int j=0; j<nRows; j++)  
    {
    for(int i=0; i<nCols; i++)
    {
      m[j][i] = 1;
       
    }
}
    
}