//find A grade of given marks or (find a grand of given marks using switch case)
#include<stdio.h>
void marks();
int ph,ch,bio,math,com,per;

void marks()
{
  printf("enter marks of physics\n");
  scanf("%d",&ph);
  printf("enter marks of chamistry\n");
  scanf("%d",&ch);
  printf("enter marks of biology\n");
  scanf("%d",&bio);
  printf("enter marks of maths\n");
  scanf("%d",&math);
  printf("enter marks of computer\n");
  scanf("%d",&com);
  per = (ph+ch+bio+math+com)/500*100;
  printf("enter your choice\n");
  scanf("%d",&per);
 switch(per)
 {
 
 
  case 1:// (per>=90);
          printf("pass with grade A\n");
          break;
          
  case 2: //(per>=80 && per<=89);
          printf("pass with grade B\n");
          break;
          
  case 3:// (per>=70 && per<=79);
          printf("pass with grade C\n");
          break;
          
  case 4:// (per>=60&& per<=69);
          printf("pass with grade D\n");
          break;
  case 5: //w(per>=40 && per<=59);
          printf("pass with grade E\n");
          break;
          
  default : printf("pass with grade F\n");
}
}

int main()
{

 marks();
}
