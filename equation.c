#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int equals(float d, float cons, double eps) {
    return fabs(d - cons) < eps;
}

int main()
{     
      const double eps = 10e-6;
      const double cons = 0;
      float a, b, c, x1, x2, d;
      printf("Input a,b,c separated by space, then press enter \n");
      scanf("%f%f%f", &a, &b, &c);
      if (a == 0) {
            fprintf(stderr, "A can't be equal 0\n");
            exit(EXIT_FAILURE);
      }
      d = (b * b) - (4 * a * c);
      if (d >= 0) {
            x1 = (-b + sqrt(d)) / (2 * a);
            x2 = (-b - sqrt(d)) / (2 * a);
            if (equals(d, cons, eps)) {
                  printf("Roots are equal\n");
                  printf("x = %.2f\n", x1);
            }
            else {
                  printf("x1 = %.2f  x2 = %.2f\n", x1, x2); 
            }
      }
      else {
            printf("The root does not exist \n");
      }
      return 0;
}