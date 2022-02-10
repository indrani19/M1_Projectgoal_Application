#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//functions to generate bills
struct items
{
    char item[20];
    float price;
    int qty;
};
struct orders
{
    char customer[50];
    char date[50];
    int numofItems;
    struct items itm[50];
};
void generateBillHeader(char name[50], char date[30])
{
    printf("\n\n");
    printf("\t                 RESTAURANT                       ");
    printf("\n\t-----------------------------------------------");
    printf("\n DATE:%s",date);
    printf("\n INVOICE TO: %s",name);
    printf("\n");
    printf("--------------------------------------------------\n");
    printf("ITEMS\t\t");
    printf("QUANTITY\t\t");
    printf("TOTAL\t\t");
    printf("\n------------------------------------------------");
    printf("\n\n");
}
void generateBillBody(char item[30],int qty,float price)
{
    printf("%s\t\t",item);
    printf("%d\t\t",qty);
    printf("%.2f\t\t",qty*price);
    printf("\n");
}

void generateBillFooter(float total)
{
    printf("\n");
    float dis=0.1*total;
    float netTotal=total-dis;
    float cgst=0.09*netTotal,grandTotal=netTotal+2*cgst; //netTotal+cgst+sgst
    printf("-------------------------------------------------------\n");
    printf("SUB TOTAL\t\t\t%.2f",total);
    printf("\nDISCOUNT @10%s\t\t\t%.2f","%",dis);
    printf("\n\t\t\t\t----------");
    printf("\nNET TOTAL\t\t\t%.2f",netTotal);
    printf("\nCGST @9%s\t\t\t%.2f","%",cgst);
    printf("\nSGST @9%s\t\t\t%.2f","%",cgst);
    printf("\n------------------------------------------------------");
    printf("\nGRAND TOTAL\t\t\t%.2f",grandTotal);
    printf("\n------------------------------------------------------\n");
}
int main()
{
    //dashboard
    float total;
    int opt,n,invoiceFound=0;
    struct orders ord;
    struct orders order;
    char saveBill = 'y';
    char name[50];
    FILE *fp;
    printf("\t================RESTAURANT=================");
    printf("\n\nPLEASE SELECT YOUR PREFERED OPTION");
    printf("\n1.GENERATE INVOICE");
    printf("\n2.SHOW ALL INVOICES");
    printf("\n3.SEARCH INVOICE");
    printf("\n4.EXIT");

    printf("\n\nYour choice:\t");
    scanf("%d",&opt);
    fgetc(stdin);
    //printf("\n YOU HAVE CHOSEN %d",opt);
    switch(opt)
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
            scanf("%d",&ord.itm[i].qty);
            printf(" please enter the unit price:\t");
            scanf("%f",&ord.itm[i].price);
            total+= ord.itm[i].qty* ord.itm[i].price;
         }
         generateBillHeader(ord.customer,ord.date);
         for(int i=0;i<ord.numofItems;i++)
         {
             generateBillBody(ord.itm[i].item,ord.itm[i].qty,ord.itm[i].price);
         }
         generateBillFooter(total);
         printf("\n Do you want to save the invoice [y/n]:\t");
         scanf("%s",&saveBill);
         if(saveBill == 'y')
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
            generateBillHeader(order.customer,order.date);
            for(int i=0;i<order.numofItems;i++)
            {
                generateBillBody(order.itm[i].item,order.itm[i].qty,order.itm[i].price);
                tot+=order.itm[i].qty * order.itm[i].price;
            }
            generateBillFooter(tot);
        }
        fclose(fp);
        break;

    case 3:
        printf("\nEnter the name of the customer:\t");
        fgets(name,50,stdin);
        name[strlen(name)-1]=0;
        system("clear");
        fp=fopen("RestaurantBill.dat","r");
        printf("\t********Invoice of %s********\n",name);
        while (fread(&order,sizeof(struct orders),1,fp))
        {
            float tot=0;
            if(!strcmp(order.customer,name))
            {
                generateBillHeader(order.customer,order.date);
            for(int i=0;i<order.numofItems;i++)
            {
                generateBillBody(order.itm[i].item,order.itm[i].qty,order.itm[i].price);
                tot+=order.itm[i].qty * order.itm[i].price;
            }
            generateBillFooter(tot);
            invoiceFound=1;
            }

        }
        if(!invoiceFound)
        {
          printf("sorry the invoice for %s dose not exists",name);
        }
        fclose(fp);
        break;
    case 4:
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
