#include<stdio.h>
#include<string.h>
int main()
{

    /*
    int a;
    a = 10;
    printf("%d\n", a);

    */

    /*
    int a;
    printf("Enter your Number: ");
    scanf("%d", &a);

    if(a < 0 || a > 100)
    {
        printf("Wrong Entry");
    }
    else if(a < 33)
    {
        printf("Grade F");
    }
    else if(a > 32 && a < 40){
        printf("D\n");
    }
    else if(a > 39 && a < 50)
    {
        printf("C\n");
    }
    else if(a > 49 && a < 60)
    {
        printf("B\n");
    }
    else if(a > 59 && a < 70)
    {
        printf("A-\n");
    }
    else if(a > 69 && a < 80)
    {
        printf("A\n");
    }
    else
        printf("A+\n");
    */

    /*
    int i = 1;

    while(i <= 10){
        printf("%d\n", i);
        i++;
    }
    */

    // [2,5,6,4,3,1]
    //  0 1 2 3 4 5

    /*
    int arr[6] = {2,5,6,4,3,1}, i;

    for(i = 0; i <= 5; i++)
    {

        printf("%d ", arr[i]);
    }
    */
    //abcd
    //0123

    char string[100];
    gets(string);
    //getch();
    int i;
    for (i = strlen(string) - 1; i >= 0; i--)
    {

        printf("%c", string[i]);
    }

    return 0;
}
