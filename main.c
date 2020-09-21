#include <stdio.h>
#include <stdlib.h>

int main()
{
    float dollar,EGP;
    printf("Please enter your dollar\n");
    scanf("%f",&dollar);
    EGP=dollar*15.73;
    printf("your dollars equal %f ",EGP);
    printf("In EGP");
    return 0;
}
