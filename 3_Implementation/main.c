#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//functions to generate bills
void generateBillHeader(char name[50], char date[30])
{
    printf("\n\n");
    printf("\t      RESTAURANT");
    printf("\n\t ----------------------");
    printf("\n DATE:%s",date);
    printf("\n INVOICE TO: %s",name);
    printf("\n");
    printf("-------------------------------\n");
    printf("ITEMS\t\t");
    printf("QUANTITY\t\t");
    printf("TOTAL\t\t");
    printf("\n-------------------------------");
    printf("\n\n");
}
void generateBillBody(char item[30],int qty,float price)
{
    printf("%S\t\t",item);
    printf("%d\t\t",qty);
    printf("%.2f\t\t",qty*price);
    printf("\n");
}
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
    int num_of_items;
    struct items itm[50];
};
void generateBillFooter(float total)
{
    printf("\n");
    float dis=0.1*total;
    float netTotal=total-dis;
    float cgst=0.09*netTotal,grandTotal=netTotal+2*cgst; //netTotal+cgst+sgst
    printf("-----------------------------------------\n");
    printf("SUB TOTAL\t\t\t%.2f",total);
    printf("\nDISCOUNT @10%s\t\t\t%.2f","%",dis);
    printf("\n\t\t\t\t----------");
    printf("\nNET TOTAL\t\t\t%.2f",netTotal);
    printf("\nCGST @9%s\t\t\t%.2f","%",cgst);
    printf("\nSGST @9%s\t\t\t%.2f","%",cgst);
    printf("\n-----------------------------------");
    printf("\nGRAND TOTAL\t\t\t%.2f",grandTotal);
    printf("\n-----------------------------------\n");
}
int main()
{
    //dashboard
    int opt;
    struct orders ord;
    printf("\t================REsTAURANT=================");
    printf("\n1.GENERATE INVOICE");
    printf("\n2.SHOW ALL INVOICES");
    printf("\n3.SEARCH INVOICE");
    printf("\n4.EXIT");
    printf("\n\n");
    printf("\n\nPLEASE SELECT YOUR PREFERED OPTION");
    scanf("%d",&opt);
    fgetc(stdin);
    //printf("\n YOU HAVE CHOSEN %d",opt);
    switch(opt)
    {
    case 1:
        printf("\n please enter the name of the customer\t");
        fgets()

    }
    printf("\n\n");
    return 0;
}
