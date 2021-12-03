
//check whether an alphabet is vowel or cosonant using a switch case
#include<stdio.h>
void aeiou();
char x;

void aeiou()
{
 printf("enter a latter\n");
 scanf("%c",&x);
 switch(x)
 { 
  case 'a': printf("latter is vowel");
            break; 
            
  case 'e': printf("latter is vowel");
            break;           
            
  case 'i': printf("latter is vowel");
            break;          
            
  case 'o': printf("latter is vowel");
            break;          
 
  case 'u': printf("latter is vowel");
            break; 
            
  case 'A': printf("latter is vowel");
            break; 
            
  case 'E': printf("latter is vowel");
            break;           
            
  case 'I': printf("latter is vowel");
            break;          
            
  case 'O': printf("latter is vowel");
            break;          
 
  case 'U': printf("latter is vowel");
            break; 
            
  default : printf("latter is consonant");
}
}
int main()
{
 
 aeiou();
}

