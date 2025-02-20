#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int multi = 1;
    int i;
    for(i = 1; i<=n; i+=1)
    {
        multi = multi * i;
    }
    printf("%d",multi);
    return 0;
}