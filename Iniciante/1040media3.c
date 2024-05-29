#include<stdlib.h>
#include<stdio.h>

void aprovado(){
    printf("Aluno aprovado.\n");
}

void reprovado(){
    printf("Aluno reprovado.\n");
}

int main(){

    float n1, n2, n3, n4, media, mediaExame, mediaFinal;
    scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
    media = ((n1*2)+(n2*3)+(n3*4)+n4)/10;
    printf("Media: %.1f\n",media);
    if (media >= 7.0){
        aprovado(); 
    }
    else if (media < 5.0){
        reprovado(); 
    }
    else{
        printf("Aluno em exame.\n");
        scanf("%f",&mediaExame);
        printf("Nota do exame: %.1f\n",mediaExame); 
        mediaFinal = (media+mediaExame)/2;
        if (mediaFinal >= 5.0){
            aprovado(); 
        }
        else{
            reprovado(); 
        }
        printf("Media final: %.1f\n",mediaFinal);

    } 
    return 0; 
}