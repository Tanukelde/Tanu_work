//find a genetic 
int genetic(int);
int num, temp, rem, sum = 0,a;  
 
int genetic(int a) 
{  
 temp = num;  
 while(temp > 0)
 {
   rem  = temp % 10;  
   sum  = sum + rem;  
   temp = temp / 10;  
 } 
    if(temp == 0)  
     {  
      if(sum > 9)  
        {  
          temp = sum;  
          sum  = 0;  
        }  
      }  
   printf("Generic Root of %d is %d\n", num, sum);  
}
int main()  
  {  
    printf("Enter a number\n");  
    scanf("%d", &num);
    genetic(a);  
  }
