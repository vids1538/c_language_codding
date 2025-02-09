#include <stdio.h>
int main()
{ 
    int i,j;
    for(i=1;i<100;i++)
    {
        for (j=10;j>=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}