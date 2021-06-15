#include<stdio.h>
#include<string.h>

int main()
{
    char d[10], t[]="SUN",u[]="MON",s[]="TUE",h[]="WED",a[]="THU",r[]="FRI",k[]="SAT";
    scanf("%s",&d);
    if(strcmp(d,t))
    {
        printf("1\n");
    }
   else if(strcmp(d,u))
    {
        printf("2\n");
    }
   else if(strcmp(d,s))
    {
        printf("3\n");
    }
   else if(strcmp(d,h))
    {
        printf("4\n");
    }
    else if(strcmp(d,a))
    {
        printf("5\n");
    }
    else if(strcmp(d,r))
    {
        printf("r\n");
    }
    else if(strcmp(d,k))
    {
        printf("7\n");
    }
  return 0;
}
