#include<stdio.h>

int main(){

    char x;
    scanf("%c", &x);

    if(islower(x)){
      printf("%c",toupper(x));
    }
    else if(isupper(x)){
      printf("%c",tolower(x));
    }

    

     return 0;
}