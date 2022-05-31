#include <stdio.h>
#include <stdlib.h>

int main ()
{
  double root1, root2, x, y, a, b, c;
  printf ("Enter a root: ");
  scanf ("%lf", &root1);
  printf ("Enter the other root: ");
  scanf ("%lf", &root2);
  printf ("Enter the x for the needed point: ");
  scanf ("%lf", &x);
  printf ("Enter the y for the needed point: ");
  scanf ("%lf", &y);
  a = y/((x-root1)*(x-root2));
  //printf ("f(x)=%lf(x%+lf)(x%+lf)\n", a, -root1, -root2);
  b = a*(-root2-root1);
  c = a*(root1*root2);
  printf ("f(x)=%lfxx%+lfx%+lf\n", a, b, c);
  return EXIT_SUCCESS;
}
