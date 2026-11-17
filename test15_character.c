/*显示字符代码*/
#include <stdio.h>

int main(void)
{
    char ch;
    printf("please enter a character:\n ");
    scanf("%c", &ch);
    printf("the code for %c is %d.\n",ch,ch);

    getchar();
    return 0;
}
/*字符显示类*/