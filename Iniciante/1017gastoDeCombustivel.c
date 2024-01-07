#include <stdio.h>

int main(){
    int horas, velocidade;
    float dist;
    scanf("%d\n%d",&horas,&velocidade);
    dist = velocidade*horas; 
    printf("%.3f\n",dist/12);
    return 0; 
}