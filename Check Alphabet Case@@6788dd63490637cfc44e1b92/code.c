#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if( ch >= "A" && ch <= "Z"){
        printf("Uppercase");
        return 0;
    }
    if(ch >= "a" && ch <= "b"){
        printf("Lowercase");
        return 0;
    }
    else;
    printf("Error!");
    return 0:
}