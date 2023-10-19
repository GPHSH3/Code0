#include <stdio.h>
#include <float.h>
#include<stdlib.h>
int main()
{
    double num_double = 1.0 / 3.0;
    float num_float = 1.0 / 3.0;

    printf("6位小数:\n");
    printf("Double: %.6lf\n", num_double);
    printf("Float: %.6f\n", num_float);

    printf("\n12位小数:\n");
    printf("Double: %.12lf\n", num_double);
    printf("Float: %.12f\n", num_float);

    printf("\n16位小数:\n");
    printf("Double: %.16lf\n", num_double);
    printf("Float: %.16f\n", num_float);

    printf("\nFLT_DIG = %d\n", FLT_DIG);
    printf("DBL_DIG = %d\n", DBL_DIG);
    system("pause");
    return 0;
}
