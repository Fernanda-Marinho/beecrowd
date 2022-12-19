#include<stdio.h>

int main(){
    double a,b; //a (3.5) e b (7.5)
    scanf("%lf\n%lf",&a,&b); 
    printf("MEDIA = %.5lf\n",((a*3.5)+(b*7.5))/11);
    return 0;
}