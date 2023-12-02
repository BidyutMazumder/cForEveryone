
#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if((a > b && a < c) || (a < b &&  a > c))
    {
        printf("A");
    }
    // home work

    return 0;
}


/*

for -> a

2   1      2   3
a > b  এবং    a < c

2   3      2   1
a < b  এবং    a > c

(a > b  এবং    a < c) অথবা (a < b  এবং    a > c)

*/
