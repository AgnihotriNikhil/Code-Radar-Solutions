#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if( ch >= "A" && ch <= "Z"){
        printf("Uppercase\n");
        return 0;
    }
    if(ch >= "a" && ch <= "z"){
        printf("Lowercase\n");
        return 0;
    }
    else;
    printf("Error!\n");
    return 0:
}