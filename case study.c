#include<stdio.h>
void main()

/* ****case study****
       ***ATM***
 #1 balence inquiry
 #2 cash withdrawal
 #3 cash deposit 
 - transaction successful 
 - insufficient balence
 - successful deposit
 -invalid option
 @ it gives the updated balnce everytime */
 
{
int cash=10000000,id,o,w,t,d;
char name[50];
printf("please enter your name and ID:  ");
scanf("%s%d",&name,&id);
printf("\n********************************\nHi dear %s what would you like to do\n1 . check your balence\n2 . withdraw cash\n3 . deposit  cash ",name);
scanf("\n%d",&o);
if(o==1){
   printf("\n********************************");
   printf("\nyour balence is %d",cash);
}
else if(o==2){
  printf("\n********************************");
  printf("\n \n how much money would you like to with draw");
  scanf("%d",&w);
  cash= cash - w ;
  if(t<0)
    printf("\n insufficient balence");
  else
  {
    printf("\n********************************");
    printf("\t\t transaction successful");
   printf("\n********************************");
    printf("your total balence is %d",cash);  
  }
}
else if(o==3){
  printf("\n********************************");
  printf("\n \n how much money would you like to deposit");
  scanf("%d",&d);
  cash= cash + d ;
  
  printf("\n********************************");
  printf("\n successful deposit");
  
  printf("\n********************************");
  printf("your total balence is %d",cash);  
  
}
else
printf("invalid option");



}