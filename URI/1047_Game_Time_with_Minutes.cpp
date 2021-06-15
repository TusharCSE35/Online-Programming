#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ih,im,fh,fm,x,y;
    scanf("%d %d %d %d",&ih,&im,&fh,&fm);
    if(fm > im && fh > ih)
   {
       x = fh-ih;
       y = fm-im;
       printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",x,y);
   }
   else if(fm < im && ih < fh)
   {
       x = fh - (ih+1);
       y = (fm+60) - im;
       printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",x,y);
   }
   else if(fm >= im && ih > fh)
   {
       x = (fh+24) - ih;
       y - fm - im;
       printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",x,y);
   }
   else if(fh == ih && im == fm)
   {
       x = (fh+24) - ih;
       y = im - fm;
       printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",x,y);
   }
    return 0;
}

