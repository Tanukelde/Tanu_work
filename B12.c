//gross salary
#include<stdio.h>
int main()
{
unsigned int basicsalary;
float hra=0,da=0,gs;
printf("basic salary of employee\n");
scanf("%u",&basicsalary);

if(basicsalary<=10000)
{
hra = (basicsalary*20)/100;
da = (basicsalary*80)/100;
}
else if(basicsalary<=20000)
{
hra = (basicsalary*25)/100;
da = (basicsalary*90)/100;
}
else
{
hra = (basicsalary*30)/100;
da = (basicsalary*95)/100;
}
gs = basicsalary+hra+da;
printf("\ngross salary of this employee = %.2f",gs);
return 0;
}

