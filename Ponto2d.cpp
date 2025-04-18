#include<iostream>
#include "Ponto2d.h"

using namespace std;

Ponto2D::Ponto2D(const Ponto2D &cop)
{
  this->x = cop.x;
  this->y = cop.y;
  id = getNextId();
}
Ponto2D::Ponto2D(double nx, double ny)
{
  this -> x = nx;
  this -> y = ny;

  id = getNextId();
}

const void Ponto2D::print()
{
  cout << "As coordenadas do ponto são: " << "(" << x << ","<< y << ")" << endl;

  cout << "Id: " << id << endl;
}

const double Ponto2D::distToOrig()
{
  double dist = sqrt(x*x + y*y);
  return dist;
}

const double Ponto2D::distTo(Ponto2D p2)
{
  double dx = x - p2.x;
  double dy = y - p2.y;

  double dist = sqrt(dx*dx + dy*dy);

  return dist;
}

void Ponto2D::sumOf(Ponto2D p2)
{
  double dx = x + p2.x;
  double dy = y + p2.y;

  Ponto2D p3(dx, dy);
  x = p3.x;
  y = p3.y;
}

const Ponto2D Ponto2D::sumOf2(Ponto2D p2)
{
  double dx = x + p2.x;
  double dy = y + p2.y;

  Ponto2D p3(dx, dy);

  return p3;
}

int Ponto2D::getNextId()
{
  int id = random()%1000;

  while(isIdOcupied[id])
  {
    id = random()%1000;
  }
  isIdOcupied[id] = true;
  return id;
}