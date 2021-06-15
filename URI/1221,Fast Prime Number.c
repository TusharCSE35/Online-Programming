/*#include<stdio.h>
int main()
{
    int N,i,j,X,count;
    scanf("%d",&N);
    for(i = 1; i <= N; i++)
    {
        count = 0;
        scanf("%d",&X);
        for(j = 2; j < X; j++)
        {
            if(X % j == 0)
            {
                count++;
                break;
            }
        }
        if(count == 0)
        {
            printf("Prime\n");
        }
        else
        {
            printf("Not Prime\n");
        }
    }
  return 0;
}
*/
#include<stdio.h>
#include <math.h>
#include <algorithm>
int prime (int a)
{
    if (a==2) return 1;
    for (int i=3; i*i<=a; i+=2)
    {
        if (a%i==0) return 2;
    }
    return 1;
}
int main ()
{
    long int n,tes,taka,res,count=0;

    int a[5000];
    a[0]=2;
    for (i=3,j=1; i<10000; i+=2)
    {
        tes=prime (i);
        if (tes==1)
        {
            a[j]=i;
            j++;
        }
    }
    scanf ("%d",&n);
    while (n--)
    {
        sum=0;
        count=0;
        scanf ("%d",&taka)
        i=0;
        while (sum<taka)
        {
            sum+=a[i];
            i++;
            count++;
        }
        if (sum==taka) printf ("%d\n",count);
        else
        {
            while (sum==taka || )
            }
    }
    printf ("%d\n",count);

    return 0;
}
