#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
   int number,guess,nguesses=1;
   srand(time(0));
   number = rand()%100+1;// generates a random number btw 1 and 100
   //printf("the number is %d",number);
    do
    {
         printf("\nguess the number 1 to 100\n");
         scanf("%d",&guess);
         if (guess>number)
         {
            printf("lower number please\n");
         }
         else if(guess<number) {
             printf("higher number please\n");  

         }else{
             printf("you gueesed in %d attempts",nguesses);
             
         }
         nguesses++;
           
    } while (guess!=number);
    
   

   return 0;    


}