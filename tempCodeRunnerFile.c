#include<stdio.h>

int main()
{
    int limit, num, fbig = 0, sbig = 0;

    scanf("%d", &limit);

    printf("", limit);
 

    while(limit > 0)
    {
        scanf("%d", &num);

        if(num > fbig)
        {
            sbig = fbig;
            fbig = num;
        }
        if(num > sbig && num < fbig)
        {
            sbig = num;
        }

        limit--;
    }

    
    printf("%d", sbig);

    return 0;
}
