#include<stdio.h>
int main()
{
    char input;
    scanf("%c", &input);
    if(input >= 'A' && input <= 'Z')
    {
        printf("Valied\n");
    }else
    {
        printf("Invalied\n");
    }
    return 0;
}

/*
    input >= 'a' and input <='z'
    a, b, c, d, ....... x, y, z

    A, B, C, D,.........X, Y, Z

    Z >= input >= A

    input >= 'A' And input <= 'Z'




*/
