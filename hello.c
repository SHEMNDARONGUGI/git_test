#include <stdio.h>
int main()
{
    printf("HELLO WORLD\n");
    int i, j;
    printf("INPUT TWO INTEGERS\n");
    scanf("%d \n %d \n",&i,&j);
    int total = i + j;
    printf("THE SUM IS:\n %d", total);
    return 0;
}