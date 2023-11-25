#include<stdio.h>
#include<math.h>

const double pi = 3.1416;

int main()
{
    double R, res;
    printf("Input the Value: ");
    scanf("%lf", &R);
    res = pi * pow(R, 2);
    //pow(value, power)
    // home work "https://www.beecrowd.com.br/judge/en/problems/view/1002"
    printf("Result: %.1lf", res);

    return 0;
}

