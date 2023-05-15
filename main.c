#include <stdio.h>
int main()
{
   char screen4[465];
   char screen3[465];
   char screen2[465];
   char screen[465];    
    int i= 0;
    int i1=0;
    int i2=0;
    int i3=0;
    int g=0;

    while(i<465)
    {
        if(i%31 == 30){
            screen[i] = '\n' ;
        }
        else {
             screen[i] =' ' ;
          if(i%31 == 0)
             {
                screen[i]='#' ;
             }
          else if(i%31 == 29 ){
                screen[i]='#' ;
             }
          else if(i <=28){
            screen[i]='#' ;
             }
          else if(i >=434)
             {
            screen[i]='#' ;
             }
         }
     i=i+1;
    }
    screen[464] ='\0';
   char game1[8]="notegame";
   int a=0;
   while(a<8)
   {
      screen[a+10+31*2]=game1[a];
      a++;
   }
   
char game2[11]="1.Play game";
   int b=0;
      while(b<11)
      {
      screen[b+8+31*5]= game2[b];
      b++;
      }
   char game3[6]="2.menu";
   int c=0;
   while(c<6)
       {
      screen[c+11+31*7]=game3[c];
      c++;
      }
   char game4[8]="3.credit";
   int d=0;
   while(d<8)
   {
      screen[d+11+31*9]=game4[d];
      d++;
   }
  while(i1<465)
    {
        if(i1%31 == 30){
            screen2[i1] = '\n' ;
        }
        else {
             screen2[i1] =' ' ;
          if(i1%31 == 0)
             {
                screen2[i1]='#' ;
             }
          else if(i1%31 == 29 ){
                screen2[i1]='#' ;
             }
          else if(i1 <=28){
            screen2[i1]='#' ;
             }
          else if(i1 >=434)
             {
            screen2[i1]='#' ;
             }
         }
     i1=i1+1;
    }
    screen2[464] ='\0';
   char game5[13]="notegame_game";
   int a2=0;
   while(a2<13)
   {
      screen2[a2+8+31*2]=game5[a2];
      a2++;
   }
   char game6[6]="1.menu";
   int b2=0;
   while(b2<6)
   {
      screen2[b2+11+31*9]=game6[b2];
      b2++;
   }
   while(i2<465)
    {
        if(i2%31 == 30){
            screen3[i2] = '\n' ;
        }
        else {
             screen3[i2] =' ' ;
          if(i2%31 == 0)
             {
                screen3[i2]='#' ;
             }
          else if(i2%31 == 29 ){
                screen3[i2]='#' ;
             }
          else if(i2 <=28){
            screen3[i2]='#' ;
             }
          else if(i2 >=434)
             {
            screen3[i2]='#' ;
             }
         }
     i2=i2+1;
    }
    screen3[464] ='\0';
   char game7[13]="notegame_menu";
   int a3=0;
   while(a3<13)
   {
      screen3[a3+8+31*2]=game7[a3];
      a3++;
   }
   char game8[6]="1.menu";
   int b3=0;
   while(b3<6)
   {
      screen3[b3+11+31*9]=game8[b3];
      b3++;
   }
   while(i3<465)
    {
        if(i3%31 == 30){
            screen4[i3] = '\n' ;
        }
        else {
             screen4[i3] =' ' ;
          if(i3%31 == 0)
             {
                screen4[i3]='#' ;
             }
          else if(i3%31 == 29 ){
                screen4[i3]='#' ;
             }
          else if(i3 <=28){
            screen4[i3]='#' ;
             }
          else if(i3 >=434)
             {
            screen4[i3]='#' ;
             }
         }
     i3=i3+1;
    }
    screen4[464] ='\0';
   char game9[14]="notegame_crdit";
   int a4=0;
   while(a4<14)
   {
      screen4[a4+10+31*2]=game9[a4];
      a4++;
   }
   char game10[6]="1.exit";
   int b4=0;
   while(b4<6)
   {
      screen4[b4+11+31*9]=game10[b4];
      b4++;
   } 
   while(screen){
         printf("%s",screen);
         printf("\n input -->");
         scanf("%d",&g);
         if(g==1){
          while (screen2)
          {
            g=0;
            printf("%s",screen2);
            printf("\n input -->");
            scanf("%d",&g);
            if (g==1){
               g=0;
               break;
            }
          }
          
                  }
         else if (g==2)
      {
         while (screen3)
          {
            g=0;
            printf("%s",screen3);
            printf("\n input -->");
            scanf("%d",&g);
            if(g==1){
                  g=0;
                break;
            }
          }
   }
         else if(g==3){
            while (screen4)
            {
               
            
            g=0;
            printf("%s",screen4);
            printf("\n input -->");
            scanf("%d",&g);
            if(g==1){
               g=0;
               break;
            }
         }
         }




   }


   
	return 0;

}