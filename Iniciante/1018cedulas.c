#include <stdio.h>

int main(){

    int valor, nota100 = 0, nota50 = 0, nota20 = 0, nota10 = 0, nota5 = 0, nota2 = 0, nota1 = 0; 
    scanf("%d",&valor);
    printf("%d\n",valor);
    while(valor >= 100){
        nota100++;
        valor-=100; 
    }
    while(valor >= 50){
        nota50++;
        valor-=50; 
    }
    while(valor >= 20){
        nota20++;
        valor-=20; 
    }
    while(valor >= 10){
        nota10++;
        valor-=10; 
    }
    while(valor >= 5){
        nota5++;
        valor-=5; 
    }
    while(valor >= 2){
        nota2++;
        valor-=2; 
    }
    while(valor >= 1){
        nota1++;
        valor--; 
    }

    printf("%d nota(s) de R$ 100,00\n",nota100);
    printf("%d nota(s) de R$ 50,00\n",nota50);
    printf("%d nota(s) de R$ 20,00\n",nota20);
    printf("%d nota(s) de R$ 10,00\n",nota10);
    printf("%d nota(s) de R$ 5,00\n",nota5);
    printf("%d nota(s) de R$ 2,00\n",nota2);
    printf("%d nota(s) de R$ 1,00\n",nota1);

    return 0;
}