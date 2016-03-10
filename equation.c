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
      d = (b*b)-(4*a*c);
      if (d >= 0) {
            x1 = (-b + sqrt(d)) / (2 * a);
            x2 = (-b - sqrt(d)) / (2 * a);
      }
      else {
            fprintf (stderr,"The root does not exist \n");
            exit(EXIT_FAILURE);
      }
      
      return 0;
}