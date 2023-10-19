#include <stdio.h>
#include <stdlib.h>
int main()
{
    double num;
    printf("请输入一个浮点数: ");
    scanf("%lf", &num);

    // a. 以小数点记数法打印
    printf("The input is %.1f or %.1e\n", num, num);

    // b. 以指数记数法打印
    printf("The input is %+.3f or %.3E\n", num, num);
    system("pause");
    return 0;
}
