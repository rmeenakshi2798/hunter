#include <stdio.h>

int main()
{
    int a[100],b[100],z=0,i,j,n,max,p;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        max=0;
        for(j=0;j<n;j++)
        {
            if(a[j]>=max)
            {
                max=a[j];
                p=j;
            }
        }
        b[z]=max;
        z++;
        a[p]='\0';
        
    }
    for(i=0;i<n;i++)
    {
        printf("%d",b[i]);
    }

    return 0;
}
