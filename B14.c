#include<stdio.h>
int main()
{
float unit;
printf("enter unit \n");
scanf("%f",&unit);

if(unit<=50)
printf("your bill is  %f",(unit*0.50)*120/100.0);

else
if(unit>50&&unit<=150)
printf("your bill is %f",(50*0.50+(unit-50)*0.75)*120/100.0);

else
if(unit>150&unit<=250)
printf("your bill is %f",(50*0.50+100*0.75+(unit-150)*120/100.0));

else
if(unit>250)
printf("your bill is %f",(50*0.50+100*0.75+100*1.20+(unit-250)*1.50)*120/100.0);

return 0;
}
