//reverse order of words in a given string 
#include<stdio.h>
int main()
{
 char str[1000],reverse[1000];
 int i,j,count = 0;
 
  printf("\nString Before Reverse: %s", str);
  scanf("%s", str);
  while (str[count] != '\0')
  {
    count++;
  }
  j = count - 1;
  for (i = 0; i < count; i++)
  {
    rev[i] = str[j];
    j--;
  }
  printf("\nString After Reverse: %s", rev);
}
