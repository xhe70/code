#include <stdio.h>

void PrintN(int N);
int main(void)
{
    int N;
    scanf("%d",&N);
    PrintN(N);

    getchar();
    return 0;
}
void PrintN(int N)
{
    if (N){
        PrintN( N - 1 );
        printf("%d\n", N );
    }
    return;
}