/* two_func.c*/
#include <stdio.h>
void butler(void);
int main(void)
{
    printf("I will summon the butler function.\n");
    butler();
    printf("yes bring me some tea and write a poem.\n");

    return 0;
}
void butler(void)
{
    printf("you rang, sir?\n");
}
/*打印内容类*/