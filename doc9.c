//The display size of the diff.data type
#include<stdio.h>
int datatype(int);
int integertype,a;
float floattype;
char charactertype;
double doubletype;

int datatype(int a)
{
  printf("size of int is:%ld\n",sizeof(integertype));
  printf("size of float is:%ld\n",sizeof(floattype));
  printf("size of char is:%ld\n",sizeof(charactertype));
  printf("size of double is:%ld\n",sizeof(doubletype));
}

int main()
{
 datatype(a);
}
