#include <stdio.h>
int main()
{
    int sz;
    printf("Input size of array:\n");
    scanf("%d", &sz);
    int a[sz];
    int i;
    int even=0;
    int odd=0;
    printf("Input elements in array:\n");
    for(i=0; i<sz; i++)
    {
        scanf("%d", &a[i]);
        if(a[i]%2==0)
        {
            even++;
        }

        else
        {
            odd++;
        }
    }
    int b[even],c[odd];
    int j=0,k=0;
    for(i=0; i<sz; i++)
    {
        if(a[i]%2==0)
        {
            b[j++]=a[i];
        }
        else
        {
            c[k++]=a[i];
        }

    }
    printf("Even elements in array:");
    for(i=0; i<even; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n Odd elements in array:");
    for(i=0; i<odd; i++)
    {
        printf("%d ", c[i]);
    }
    return 0;

}

