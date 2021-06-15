#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,count = 0;
    char x[100],a[ ] = "Tetrahedron",b[ ] = "Cube",c[ ] = "Octahedron",d[ ] = "Dodecahedron",e[ ] = "Icosahedron";
    scanf("%d",&n);
    for(i = 1; i <= n; i++)
    {
        scanf("%s",&x);
        if(strcmp(a,x) == 0)
        {
            count = count + 4;
        }
        if(strcmp(b,x) == 0)
        {
            count = count + 6;
        }
        if(strcmp(c,x) == 0)
        {
            count = count + 8;
        }
        if(strcmp(d,x) == 0)
        {
            count = count + 12;
        }
        if(strcmp(e,x) == 0)
        {
            count = count + 20;
        }
    }
    printf("%d",count);
    return 0;
}
