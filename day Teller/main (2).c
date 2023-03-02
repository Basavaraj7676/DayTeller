#include<stdio.h>
int main()
{
    int d,m,y,r,v,t,year,b,c;
    printf ("Enter date :\n");
    scanf("%d",&d);
    printf ("Enter the month: \n");
   scanf("%d",&m);
 //  printf ("Enter last 2 digit of year :\n");
 //  scanf("%d",&b);
   
    printf ("Enter the year(Except leap year) :\n");
    scanf ("%d",&year);
    if (year>=1500&&year<=1599)
    {
    b=year-1500;
    c=0;}
  else if(year>=1600&&year<=1699)
  {b=year-1600;
   c=6;}
   else if (year>=1700&&year<=1799)
   {b=year-1700;
   c=4;}
   else if (year>=1800&&year<=1899)
   {b=year-1800;
   c=2;}
   else if (year>=1900&&year<=1999)
   {b=year-1900;
   c=0;}
   else if (year>=2000&&year<=2099)
   {
   b=year-2000;
   c=6;}
   else 
   printf("Enter the valid year\n");
   
   if (m==1)
   r=1;
   else if (m==2)
   r=4;
    else if (m==3)
    r=4;
     else if (m==4)
     r=0;
      else if (m==5)
      r=2;
       else if (m==6)
       r=5;
        else if (m==7)
        r=0;
         else if (m==8)
         r=3;
          else if (m==9)
          r=6;
           else if (m==10)
           r=1;
            else if (m==11)
            r=4;
             else if (m==12)
             r=6;
  t=d+r+b+(b/4)+c;
  v=t%7;
  switch (v)
  {
      case 0:
      printf("\n The Day is Saturday\n");break;
      
      case 1:
      printf("\n The Day is Sunday\n");break;
      
      case 2:
      printf("\n The Day is Monday\n");break;
      
      case 3:
      printf("\n The Day is Tuesday\n");break;
      
      case 4:
      printf("\n The Day is Wednesday\n");break;
      
      case 5:
      printf("\n The Day is Thuresday\n");break;
      
      case 6:
      printf("\n The Day is Friday\n");break;
      
      
  }
  
    
    return 0;
    
}
