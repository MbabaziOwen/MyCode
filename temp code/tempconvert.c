#include<stdio.h>
#include<string.h>

    

int main(void){
    int option;
    int fren;
    int cel;

    printf("type ,1, to convert to celicus and ,2, to convert to Fehrenhiet\n");
    scanf(" %c",&option);

    if(option ==1){
        printf("enter fehrenhiet value: ");
        scanf("%d",&fren);

        int cel = ((fren - 32)*5)/9;//result after converting from fehrenheit to celicus
        printf("your celicus value is %d",cel);
        return 0;
    
    }
            else if(option ==2){
        printf("enter celicus value: ");
        scanf("%d",cel);

        int fren = (9 * cel/5)+32;//result after converting from celicus to fehrenheit
        printf("your fehrenheit value is %d",fren);

        return 0;
        
        
    }
    else{
        printf("input the correct format");
        
        return 0;
    }
          
    


    


return 0;
}