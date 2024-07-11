#include <stdio.h>
int main()
{
    int A,B,C;
    printf("Input 3 numbers?\n");
    scanf("%d%d%d",&A,&B,&C);
    if((A>B && A<C) || (A<B && A>C))

            printf("Your middle number is : %d",A);

    else if ((B>A && B<C) || (B<A && B>C))

        printf("Your middle number is : %d",B);

    else
        printf("Your middle number is: %d",C);

}
