#include <stdio.h>

int main()
{
   int a[100],n,i,j,t,k,g;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   
   for(i=0;i<n;i++)
   {
       for(j=i+1;j<n;j++)
       {
           if(a[i]>a[j])
           {
               t=a[i];
               a[i]=a[j];
               a[j]=t;
           }
       }
   }
  k=0;
   g=n-1;
      for(i=0;i<n;i=i+2)
    {
        if(k==g)
        {
            printf("%d",a[g]);
        }
        else
        {
        printf("%d %d ",a[g],a[k]);
        k++;
        g--;
        }
    
    }
    
    return 0;
}
