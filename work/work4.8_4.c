#include<stdio.h>
#include<stdlib.h>
int main()
{
    float hight;
    char name[40];
    printf("请输入你的身高(单位:cm):");
    scanf("%f", &hight);
    printf("请输入你的姓名：");
    scanf("%s", &name);
    printf("%s,you are %.2f m tall", name, hight / 100);
    system("pause");
    return 0;
}