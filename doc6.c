//gross salary of a employee
#include<stdio.h>
int salary(int);
int gross_salary,basic,da,ta,a;

int salary(int a)
{
 da=(10*basic)/100;
 ta=(12*basic)/100;

 gross_salary=basic+da+ta;
 printf("gross salary: %d",gross_salary);
}

int main()
{
 printf("basic salary of employee\n");
 scanf("%d",&basic);
 salary(a);
}
