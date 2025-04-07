#include  <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c ){
        printf("Equilateral");
        return 0;
    }
    if(a==b || b==c || c==a){
        printf("Isosceles");
        return 0;
    }
    else;
    printf("Scalene");
    return 0;
    
    }

 
