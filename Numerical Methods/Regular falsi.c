#include <stdio.h>
#include <math.h>
#define e 0.001

float falsi(float x)
{
    return x * x * x - 4 * x + 1;
}

int main()
{
    int i = 0;
    float a, b, c, fa, fb, fc;
    printf("Enter values\n");
    scanf("%f%f", &a, &b);

    if ((fa * fb) > 0)
        printf("Wrong guess\n");
    else
    {
        do
        {
            fa = falsi(a);
            fb = falsi(b);
            fc = falsi(c);
            c = a - (a - b) * fa / (fa - fb);

            if (fa * fc < 0)
            {
                b = c;
                fb = fc;
            }
            else
            {
                a = c;
                fa = fc;
            }

            i++;
            printf("Number of iterations %d root is %f function value is %f\n", i, c, fc);
        } while (fabs(fc) > e);
    }
}
