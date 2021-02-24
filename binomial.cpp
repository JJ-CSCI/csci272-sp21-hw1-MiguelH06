#include <iostream>
#include "binomial.h"
using namespace std;

Binomial::Binomial(float a, int b, float c, int d)
{
coeff = a;
_coeff = c;
if(b < 1)
power = 1;
else
power = b;

if(d < 1)
_power = 1;
else
_power = d;
}

float Binomial::GetCoefficient(float a)
{
  if(a == 1)
  return coeff;
  else if(a == 2)
  return _coeff;
  else
  return -1;
}

int Binomial::GetPower(int b)
{
  if(b == 1)
  return power;
  else if(b == 2)
  return _power;
  else
  return -1;
}

int Binomial::SetPower(int e, int f)
{
    if(f < 0)
  {
    f = 1;
  }
  if(e == 1)
  {
    power = f;
    return 0;
  }
  else if(e == 2)
  {
    _power = f;
    return 0;
  }
  else
    return -1;
}
int Binomial::Add(Binomial &g)
{
  if(power == g.power && _power == g._power)
  {
  coeff = coeff + g.coeff;
  _coeff = _coeff + g._coeff;
return 0;
  } 
  else
    return -1;
}
void Binomial::Multiply(float h)
{
  coeff = coeff * h;
  _coeff = _coeff * h;
}
void Binomial::Multiply(float g, int k)
{
  coeff = coeff * g;
  _coeff = _coeff * g;
  power = power + k;
  _power = _power + k;
}