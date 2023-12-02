#include<stdio.h>
int main()
{
    int a, b;
    a = 10;
    b = 10;
    if(a > b){  // যদি
        printf("A");
    }
    else if(a == b){ // কেবল যদি
        printf("A=B");
    }
    else{ // কেবল
        printf("B");
    }
    return 0;
}
