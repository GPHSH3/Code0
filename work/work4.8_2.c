#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char name[50];
    printf("请输入你的名字: ");
    scanf("%s", name);

    // a. 打印名字， 包括双引号
    printf("\"%s\"\n", name);

    // b. 在宽度为20的字段右端打印名字，包括双引号
    printf("\"%20s\"\n", name);

    // c. 在宽度为20的字段左端打印名字，包括双引号
    printf("\"%-20s\"\n", name);

    // d. 在比姓名宽度宽3的字段中打印名字
    printf("\"%*s\"\n", strlen(name) + 3, name);
    system("pause");
    return 0;
}
