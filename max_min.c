#include<stdio.h>

int main(){

    int a, b, c;
    int max,min;

    scanf("%d %d %d", &a, &b, &c);
    // printf("%d %d %d", a, b, c);

    if((a>b && a>c )){
        max=a;
        printf("%d",max);
    }
    else if(b>a && b>c){
        max=b;
        printf("%d",max);
    }

    else if (c>a && c>b){
        max=c;
        printf("%d",max);
    }
     
   

    

    
     return 0;
}