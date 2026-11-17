#include <stdio.h>

void br(int n)
{
    if(n == 1)
    printf("Brazil,Russia,");
    else
    printf("Brazil,Russia\n");
}
void ic(void)
{
    printf("India,China\n");
}
int main(void)
{
    br(1);
    ic();
    ic();
    br(0);

    return 0;
}
/*打印内容类*/