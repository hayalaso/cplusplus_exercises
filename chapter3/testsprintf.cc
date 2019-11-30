/* sprintf example */
#include <stdio.h>

int main ()
{
  char buffer [50];
  int n, a=5, b=3;
  double c = 100.0;
  n=sprintf(buffer, "%d plus %d is %d", a, b, a+b);
  printf("[%s] is a string %d chars long\n",buffer,n);
  sprintf(buffer, "int %.0f and float %.1f \n",c ,c);
  printf("%s",buffer);
  return 0;
} 
