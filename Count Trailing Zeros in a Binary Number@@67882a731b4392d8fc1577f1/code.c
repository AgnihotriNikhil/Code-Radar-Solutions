#include <stdio.h>
int countLeadingZeros(int num){
    int countt = 0;
    for (int i = 31; i>=0;i--){
        if((num >> i) & 1){
            break;
        }
        count++;
    }
    return count;
}
int main(){
    int num;
    scanf("%d",&num);
    printf("%d\n",countLeadingZeros(num));
    return 0;
}