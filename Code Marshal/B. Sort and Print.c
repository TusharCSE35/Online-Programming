#include<stdio.h>
int main()
{
    int n,r[100],m[100],i,j,temp,tent;
    char x[11];
    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        scanf("%d %s %d",&r[i],&x[i],&m[i]);
    }
     for(i = 0; i < n-1; i++)
    {
        for(j = i+1; j < n; j++)
        {
            if(r[i] > r[j] && m[i] < m[j])
            {
                tent = m[i];
                 m[i] = m[j];
                m[j] = tent;
                temp = r[i];
                r[i] = r[j];
                r[j] = temp;
            }
        }
    }
    for(i = 0; i < n; i++)
    {
        printf("%d | %s      | %d\n",r[i],x,m[i]);
    }
    return 0;
}
