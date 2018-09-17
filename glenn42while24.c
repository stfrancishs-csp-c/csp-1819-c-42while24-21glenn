#include <stdio.h>
int main(void)
{
    int sum=0;
    int k;

    k=0;
    while (k<5) {
        sum+=k;
        k++;
        printf ("%d\n",k);
    }
    printf ("Sum- %d\n",sum);

    for ( k=10 ; k>0 ; k--) {
         printf ("%2d\n", k);
    }
    printf("blastoff!\n");
}