#include <iostream>
#include "Matrix.h"

int main() {

  Matrix x(2,2);
  Matrix z(3,3);
  Matrix y(3,3,8.0);
  Matrix a(1,2);

  cout << "A matriz Z é:" << endl;
  z.print();
  
  cout << "A matriz X é:" << endl;
  x.print();

  cout << "A matriz Y é:" << endl;
  y.print();

  cout << "A matriz identidade de X é:" << endl;
  x.unit();
  x.print();

  a.unit();

  cout << "A matriz com elementos = 1 de X é:" << endl;
  x.ones();
  x.print();

  cout << "A matriz nula de X é:" << endl;
  x.zeros();
  x.print();

} 