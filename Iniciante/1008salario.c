#include <stdio.h>

int main(){

    int numeroFuncionario, horasTrabalhadas;
    float recebePorHora, salario;
    scanf("%d\n%d\n%f",&numeroFuncionario,&horasTrabalhadas,&recebePorHora);
    salario = horasTrabalhadas*recebePorHora; 
    printf("NUMBER = %d\nSALARY = U$ %.2f\n",numeroFuncionario,salario);
    return 0;
}