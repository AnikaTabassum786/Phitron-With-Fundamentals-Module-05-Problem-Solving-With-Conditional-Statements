#include<stdio.h>

int main(){

    char x;
    scanf("%c", &x);

    // if(islower(x)){
    //   printf("%c",toupper(x));
    // }
    // else if(isupper(x)){
    //   printf("%c",tolower(x));
    // }
    

    if(x>='a' && x<='z'){
      x = x-32;
       printf("%c",x);
    }
    else{
      x = x+32;
       printf("%c",x);
    }

    

     return 0;
}