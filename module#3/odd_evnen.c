#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i;
    for(i = 1; i<=n; i+=1)
    {
        if(i%2 == 0){
            printf("%d - Even\n", i);
        } 
        else
        {
            printf("%d - Odd\n", i);
        }
    }
    return 0;
}