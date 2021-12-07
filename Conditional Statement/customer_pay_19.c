/* Write a program in C to calculate and print the Electricity bill of a given customer. The customer id., name and unit consumed by the user should be taken from the keyboard and display the total amount to pay to the customer. The charge are as follow :

Unit	Charge/unit
upto 199	@1.20
200 and above but less than 400	@1.50
400 and above but less than 600	@1.80
600 and above	@2.0 
If bill exceeds Rs. 400 then a surcharge of 15% will be charged and the minimum bill should be of Rs. 100/-

Test Data :
1001
James
800
Expected Output :
Customer IDNO :1001
Customer Name :James
unit Consumed :800
Amount Charges @Rs. 2.00 per unit : 1600.00
Surchage Amount : 240.00
Net Amount Paid By the Customer : 1840.00 */

#include <stdio.h>
int main()
{
    int unit, cus;
    float chg, surchg = 0, chgamt, netamt;
    char str[50];
    printf("Customer IDNO: ");
    scanf("%d",&cus);

    printf("Customer Name: ");
    scanf("%s", str);

    printf("unit Consumed: ");
    scanf("%d", &unit);
    
    if(unit < 199)
        chg = 1.20;
    
    else if(unit >= 200 && unit < 400)
        chg = 1.50;

    else if(unit >=   400 && unit < 600)
        chg = 1.8;

    else 
        chg = 2.00;

    chgamt = unit * chg;
    if(chgamt > 300)
        surchg = chgamt * (15 / 100.0);
    
    netamt = chgamt + surchg;
    if(netamt < 100)
        netamt = 100;

    printf("\n\nElectricity Bill\n");
    printf("Customer IDNO: %d\n",cus);
    printf("Customer Name: %s\n", str);
    printf("Amount Charges @Rs. %4.2f per unit: %4.2f\n",chg, chgamt);
    printf("Surcharge Amount: %4.2f\n", surchg);
    printf("Net Amount Paid By the Customer: %4.2f\n", netamt);

}