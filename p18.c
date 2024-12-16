/*Write a program in C to print all the numbers less than N that are divisible by both 3 (three) and 7
(seven) where N is a user provided input*/




#include <stdio.h>

int main (void)

{
    int i ,N;

    printf("ENTER THE OF N: ");

    scanf("%d", &N);

    for(i=1; i<N; ++i)
    {
        if (i%3==0 && i%7==0)
        {
            printf("%d\n", i);
        }
    }


















    return 0;
}
