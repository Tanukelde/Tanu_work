//📖️ ✍️ 🌿️ 🌍️ 🏅️🕯️🍦️🌱️🥇️🔥️🌅️🔱️♻️🔰️
#include<stdio.h>
int main()
{
 int i,j,space;
 for(i=1;i<=6;i++)
 {
		   for(j=1;j<=7;j++)
		   {
		   if((i==1&&j<=6&&j>1)||(j==1&&i>1&&i<6)||(i==6&&j<=6&&j>1)||(j==7&&i>=2&&i<6))
		   printf(".");
		   else
		   printf(" ");
		   }
		   printf("\n");	  
}
		  
      
return 0;
}
