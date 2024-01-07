#include <stdio.h>

int main(){
    int idade, ano = 0, mes = 0, dias = 0;
    scanf("%d",&idade);
    while (idade >= 365){
        ano++;
        idade -= 365;
    }
    while (idade >= 30){
        mes++;
        idade -= 30;
    }
    while(idade >= 1){
        dias++;
        idade--;
    }
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",ano,mes,dias);
    
    
    return 0;
}