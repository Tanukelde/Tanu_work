//character is vowel or consonant
#include<stdio.h>
void aeiou();
char x;

void aeiou()
{
 if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
 printf("the character is a vowel\n");
 else
 printf("the chatacter is a consonant\n");
}

int main()
{
 printf("enter a latter\n");
 scanf("%c",&x);
 aeiou();
}
