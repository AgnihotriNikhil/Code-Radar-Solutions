#include <stdio.h>
int main(){
int num1, num2;
scanf("%d %d", &num1 , &num2);
if( num1 == 0 && num2 != 0 ){
    printf("True\n");
    return 0;
}
else{
    printf("False\n");
    return 0;
}

}