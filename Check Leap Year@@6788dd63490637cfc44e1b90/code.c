#include <stdio.h>
int main(){
    int year;
    scanf("%d",&year);
    if(year%400 == 0){
        printf("Leap Year\n");
        return 0;
    }
    else;
    printf("Not a Year\n");
    return 0;
}