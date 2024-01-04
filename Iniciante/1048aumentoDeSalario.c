#include<stdlib.h>
#include<stdio.h>

int main()
{
    float salario; 

    scanf("%f",&salario); 
    if (salario > 0 && salario <= 400.00)
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n",((15.0/100.0)*salario)+salario, ((15.0/100.0)*salario));
    else if (salario > 400.00 && salario <= 800.00)
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n",((12.0/100.0)*salario)+salario, ((12.0/100.0)*salario));
    else if (salario > 800.00 && salario <= 1200.00)
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n",((10.0/100.0)*salario)+salario, ((10.0/100.0)*salario));
    else if (salario > 1200.00 && salario <= 2000.00)
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n",((7.0/100.0)*salario)+salario, ((7.0/100.0)*salario));
    else
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n",((4.0/100.0)*salario)+salario, ((4.0/100.0)*salario));
    return 0;
}
