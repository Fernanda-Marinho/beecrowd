#include <stdio.h>

int main(){

    char nome; 
    double salario, totalVendas, bonus;
    scanf("%s\n%lf\n%lf",&nome,&salario,&totalVendas);
    bonus = salario + totalVendas*0.15;
    printf("TOTAL = R$ %.2lf\n",bonus);
    return 0;
}