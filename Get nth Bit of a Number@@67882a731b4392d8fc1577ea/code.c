#include  <stdio.h>
int main(){
    int num,n;
    scanf("%d".&num);
    scanf("%d",&n);
    int bit_value = (num >> n) & 1;
    printf("%d\n",bit_value);
    return 0;
}