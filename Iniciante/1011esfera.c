#include <stdio.h>

int main(){

    const double PI = 3.14159; 
    double area, raio; 
    scanf("%lf",&raio); 
    area = ((4.0/3.0)*PI)*(raio*raio*raio);
    printf("VOLUME = %.3lf\n",area);
    return 0; 
}