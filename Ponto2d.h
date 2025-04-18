#include<iostream>
#include<cmath>


class Ponto2D
{
  private:
  
    double x;
    double y;
    int id;
    bool isIdOcupied[1001] = {false};
    int getNextId();

  public:

    Ponto2D(const Ponto2D &cop);
    Ponto2D(double=0, double=0);
    const void print();
    const double distToOrig();
    const double distTo(Ponto2D p2);
    void sumOf(Ponto2D p2);
    const Ponto2D sumOf2(Ponto2D p2);
  
};