/**************************************EMI CALCULATOR***********************************/
#include <stdio.h>
#include <math.h>
struct EMI
{
  float principal, rate, time, totalemi;
  char firstname[50],lastname[50],address[50],product[50],month[50];
  }e; 
int main()
{
  printf("**ENTER THE DETAILS FOR EMI**");
  printf("\nFIRSTNAME:");
  scanf("%s",&e.firstname);
  printf("\nLASTNAME:");
  scanf("%s",&e.lastname);
  printf("\nADDRESS:");
  scanf("%s",&e.address);
  printf("\nPRODUCT:");
  scanf("%s",&e.product);
  printf("\nENTER PRINCIPAL AMOUNT:");
  scanf("\n%f",&e.principal);
  printf("ENTER THE RATE OF INTEREST:");
  scanf("\n%f",&e.rate);
  printf("ENTER THE TIME:");
  scanf("\n%f",&e.time);
  printf("**RECIEPT**");
  printf("\nFIRSTNAME:%s\nLASTNAME:%s",e.firstname,e.lastname);
  printf("\nADDRESS:%s",e.address);
  e.rate=e.rate/(12*100);
  e.time=e.time*12;
  e.totalemi= (e.principal*e.rate*pow(1+e.rate,e.time))/(pow(1+e.rate,e.time)-1);
  printf("\n**your Monthly EMI is:**");
  printf("\n      %.2f  ",e.totalemi);
  return (0);
}
