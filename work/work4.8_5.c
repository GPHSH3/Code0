#include<stdio.h>
#include<stdlib.h>
int main()
{
    float speed, filesize,bit,time;
    printf("请输入下载速度和文件大小："); //单位分别为Mb/s和MB
    scanf("%f %f", &speed, &filesize);
    bit = filesize * 8;
    time = bit / speed;
    printf("在%.2fMbps的下载速度下,下载%.2fMB的文件需要%.2f秒", speed, filesize,time );
    system("pause");
    return 0;
}
