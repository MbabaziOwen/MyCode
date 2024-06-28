#include<stdio.h>

int main(void){
    /*multiples of 3, print Buzzz
      multiple of five, print Buzz
      multiple of 7, print buzz
      if its not any of them print Fuzz and print the number
       */
      int number = printf("Give me a number: ");
      scanf("%d",&number);


      if(number %7==0){
            printf("Buzz");
      }else if (number %5==0){
        printf("buzz");
      }else if (number %3==0){
        printf("buzz");
      }else {
        printf("Fuzz%d",number);
      }
            

                
        
        return 0;
}