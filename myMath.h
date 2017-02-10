#ifndef MYMATH_H
#define MYMATH_H

int intPow(int base, int exp);

int intPow(int base, int exp)
{
  int x = 0;
  if (exp > 0) {
    x++;
  } else if (exp == 0) {
    return 1;
  }
  
  while (exp) {
    x *= base;
    exp--;
  }

  return x;
}
   


      

#endif
