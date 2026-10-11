// Print a single line contains "IS DIGIT" if X is digit otherwise, print "ALPHA" in the first line followed by a new line that contains "IS CAPITAL" if X is a capital letter and "IS SMALL" if X is a small letter.

#include <stdio.h>

int main()
{

    char x; 
    scanf("%c", &x);


    if((x >= 'a' && x<='z') || (x >= 'A' && x<='Z')){
     printf("ALPHA\n");
      if(islower(x)){
      printf("IS SMALL");
    }
    else{
         printf("IS CAPITAL");
    }
    }
    else if(x >='0' && x<='9'){
    printf("IS DIGIT");
    }

        return 0;
}