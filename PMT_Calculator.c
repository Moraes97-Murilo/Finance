#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float pv, i, n, pmt;
    printf("Digite o saldo devedor: ");
    scanf("%f", &pv);
    printf("Digite o numero de parcelas: ");
    scanf("%f", &n);
    printf("Digite a taxa de juros: ");
    scanf("%f", &i);
    i = i /100 ;
    pmt = pv*(((pow((1+i),n))*i)/((pow((1+i),n))-1));
    
    printf("O valor das parcelas ficou %f reais. \n", pmt);
system("pause");
}
