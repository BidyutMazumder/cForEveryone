#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if(a > b){
        if(a > c){
            printf("A is Greater\n");
        }else{
            printf("C is Greater\n");
        }

    }else{
        if(b > c){
            printf("B is Greater\n");
        }else{
            printf("C is Greater\n");
        }
    }
    return 0;
}


/*
a > b
    a > c
        ->A is greater
    else
        ->C is greater

*/
