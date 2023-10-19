#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char name1[40], name2[40];//1是姓，2是名
    printf("请输入姓名：");
    scanf("%s %s", name1, name2);
    printf("%s %s\n",name1,name2);
    printf("%*d %*d\n", strlen(name1), strlen(name1), strlen(name2), strlen(name2));
    printf("%s %s\n", name1, name2);
    printf("%-*d %-*d\n", strlen(name1), strlen(name1), strlen(name2), strlen(name2));
    system("pause");
    return 0;
}