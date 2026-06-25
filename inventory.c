#include <stdio.h>
int main()
{
int product_id[10]={123,345,456,567,678,789,987,654,321};
int product_qty[10]={3,4,5,8,7,2,6,6,1,5};
char item_name[10][20]={"pe", "lp", "us polo", "h&m", "armani", "zara", "adidas", "d&g", "chanel", "gucci"};
float price[10]={500.0, 1000.0, 1500.0, 2000.0, 2500.0, 3000.0, 3500.0, 4000.0, 4500.0, 5000.0};
int choice;
do{
printf("\t\t\t=====TREND INVOICE=====\t\t\t\n");
printf("\t\t\t\tmenu\t\t\t\t\n");
printf("\t\t\t1.view inventory stock\n");
printf("\t\t\t2.purchase item\n");
printf("\t\t\t3.checkout & exit\n");
printf("enter your choice");
scanf("%d",&choice);
while(choice<1||choice>3)
{
    printf("invalid choice\n");
    scanf("%d",&choice);
if(choice>=1 && choice<=3)
break;
}
if(choice==1)
{
    //display stock available
printf("------------------------------------------------------------------------\n");
printf("\n item_name\t\tproduct_id\t\tproduct_qty\t\tprice\n");
printf("------------------------------------------------------------------------\n");

    for(int i=0;i<sizeof(product_id)/sizeof(product_id[0]);i++)
    {
        printf("%s\t\t\t%d\t\t\t%d\t\t\t%.2f\n",item_name[i],product_id[i],product_qty[i],price[i]);
    }
}
else if(choice==2)
{
    //purchase item
   int id_input;
    printf("enter product_id  to purchase");
    scanf("%d", &id_input);
    
for(int i=0;i<sizeof(product_id)/sizeof(product_id[0]);i++)
{
    if(product_id[i]==id_input)
        {
       int input_qty;
       printf("enter quantity to purchase");
        scanf("%d", &input_qty);
            if(product_qty[i]>=input_qty)
            {
      float amount=price[i]*input_qty;
                printf("item is available\n");
                printf("item name: %s\n",item_name[i]);
                printf("quantity purchased: %d\n",input_qty);
                printf("amount:%.2f\n",amount);
            }
            else 
                (product_qty[i]<input_qty);
            {
                printf("out of stock\n");
            }
                product_qty[i]=product_qty[i]-input_qty;
                printf("remaining quantity : %d\n",product_qty[i]);
        }
            // break;
        
}
}
else if(choice==3)
{
    //checkout and exit
printf("thank you for shopping \n");
}
else
break;
}while(choice!=3);

return 0;
}