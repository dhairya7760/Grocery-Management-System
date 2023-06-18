#include"stdio.h"
#include"stdlib.h"
#include"conio.h"
void main()
{
int age,q1,q2,q3,q4,q5,q,i;
char j,contact[11],*festival[1]={"DIWALI"};
double d,rate[5]={20.25,12.75,25.20,780.50,690.80},d1=0.0,d2=0.0,d3=0.0,d4=0.0,d5=0.0,bill=0.0,finalbill;
char fname[15],surname[15],address[45],*products[5]={"BREAD","EGGS","MILK","REFINED OIL","DRYFRUITS"};
char *fest[5]={"UTTTARAYAN","HOLI","NAVRATRI","DIWALI","CHRISTMAS"};

    printf("**********************************************************************");
	printf("\n\t\t\tHELLO !!\n\t\tWELCOME TO OUR GROCERY STORE !!");
    printf("\n**********************************************************************");
	printf("\n\nENTER YOUR NAME : ");
	scanf("%s %s",fname,surname);
	printf("\nENTER YOUR AGE : ");
	scanf("%d",&age);
	printf("\nENTER YOUR CONTACT NUMBER : +91 ");
	scanf("%s",contact);
	printf("\nENTER YOUR ADDRESS : ");
	scanf("%s",address);
	printf("\nPRODUCTS WE OFFER :\n");
	printf("\n*********|*************|*********");
	printf("\n| SR.NO. |   PRODUCTS  |  RATE  |");i=0;
	printf("\n|********|*************|********|");
	printf("\n|   %d    |    %s    |  %5.2lf |",i+1,products[0],rate[0]);
	printf("\n|   %d    |     %s    |  %5.2lf |",i+2,products[1],rate[1]);
	printf("\n|   %d    |     %s    |  %5.2lf |",i+3,products[2],rate[2]);
	printf("\n|   %d    | %s | %5.2lf |",i+4,products[3],rate[3]);
	printf("\n|   %d    |  %s  | %5.2lf |",i+5,products[4],rate[4]);
	printf("\n*********************************");

	printf("\n\n");
	printf("YOUR PURCHASE BEGINS NOW.");
	printf("\n\nENTER THE NUMBER OF QUANTITIES FOR THE PRODUCTS IN THE ABOVE LIST ONE BY ONE.\n\n");
	printf("\nENTER THE QUANTITIES:");
	printf("\n\n");
	printf("\t%s(pack of 10)      - ",products[0]);scanf(" %d",&q1);
	printf("\n\t%s(pack of 4)        - ",products[1]);scanf(" %d",&q2);
	printf("\n\t%s(per litre)        - ",products[2]);scanf(" %d",&q3);
	printf("\n\t%s(per litre) - ",products[3]);scanf("%d",&q4);
	printf("\n\t%s(per kg)      - ",products[4]);scanf("%d",&q5);

	q=q1+q2+q3+q4+q5;i=0;

	printf("\n*********|*************|********|***********");
	printf("\n| SR.NO. |  PRODUCTS   |  RATE  | QUANTITY |");
	printf("\n|********|*************|********|**********|");
	printf("\n|  %d     |   %s     |  %3.2lf |   %3d    |",i+1,products[0],rate[0],q1);
	printf("\n|  %d     |    %s     |  %3.2lf |   %3d    |",i+2,products[1],rate[1],q2);
	printf("\n|  %d     |    %s     |  %3.2lf |   %3d    |",i+3,products[2],rate[2],q3);
	printf("\n|  %d     | %s | %3.2lf |   %3d    |",i+4,products[3],rate[3],q4);
	printf("\n|  %d     |  %s  | %3.2lf |   %3d    |",i+5,products[4],rate[4],q5);
	printf("\n|******************************************|");
	printf("\n|TOTAL PRODUCTS BOUGHT          = %5d    |",q);
	printf("\n********************************************\n");

	bill=bill+(rate[0]*q1)+(rate[1]*q2)+(rate[2]*q3)+(rate[3]*q4)+(rate[4]*q5);

	printf("\nPLEASE WAIT !\nWHILE THE TOTAL BILL IS BEING PROCESSED.\n");
	printf("\n\n");
	printf("***********************************");
	printf("\n|  TOTAL BILL = Rs. %9.2lf     |",bill);
	printf("\n***********************************");
	printf("\n\n");
	printf("\nDISCOUNTS WE OFFER:\n");
	printf("\n (1) 4 PERCENT DISCOUNT ON PURCHASE OF MORE THAN 10 LITRES OF REFINED OIL.");
	printf("\n (2) 2 PERCENT DISCOUNT ON DRYFRUITS.");
	printf("\n (3) 5 PERCENT FESTIVE DISCOUNT.");
	printf("\n (4) 3 PERCENT DISCOUNT ON BILLS OF MORE THAN Rs.1000.");
	printf("\n (5) 10 PERCENT DISCOUNT FOR SENIOR CITIZEN.");
	printf("\n\n");
	printf("**********************************************************************");
	printf("\nDISCOUNTS YOU'VE AVAILED:");
	printf("\n");

if(q4>=10)
{
	printf("\n\n (1) YOU HAVE AVAILED THE DISCOUNT ON THE PURCHASE OF REFINED OIL!");
	d1=d1+(0.04*rate[3]*q4);
	printf("\n     YOUR DISCOUNT ON THE REFINED OIL IS Rs. %5.2lf",d1);
}
else
{
	printf("\n\n (1) SORRY! YOU HAVEN'T AVAILED THIS DISCOUNT.");
}
printf("\n\n");
printf("**********************************************************************");
if(q5>=1)
{
	printf("\n\n (2) YOU HAVE AVAILED THE DISCOUNT ON THE PURCHASE OF DRYFRUITS!");
	d2=d2+(0.02*rate[4]*q5);
	printf("\n     YOUR DISCOUNT ON THE DRYFRUITS IS Rs. %5.2lf",d2);
}
else
{
	printf("\n\n (2) SORRY! YOU HAVEN'T AVAILED THIS DISCOUNT.");
}
printf("\n\n");
printf("**********************************************************************");
bill=bill-d1-d2;

for(i=0;i<=4;i++)
{
    if(*festival[0]==*fest[i])
    {
        printf("\n\n (3) YOU HAVE AVAILED THE FESTIVE DISCOUNT OF 5 percent.");
        d3=0.05*bill;
        printf("\n       YOUR FESTIVE DISCOUNT IS Rs. %5.2lf",d3);
    }
}

bill=bill-d3;
printf("\n\n");
printf("**********************************************************************");

if(bill>=1000)
{
	printf("\n\n (4) YOU HAVE AVAILED AN ADDITIONAL 3 percent DISCOUNT.");
	d4=0.03*bill;
	printf("\n      YOUR DISCOUNT IS Rs. %5.2lf",d4);
	bill=bill-d4;
}
else
{
	printf("\n\n (4) SORRY! YOU HAVEN'T AVAILED THIS DISCOUNT.");
}
printf("\n\n");
printf("**********************************************************************");
if(age>=60)
{
	printf("\n\n (5) YOU HAVE AVAILED AN ADDITIONAL 10 percent DISCOUNT.");
	d5=0.1*bill;
	printf("\n     YOUR DISCOUNT IS Rs. %5.2lf",d5);
	bill=bill-d5;
}
else
{
	printf("\n\n (5) SORRY! YOU ARE NOT ELIGIBLE FOR THIS DISCOUNT.");
}
printf("\n\n");
printf("**********************************************************************");
	d=d1+d2+d3+d4+d5;
	finalbill=bill;
	printf("\n\n");
	printf("**************************************************************");
	printf("\n| YOUR TOTAL DISCOUNT AMOUNT IS = Rs. %7.2lf                |",d);
	printf("\n**************************************************************");
	printf("\n| YOUR FINAL BILL AFTER ALL THE DISCOUNTS IS = Rs. %9.2lf |",finalbill);
	printf("\n**************************************************************");
	printf("\n\n");
	printf("\n\t THANK YOU FOR THE VISIT !!");
	printf("\n\t PLEASE VISIT AGAIN !!");
	printf("\n\n\n**************************************************************\n\n\n");

	printf("***********************************************************\n");
    printf("|    CUSTOMER     |  CONTACT   |      PRODUCTS      | AGE |\n");
    printf("|      NAME       |  NUMBER    |       BOUGHT       |     |\n");
    printf("|*****************|************|********************|*****|\n");
    printf("|                 |            |    %s    * %3d  |     |\n",products[0],q1);
    printf("| %-15s |            |     %s    * %3d  |     |\n",fname,products[1],q2);
    printf("|                 | %-10s |    %s     * %3d  | %3d |\n",contact,products[2],q3,age);
    printf("| %-15s |            | %s * %3d  |     |\n",surname,products[3],q4);
    printf("|                 |            |  %s  * %3d  |     |\n",products[4],q5);
    printf("|*********************************************************|\n");
    printf("| ADDRESS : %-45s |\n",address);
    printf("|*********************************************************|\n");
    printf("| QUANTITY |  FESTIVAL  |   DISCOUNT    |   TOTAL BILL    |\n");
    printf("|          |   SEASON   |               |   TO BE PAID    |\n");
    printf("|**********|************|***************|*****************|\n");
    printf("|   %4d   | %-9s  |  Rs. %7.2lf  |  Rs. %9.2lf  |\n",q,festival[0],d,finalbill);
    printf("***********************************************************\n");

}
