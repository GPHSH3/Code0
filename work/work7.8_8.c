#include <stdio.h>
#include <stdlib.h>
#define GALLON_TO_LITER 3.785
#define MILE_TO_KM 1.609

int main()
{
    double miles, gallons;

    printf("请输入旅行的里程（单位：英里）：");
    scanf("%lf", &miles);
    printf("请输入消耗的汽油量（单位：加仑）：");
    scanf("%lf", &gallons);

    double miles_per_gallon = miles / gallons;
    printf("每加仑汽油行驶的英里数：%.1f\n", miles_per_gallon);

    double liters_per_100km = (gallons * GALLON_TO_LITER) / (miles * MILE_TO_KM) * 100;
    printf("百公里油耗（单位：升/100公里):%.1f\n", liters_per_100km);
    system("pause");
    return 0;
}
