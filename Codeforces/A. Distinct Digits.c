#include<stdio.h>
int main()
{
    long long int i,j,k,f,z,y=0,L,X,R,W,m,a[10];
    scanf("%lld %lld",&L,&R);
    for(i = L; i <= R; i++)
    {
        X = i;
        W=i;
        j = 0;
        z = 0;
        while(X != 0)
        {
            m = X % 10;
            X = X / 10;
            a[j] = m;
            j++;
        }
        for(k = 0; k < j; k++)
        {
            for(f = k+1; f < j; f++)
            {
                if(a[k] == a[f])
                {
                    z++;
                }
            }
        }
        if(z == 0)
        {
            printf("%lld",W);
            y++;
            break;
        }
    }
    if(y == 0)
    {
        printf("-1");
    }
    return 0;
}
