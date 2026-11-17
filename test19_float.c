/*告诉 MinGW 使用它提供的 ANSI C 标准输入输出实现，而不是默认的 Windows C 运行库实现。*/
#define __USE_MINGW_ANSI_STDIO 1
#include <stdio.h>

int main(void)
{
    float a = 32000.0;
    double b =2.14e9;
    long double c = 5.32e-5;
    
    printf("%f can be written as %e\n", a,a);
    printf("%f can be written as %e\n", b,b);
    printf("%Lf can be written as %Le\n", c,c);

    return 0;
}
/*浮点数表示*/