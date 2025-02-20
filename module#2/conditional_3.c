#include<stdio.h>
int main(){
    int tk;
    scanf("%d", &tk);
    if(tk >= 5000){
        printf("Cox's Bazar\n");
        if(tk >= 10000){
            printf("Saint martin\n");
        } else{
            printf("Coming back!\n");
        }
    } else{
        printf("Nowhere\n");
    }
    return 0;
}