//calculate profit or loss
#include<stdio.h>
int profitloss(int);
int cp,sp, profit,loss,i;

int profitloss(int i)
{

  if(sp>cp)
  {
   profit = sp-cp;
   printf("profit =%d",profit);
  }

  else if(cp>sp)
  {
   loss = cp-sp;
   printf("loss =%d",loss);
  }

  else
  printf("no profit no loss");
}
int main()
{ 
 printf("enter cost price :");
 scanf("%d",&cp);
 printf("enter selling price :");
 scanf("%d",&sp);
 profitloss(i);
}

 
