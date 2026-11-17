#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    float weight;
    float value;

    printf("Do you want to kown how much your weight in platinum?\n");
    printf("Let's check it out!\n");
    printf("please enter your weight in pounds:");

    scanf("%f", &weight);

    value = 1700.0 * weight * 14.5833;
    printf("your weight in platium is: %.2f\n", value);
    printf("Thank you for using our program!\n");


    system("pause");
    return 0;
}
/*交互数字型*/