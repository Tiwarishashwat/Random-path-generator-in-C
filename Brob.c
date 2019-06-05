// C program for generating a 


// random number in a given range. 


#include <stdio.h>


#include <stdlib.h>


#include <time.h> 


// Generates and prints 'count' random 


// numbers in range [lower, upper]. 


int printRandoms(int lower, int upper, int count) 


{
 

for (int i = 0; i < count; i++) 

{ 

 int num = (rand() % (upper - lower + 1)) + lower;
 
if(num==1)
 
{
 
printf("PATH-A");
 
printf("->");
 
}
 
else if(num==2)

 {
 
printf("PATH-B");

 printf("->");

 }

 else if(num==3)
 
{

 printf("PATH-C");

 printf("->");
 
}
 
else if(num==4)
 
{
 
printf("PATH-D");
 
printf("->");
 
}
 
else if(num==5)
 
{
 
printf("PATH-E");
 
printf("->");
 
}
 
else if(num==6)
 
{
 
printf("PATH-F");
 
printf("->");
 
}
 
else if(num==7)
 
{
 
printf("PATH-G");
 
printf("->");
 
}
 
else if(num==8)
 
{
 
printf("PATH-H");
 
printf("->");
 
}
 
else if(num==9)
 
{
 
printf("PATH-I");
 
printf("->");
 
}

 
}
 

} 


// Driver code 

int main() 


{ 


int lower = 1, upper = 3, count = 1;

printf("Take the following path:\n");

printf("SOURCE->");

// Use current time as 


// seed for random generator 


srand(time(0));
  
  printRandoms(lower, upper, count);

    printRandoms(4, 6, count);
   
 printRandoms(7, 9, count);
 
   printf("DESTINATION\n");

return 0;
 

}

