#include <iostream>
#ifndef Binomial_H
#define Binomial_H

class Binomial{

  private:
  float coeff;
  float _coeff;
  int power;
  int _power;

  public:
  Binomial(float = 1.0, int = 1, float = 1.0, int = 1);
  
  float GetCoefficient(float);
  int GetPower(int);
  int SetPower(int, int);
  int Add(Binomial &g);
  void Multiply(float);
  void Multiply(float, int);
};
#endif