#include <stdio.h>
#include <string.h>
int main()
{
    char str1[1000];
    char newString[100][100];
    int i,j,ctr,len;

    gets(str1);
    len = strlen(str1);

    j = 0;
    ctr = 0;
    for(i = 0; i <= len; i++)
    {
        // if space or NULL found, assign NULL into newString[ctr]
        if(str1[i] == ' '|| str1[i] == '\0')
        {
            newString[ctr][j] = '\0';
            ctr++;  //for next word
            j = 0;    //for next word, init index to 0
        }
        else
        {
            newString[ctr][j] = str1[i];
            j++;
        }
    }

    for(i = 0; i < ctr; i++)
    {
        printf("%s\n",newString[i]);
    }
    return 0;
}
