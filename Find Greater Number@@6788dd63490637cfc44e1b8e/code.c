#include <stdio.h>
int main(){
    int num1,num2;
    scanf("%d ,%d",&num1,&num2);
    if(num1>num2){
        printf("\n",num1);
        return 0;
    }
    if(num1<num2){
        printf("\n",num2);
        return 0;
    }
    else;
    printf("Invalid\n");
    return 0;
}