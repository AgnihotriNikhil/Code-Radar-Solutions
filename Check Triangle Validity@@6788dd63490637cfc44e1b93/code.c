#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%a %b %c", &a,&b,&c );
    if( a+b>c && b+c>a && c+a>b){
        printf("Valid\n");
        return 0;
    }
    else;
    printf("Invalid\n");
    return 0;

}