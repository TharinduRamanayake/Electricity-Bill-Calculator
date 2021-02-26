/*AA1846*/

#include<stdio.h>


int main(int argc, char **argv)
{
int preunit, curunit, unit, temp;
float amount;

printf("Enter current reading: ");
scanf("%d", &curunit);

printf("Enter previous reading: ");
scanf("%d", &preunit);

unit = curunit-preunit; //for get used unites

if(unit <= 50)
	amount = unit*3;

if(unit > 50 && unit <= 100){
	temp = unit-50;
	amount  = temp*6 + 150;
}

if(unit > 100 && unit <= 200){
	temp = unit-100;
	amount  = temp*10 + 450;
}

if(unit > 200)
	amount  = unit*11;

printf("The number of units used: %d\n \nYou have to Pay Rs.%.2f\n" , unit,amount);

return 0;
}
