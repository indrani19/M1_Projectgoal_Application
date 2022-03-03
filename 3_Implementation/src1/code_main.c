#include"code.h"
struct items
{
    char item[20];
    float price;
    int quantity;
};
struct orders
{
    char customer[50];
    char date[50];
    int numofItems;
    struct items itm[50];
};
int main()
{
    //dashboard
    float total;
    int option,n;
    struct orders ord;
    struct orders order;
    char savebill = 'y';
   
    FILE *fp;
    printf("\t---------------RESTAURANT---------------");
    printf("\n\nPLEASE SELECT YOUR PREFERED OPTION");
    printf("\n1.GENERATE INVOICE");
    printf("\n2.SHOW ALL INVOICES");
    printf("\n3.EXIT");

    printf("\n\nYour choice:\t");
    scanf("%d",&option);
    fgetc(stdin);

    switch(option)
    {
    case 1:
        printf("\n please enter the name of the customer\t");
        fgets(ord.customer,50,stdin);
        ord.customer[strlen(ord.customer)-1]=0;
        strcpy(ord.date,__DATE__);
        printf("\n Please enter the number of items:\t");
        scanf("%d",&n);
        ord.numofItems=n;

        for(int i=0;i<n;i++)
        {
            fgetc(stdin);
            printf("\n\n");
            printf("please enter the item %d:\t",i+1);
            fgets(ord.itm[i].item,20,stdin);
            ord.itm[i].item[strlen(ord.itm[i].item)-1]=0;
            printf("please enter the quantity:\t");
            scanf("%d",&ord.itm[i].quantity);
            printf(" please enter the unit price:\t");
            scanf("%f",&ord.itm[i].price);
            total+= ord.itm[i].quantity* ord.itm[i].price;
         }
         Billheader(ord.customer,ord.date);
         for(int i=0;i<ord.numofItems;i++)
         {
             Billbody(ord.itm[i].item,ord.itm[i].quantity,ord.itm[i].price);
         }
         Billfooter(total);
         printf("\n Do you want to save the invoice [y/n]:\t");
         scanf("%s",&savebill);
         if(savebill == 'y')
            {
              fp= fopen("RestaurantBill.dat","a+");
              fwrite(&ord, sizeof(struct orders),1,fp);
              if(fwrite !=0)
                printf("\n Successfully saved");
              else
                printf("\nError saving");
              fclose(fp);
            }
            break;

    case 2:
        fp=fopen("RestaurantBill.dat","r");
        printf("\n ********Your Previous Invoices*********\n");
        while (fread(&order,sizeof(struct orders),1,fp))
        {
            float tot=0;
            Billheader(order.customer,order.date);
            for(int i=0;i<order.numofItems;i++)
            {
                Billbody(order.itm[i].item,order.itm[i].quantity,order.itm[i].price);
                tot+=order.itm[i].quantity * order.itm[i].price;
            }
            Billfooter(tot);
        }
        fclose(fp);
        break;


    case 3:
        printf("\n\t\t Thanks for visiting:");
        exit(0);
        break;
    default:
        printf("sorry invalid option");
        break;

}
    printf("\n\n");
    return 0;
}