#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
 char g[100],b[100];
 int x,y;
 int ch1=0,ch2=0;
 int leng=0;
 do
 {
 printf("Choose initial number system :\n");
 printf("( 1. Binary 2. Decimal 3. Octal 4. Hexadecimal 5. Exit)\n");
 scanf("%d",&ch1);
 if(ch1==5)
 break;
 printf("Choose final number system :\n");
 printf("( 1. Binary 2. Decimal 3. Octal 4. Hexadecimal 5. Exit)\n");
 scanf("%d",&ch2);
 if(ch2==5)
 break;
 printf("Enter the number to be converted :\n");
 scanf("%s",g);
 int len=strlen(g);
 switch(ch1)
 {
 case 1:
 x=2;
 break;
 case 2:
 x=10;
 break;
 case 3:
 x=8;
 break;
 case 4:
 x=16;
 break;
 case 5:
 break;
 default:
 printf("Invalid input. Enter again.\n");
 continue;
 }
 switch(ch2)
 {
 case 1:
 y=2;
 break;
 case 2:
 y=10;
 break;
 case 3:
 y=8;
 break;
 case 4:
 y=16;
 break;
 case 5:
 break;
 default:
 printf("Invalid input. Enter again.");
 continue;
 }
 printf("Converting %s from base %d to base %d.\n",g,x,y);
 int s=0, z=0;
 for(int i=0;i<strlen(g);i++)
 {
    if((int)(g[i])>=48 && (int)(g[i])<=57)
        z=(int)(g[i])-48;
    else
        z=(int)(g[i])-55;
    s+=z*pow(x,len-1-i);
 }
 int k=0;
 char c[100],d;
 while(s>0)
 {
    if((s%y)>=0 && (s%y)<=9)
        d=(char)((s%y)+48);
    else
        d=(char)((s%y)+55);
    for(int i=k;i>0;i--)
        c[i]=c[i-1];
    c[0]=d;
    k++;
    s/=y;
}
 char e[k];
 for(int i=0;i<k;i++)
    e[i]=c[i];
 printf("Converted number = %s\n",e);
 printf("[ i.e., ( %s ) base %d = ( %s ) base %d ]\n\n",g,x,e,y);
}
 while(ch1!=5 && ch2!=5);
 return 0;
}