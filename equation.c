#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
      float a, b, c, x1, x2, d;
      printf ("input a,b,c separated by space, then press enter \n");
      scanf ("%f%f%f", &a, &b, &c);
      if(a == 0) {
            fprintf(stderr,"A can't be equal 0\n");
            exit(EXIT_FAILURE);
      }
      return 0;
}