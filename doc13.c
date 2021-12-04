//LCM of two number
#include <stdio.h>
int lcm(int);
int n1, n2, max,a;
   
int lcm(int a)
{    
 max = (n1 > n2) ? n1 : n2;
 while (1) 
 {
   if (max % n1 == 0 && max % n2 == 0) 
   {
    printf("The LCM of %d and %d is %d.", n1, n2, max);
    break;
   }
   ++max;
 }
}
int main()
 {
   printf("Enter two positive integers: ");
   scanf("%d %d", &n1, &n2);
   lcm(a);
 }
