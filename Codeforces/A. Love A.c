#include<stdio.h>
#include<string.h>
int main()
{
   int len,i,count=0,x;
   float y;
   char s[50];
   scanf("%s",&s);
   len = strlen(s);
   for(i = 0 ; i < len; i++)
   {
       if(s[i] == 'a')
       {
           count++;
       }
   }
   if(len/2 < count)
   {
       printf("%d",len);
   }
   else
    {
        len = len - count;
        x = len/2;
        y = (float)len/2.0;
        if((float)x == y)
        {
            printf("%d",x+1);
        }
        else
        {
            printf("%d",x+1);
        }
    }
    return 0;
}
