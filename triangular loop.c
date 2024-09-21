#include<stdio.h>
#include<conio.h>
 void main()
{
  int i,j;
  char ch = 'G';
  clrscr();
  for(i=1000;i>=1;i--)
  {
    printf("\n");
    for(j=0;j<i;j++)
    printf("%c",ch);
  }
  getch();
}
    