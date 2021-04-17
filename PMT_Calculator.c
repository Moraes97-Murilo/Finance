#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float pv, i, n, pmt;
    printf("Enter the present value(USD): ");
    scanf("%f", &pv);
    printf("Enter the number of installments: ");
    scanf("%f", &n);
    printf("Enter interest rate: ");
    scanf("%f", &i);
    i = i /100 ;
    pmt = pv*(((pow((1+i),n))*i)/((pow((1+i),n))-1));
    
    printf("The installment value is %f USD. \n", pmt);
system("pause");
}
