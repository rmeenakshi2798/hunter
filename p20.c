#include<stdio.h>
int main()
{
    int a[100],b[100],i,j,n,c=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    //time=b[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>=b[0])
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}
