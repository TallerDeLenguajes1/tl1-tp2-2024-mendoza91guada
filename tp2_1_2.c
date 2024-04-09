#include <stdio.h>
#define N 20

void main()
{
    int i;
    double vt[N];
    double *p;
    p=vt;

    for(i = 0;i<N; i++)
    {
        *(p+i)=1+rand()%100;
        printf("%.1f ", *(p+i));
    }
}