
#include<stdio.h>
int main()
{
  int i,j,n,space;
  char alphabate,choice;
  do
  {
   printf("please Enter alphabate\n");
   scanf("%c",&alphabate);
   getchar();
	   switch(alphabate)
	  {
	      case 65:for(i=1;i<=5;i++)
		    {
		     for(j=1;j<=5;j++)
		      {
		      if(i==1||j==1||j==5||i==3)
		      printf("*");
		      else
		      printf(" ");    
		      }
		      printf("\n"); 
		    }
		    break;
	      case 66:for(i=1;i<=9;i++)
		   {
		     for(j=1;j<=9;j++)
		      {
		      if(j==1||i==1||i+j==9+1)
		      printf("*");
		      else
		      printf(" ");
		      }
		       
		     printf("\n");
		    }
		      for(i=1;i<=9;i++)
		       {
		       for(j=1;j<=9;j++)
		         {
		          if(i==j||j==1||i==9)
		          printf("*");
		          else
		          printf(" ");
		          }
		          printf("\n");
		         }
		         break; 
	    case 67:for(i=1;i<=5;i++)
		    {
		     for(j=1;j<=4;j++)
		      {
		       if(i==1||j==1||i==5)
		       printf("*");
		       else
		       printf(" ");
		       }
		       printf("\n");
		       }
		       break;
	    case 68:for(i=1;i<=6;i++)
		     {
		      for(j=1;j<=6;j++)
		       {
		        if((i==1&&j<=5)||(j==1)||(i==6&&j<=5)||(j==6&&i>=2&&i<6))
		        printf("*");
		        else
		        printf(" ");
		        }
		        printf("\n");
		        }
		        break;
	     case 69:for(i=1;i<=5;i++)
		     {
		      for(j=1;j<=5;j++)
		       {
		        if(i==1||j==1||i==5||i==3)
		         printf("*");
		         else
		         printf(" ");
		         }
		         printf("\n");
		         }
		         break;
	     case 70:for(i=1;i<=5;i++)
		     {
		      for(j=1;j<=5;j++)
		       {
		        if(i==1||j==1|i==3)
		        printf("*");
		        else
		        printf(" ");
		        }
		        printf("\n");
		        }
		        break; 
	      case 71:for(i=1;i<=5;i++)
		     {
		      for(j=1;j<=5;j++)
		       {
		        if(i==1||j==1||i==3&&j>=3||j==3&&i>3||j==5&&i>3||i==6&&j<=3)
		         printf("*");
		         else
		         printf(" ");
		         }
		         printf("\n");
		         }
		         break;                    
		          
	       case 72:for(i=1;i<=5;i++)
		     {
		      for(j=1;j<=4;j++)
		       {
		        if(j==1||j==4||i==3)
		        printf("*");
		        else
		        printf(" ");
		        }
		        printf("\n");
		        }
		        break; 
	       case 73: for(i=1;i<=5;i++)
		     {
		      for(j=1;j<=5;j++)
		       {
		        if(i==1||i==5||j==3)
		        printf("*");
		        else
		        printf(" ");
		        }
		        printf("\n");
		        }
		        break;                    
	       case 74: for(i=1;i<=5;i++)
		     {
		      for(j=1;j<=5;j++)
		       {
		        if(i==1||j==3||i==5&&j<=3||j==1&&i>=4)
		        printf("*");
		        else
		        printf(" ");
		        }
		        printf("\n");
		        }
		        break;
	       case 75:for(i=1;i<=5;i++)
		        {
		         for(j=1;j<=5;j++)
		          {
		           if(j==1||j==5-i+1)
		           printf("* ");
		           else
		           printf("  ");
		           }
		           printf("\n");
		           }
		          for(i=1;i<=5;i++)
		            {
		             for(j=1;j<=5;j++)
		             {
		              if(j==1||j==i)
		              printf("* ");
		              else
		              printf("  ");
		              }
		              printf("\n");
		              }
		              break; 
		case 76:for(i=1;i<=5;i++)
		           {
		           for(j=1;j<=4;j++)
		            {
		            if(j==1||i==5)
		            printf("* ");
		            else
		            printf("  ");
		            }
		            printf("\n");
		            }
		            break; 
	       case 77: for(i=1;i<=5;i++)
		          {
		           for(j=1;j<=5;j++)
		            {
		            if(j==1||j==5||i==j&&i<=3||j==6-i&&j>=4)
		            printf("* ");
		            else
		            printf("  ");
		            }
		            printf("\n");
		            }
		            break; 
	      case 78: for(i=1;i<=5;i++)
		          {
		          for(j=1;j<=5;j++)
		           {
		           if(j==1||j==5||i==j)
                           printf("* ");
          	           else
		           printf("  ");
		           }
		           printf("\n");
		           }
		           break;  
	     case 79:for(i=1;i<=6;i++)
		      {
		        for(j=1;j<=7;j++)
		          {
		           if((i==1&&j<=6&&j>1)||(j==1&&i>1&&i<6)||(i==6&&j<=6&&j>1)||(j==7&&i>=2&&i<6))
		           printf("*");
		           else
		           printf(" ");
		           }
		           printf("\n");
		           }
		           break;
	   case 80: for(i=1;i<=5;i++)
		      {
		       for(j=1;j<=3;j++)
		        {
		         if(j==1||i==1||j==3&&i<=3||i==3)
		         printf("* ");
		         else
		         printf("  ");
		         }
		         printf("\n");
		         }
		         break; 
	    case 81: for(i=1;i<=6;i++)
		      {
		       for(j=1;j<=7;j++)
		        {
		          if((i==1&&j<=6&&j>1)||(j==1&&i>1&&i<6)||(i==6&&j<=6&&j>1)||(j==7&&i>=2&&i<6))
		          printf("*");
		          else
		          printf(" ");
		          }
		          printf("\n");
		          }
		          for(i=1;i<=6;i++)
		            {
		            for(space=4;space<i;space++)
		             printf(" ");
		             for(j=1;j<=3;j++)
		              {
		               if(i==j)
		               printf("    *");
		               else
		               printf("  ");
		               }
		             printf("\n");
		             }
		          break;
	    case 82: for(i=1;i<=5;i++)
		        {
		         for(j=1;j<=3;j++)
		          {
		           if(j==1||i==1||j==3&&i<=3||i==3||i==4&&j<=2||i==5&&j>=3)
		           printf("* ");
		           else
		           printf("  ");
		           }
		           printf("\n");
		           }
		           break; 
	    case 83: for(i=1;i<=9;i++)
		       {
		        for(j=1;j<=5;j++)
		           {
		           if(i==1||j==1&&i<=4||i==5||i==9||j==5&&i>=5)
		           printf("* ");
		           else
		           printf("  ");
		           }
		           printf("\n");
		           }
		           break;
	     case 84:for(i=1;i<=5;i++)
		       {
		        for(j=1;j<=5;j++)
		          {
		           if(i==1||j==3)
		           printf("* ");
		           else
		           printf("  ");
		           }
		           printf("\n");
		           }
		           break; 
	     case 85: for(i=1;i<=6;i++)
		       {
		         for(j=1;j<=7;j++)
		          {
		           if((j==1&&i>1&&i<6)||(i==6&&j<=6&&j>1)||(j==7&&i>=2&&i<6))
		           printf("*");
		           else
		           printf(" ");
		           }
		           printf("\n");
		           }
		           break;           
	    case 86: for(i=1;i<=4;i++)
		        {
		         for(j=1;j<=7;j++)
		          {
		           if(i==j||j==8-i)
		           printf("* ");
		           else
		           printf("  ");
		           }
		           printf("\n");
		           }
		           break;
	    case 87: for(i=1;i<=5;i++)
		       {
		        for(j=1;j<=5;j++)
		          {
		          if(j==1||j==3&&i>=3||i==5&&j<5||j==5)
		          printf("* ");
		          else
		          printf("  ");
		          }
		          printf("\n");
		          }
		          break;
	   case 88: for(i=1;i<=9;i++)
		       {
		        for(j=1;j<=9;j++)
		         {
		         if(i==j||j==9-i+1)
		         printf("* ");
		         else
		         printf("  ");
		         }
		         printf("\n");
		         }
		         break; 
	  case 89: for(i=1;i<=4;i++)
		     {
		      for(j=1;j<=7;j++)
		      {
		      if(i==j||j==8-i)
		      printf("* ");
		      else
		      printf("  ");
		      }
		      printf("\n");
		     }
		      for(i=1;i<=4;i++)
		     {
		      for(j=1;j<=7;j++)
		       {
		       if(j==4)
		       printf("*");
		       else
		       printf("  ");
		       }
		       printf("\n");
		       }  
		       break; 
	  case 90: for(i=1;i<=9;i++)
		     {
		      for(j=1;j<=9;j++)
		      {
		       if(i==1||i==9||i+j==9+1)
		       printf("* ");
		       else
		       printf("  ");
		      }
		       printf("\n");
		      }
		      break;  
	   }
   printf("do you want to continue(Y/N)\n");
   scanf("%c",&choice);
   getchar();
   }while(choice=='Y' || choice=='y');
   return 0; 
}
