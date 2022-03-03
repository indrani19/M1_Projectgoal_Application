#include"code.h"
//functions to generate bills


void Billheader(char name[50], char date[30])
{
    printf("\n\n");
    printf("\t              RESTAURANT");
    printf("\n\t*******************************************");
    printf("\n DATE:%s",date);
    printf("\n INVOICE TO: %s",name);
    printf("\n");
    printf("*********************************************\n");
    printf("ITEMS\t\t");
    printf("QUANTITY\t\t");
    printf("TOTAL\t\t");
    printf("\n*******************************************");
    printf("\n\n");

}
void Billbody(char item[30],int quantity,float price)
{
    printf("%s\t\t",item);
    printf("%d\t\t",quantity);
    printf("%.2f\t\t",quantity*price);
    printf("\n");
}

void Billfooter(float total)
{
    printf("\n");
    float discount=0.1*total;
    float netTotal=total-discount;
    float cgst=0.09*netTotal,grandTotal=netTotal+2*cgst; //netTotal+cgst+sgst
    printf("***************************************************\n");
    printf("SUB TOTAL\t\t\t%.2f",total);
    printf("\nDISCOUNT @10%s\t\t\t%.2f","%",discount);
    printf("\n\t\t\t\t***************");
    printf("\nNET TOTAL\t\t\t%.2f",netTotal);
    printf("\nCGST @9%s\t\t\t%.2f","%",cgst);
    printf("\nSGST @9%s\t\t\t%.2f","%",cgst);
    printf("\n**************************************************");
    printf("\nGRAND TOTAL\t\t\t%.2f",grandTotal);
    printf("\n***************************************************\n");
}
