
//program to enter items as well as there prices and total them 
#include <stdio.h>
#include <stdlib.h>

int main(void){

    char *items[5]={"MAize","brocolli","Mango","Apple","Carrots"};
    int  quantityofitems[5]= {0,0,0,0,0};
    int priceofitems[5]= {500,1000,400,1200,300};
    int select,item, entry; 

while (select != 5){
    printf("\nwelcome\n");
    printf("enter a number to select an item\n");
    printf("1. Add produce\n");
    printf("2. Display my items\n");
    printf("3. Update Item\n");
    printf("4. My total Bill\n");
    printf("5. Exit\n");
    scanf("%d",&select);

     if (select == 1){

        printf("Add produce\n");

        for (int i = 0; i <= 4; i++){
            int list = i+1;
            printf("%d.. %s Quantity: %d\n",list,items[i],quantityofitems[i]);
        }

         scanf("\n%d",&item);

        quantityofitems[item-1] ++;

        printf("\nItem Added!\n");
        printf("Item:%s New Quantity:%d",items[item-1],quantityofitems[item-1]);


     } else if (select == 2) {

        for (int i = 0; i <= 4; i++){
            int list = i+1;
            printf("%d.. %s Quantity: %d  Price: %d\n",list,items[i],quantityofitems[i],priceofitems[i]);
        }

    }

     if (select == 3){

        printf("Select an item\n");
        for (int i = 0; i <= 4; i++){
            int list = i+1;
            printf("%d.. %s Qty: %d\n",list,items[i],quantityofitems[i]);
        }


         scanf("\n%d",&item);
        printf("What is my new Quantity? ");
        scanf("%d",&entry);

        quantityofitems[item-1] = entry;

        printf("\nItem have been changed \n");
        printf("Item:%s New Quantity :%d",items[item-1],quantityofitems[item-1]);
      }

       if (select == 4){

        int itemcost;
        int total;

        for(int  A= 0; A <= 4; A++){
           itemcost = itemcost + (quantityofitems[A] * priceofitems[A]);

            }

        printf("The total Cost of  Items : %d Shs", itemcost);
        itemcost = 0;

    }
   else if (select == 5){
        exit(0);
    }
}

    return 0 ;
}