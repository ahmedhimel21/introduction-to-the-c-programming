#include<stdio.h>
int main(){
    int tk;
    scanf("%d", &tk);
    if(tk > 100){
        printf("Burger khabo");
    } else if(tk > 50){
        printf("fuchka khabo");
    } else{
        printf("kichu khabo nah");
    }
    return 0;
}