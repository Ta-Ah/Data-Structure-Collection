#include <stdio.h>
#include <math.h>
#define e 0.001

float bisaction(float x)
{
    return x * x * x - 4 * x + 1;
}

int main()
{
    int i = 0;
    float a, b, c, fa, fb, fc;
    printf("Enter value\n");
    scanf("%f%f", &a, &b);

    if ((fa * fb) > 0)
        printf("Wrong guess\n");
    else
    {
        do
        {
            fa = bisaction(a);
            fb = bisaction(b);
            c = (a + b) / 2;
            fc = bisaction(c);

            if (fa * fc < 0)
                b = c;
            else
                a = c;

            i++;
            printf("Number of iterations %d: Root is %f function value is %f\n", i, c, fc);
        } while (fabs(fc) > e);
    }
}