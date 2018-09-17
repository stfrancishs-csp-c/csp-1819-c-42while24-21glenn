#include <stdio.h>
int main(void)
{
    int sum=0;
    int k;

    k=0;
    while (k<5) {
        sum+=k;
        k++;
    }
    printf ("%d\n",sum);


    for ( k=4 ; k>0 ; k--) {
         printf ("%d\n", k);
    }
}

 /* for (k=0;k<5;k++)
    {
        sum+=k; //use something different in "while" version
    }

    printf ("%d\n",sum);

    k=5;

    while (k>0) {
        k=k-1; //use something different in "for" version
        printf ("%d\n", k);
    }

*/