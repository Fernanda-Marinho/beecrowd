#include<stdlib.h>
#include<stdio.h>

int mdc(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(){
    int casos, jog1, jog2, result;
    scanf("%d",&casos); 
    while (casos != 0){
        scanf("%d %d",&jog1,&jog2); 
        result = mdc(jog1, jog2); 
        casos = casos - 1;
        printf("%d\n",result); 
    }
    return 0;
}
