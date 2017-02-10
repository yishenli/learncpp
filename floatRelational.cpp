/* float has inherent rounding errors, which may produce errors when comparing 
   two values using relational operators, when the two are very close. The 
   followings are two ways to determine whether the two floats are close enough.
*/

#include <cmath> // for fabs()
#include <iostream>

/* if the distance between a and b is less than epsilon, then a and b are "close
   enough"
   this approach uses an absolute epsilon. However, when the scale goes down, 
   the comparison may fail
*/
bool isAlmostEqual(double a, double b, double epsilon)
{
  return fabs(a - b) <= epsilon;
}

/* returns true if the difference between a and b is within epsilon percent of 
   the larger of a and b
   this approach uses a relative epsilon. While is works with scale, the math
   breaks down when values approach 0
*/
bool approximatelyEqual(double a, double b, double epsilon)
{
  return fabs(a - b) <= ( (fabs(a) < fabs(b) ? fabs(b) : fabs(a)) * epsilon);
}

bool approximatelyEqualAbsRel(double a, double b, double absEpsilon, double relEpsilon)
{
  double diff = fabs(a - b);
  if (diff <= absEpsilon)
    return true;

  return diff <= ( (fabs(a) < fabs(b) ? fabs(b) : fabs(a)) * relEpsilon);
}

int main()
{
  double a = 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1;

  std::cout << approximatelyEqual(a, 1.0, 1e-8) << "\n";
  std::cout << approximatelyEqual(a-1.0, 0.0, 1e-8) << "\n";
  std::cout << approximatelyEqualAbsRel(a-1.0, 0.0, 1e-12, 1e-8) << "\n";

  return 0;
}
