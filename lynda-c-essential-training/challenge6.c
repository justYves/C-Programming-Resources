#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PAYMENT_PER_YEAR 12


void askUser(double*, int*,double*);
double totalPayback (double,int,double);

int main(int argc, char *argv[]){
  double amount, rate,total;
  int year;
  askUser(&amount,&year,&rate);
  // printf("received %.2lf, %d, %.2lf",amount,year,rate);
  total = totalPayback(amount,year,rate);

  printf("Monthly Payment (for %d months): $%.2lf \n", year *  PAYMENT_PER_YEAR,total);
  printf("Total PayBack: $%.2lf \n",total*year*PAYMENT_PER_YEAR );
}

void askUser(double *amount, int *year,double *rate){
    printf("Please enter the loan amount:");
  scanf("%lf",amount);
  printf("Please enter the number of years:");
  scanf("%d",year);
  printf("Please enter the interest rate:");
    scanf("%lf",rate);
}

double totalPayback(double amount,int year, double rate){
  double i = (rate / 100.0) / 12.0;
  int n = year * PAYMENT_PER_YEAR;
  // printf("months %d\n",n);
  // printf("interest %lf\n",i);
  double discount = (pow(1+i,n)-1 ) / (i * pow((1+i),n));
  // printf("discount %lf\n",discount);
  return (amount / discount);
};









// loan payment = Amount / discount;
// n = number of payment per year = 12
// i = annual rate /100 /12
//discount =  [(1+i) ^ n ] - 1