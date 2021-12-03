//W.A.P to calculate profit or loss.
#include<stdio.h>
int main()
{
int cp,sp, profit,loss;
printf("enter cost price :");
scanf("%d",&cp);
printf("enter selling price :");
scanf("%d",&sp);

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



return 0;
}

