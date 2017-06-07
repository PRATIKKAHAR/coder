#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int ans(int p,int n, int m);
void  main()
{
 int i,j,a,b,answer;
 int mat[3][3],p;
 int opr[4] = {'+', '-', '*', '/'},out,count=0,op;
 //clrscr();
 srand(time(NULL));
printf("\n\n");
 for(i=0;i<3;i++)
 {
 for(j=0;j<3;j++)
 {
printf(" \t%d",mat[i][j]=rand()%20);
 }
printf("\n");
 }
 srand(time(10));
printf("\t __ %c __ =  __\n",op=opr[rand()%4]);
printf ("\nEnter a = ");
 scanf(" %d",&a);
printf("\nEnter b = ");
 scanf(" %d",&b);
printf("\nout = ");
 scanf(" %d",&out);

 if(op=='+')
 {
 p=1;
 }
 else if(op=='-')
 {
 p=2;
 }
 else if(op=='*')
 {
 p=3;
 }
 else
 {
 p=4;
 }
 //printf("\t p=%d",p);
 answer = ans(a,p,b);
printf("\nans = %d",answer);
 if(answer==out)
 {
printf("\n\nCorrect answer");
 count=count+1;
printf("\nYour Score is %d",count);
 }
 else
 {
printf("\nSorry Worng answer");
 }
 getch();
 }

 int ans(int a,int p, int b)
 {
   int temp;
 switch(p)
 {
   case 1:  temp = (a+b);
		//printf("\t temp=%d",temp);
		break;

   case 2: temp = (a-b);
	   //printf("\t temp=%d",temp);
	   break;
   case 3: temp = (a*b);
	   //printf("\t temp=%d",temp);
	   break;
   case 4: temp = (a/b);
	   //printf("\t temp=%d",temp);
	   break;
 }
    return(temp);

 }