#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j,k,y;
    scanf("%d",&n);
    int A[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d",&A[i]);
    }
    scanf("%d",&m);
    int B[m];
    for(i = 0; i < m; i++)
    {
        scanf("%d",&B[i]);
    }
    sort(A,A+n);
    sort(B,B+m);
    printf("%d %d",A[n-1],B[m-1]);
    return 0;
}

