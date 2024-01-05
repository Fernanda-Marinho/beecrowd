#include <stdio.h>
#include <math.h>

int main(){
    int raioCacador,xCacador,yCacador,raioFlor,xFlor,yFlor;
    double distCentros; 

    while(scanf("%d %d %d %d %d %d",&raioCacador,&xCacador,&yCacador,&raioFlor,&xFlor,&yFlor) != EOF){
        distCentros = sqrt(pow(xFlor-xCacador,2) + pow(yFlor-yCacador,2));
        if(raioCacador >= (distCentros+raioFlor)){    
            printf("RICO\n");
        }
        else{
            printf("MORTO\n");
        } 
    }

    return 0; 
}