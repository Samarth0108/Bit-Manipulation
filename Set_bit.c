#include<stdio.h>

int setBit(int n, int pos){
    return (n&(1<<pos))!=0;
}

int main(){
    int n, pos;
    printf("Enter a binary number:");
    scanf("%d",&n);
    printf("Enter the bit position to check:");
    scanf("%d",&pos);
    if (isBitSet(n, pos)) {
        printf("The bit at position %d is set (1).\n", pos);
    } else {
        printf("The bit at position %d is not set (0).\n", pos);
    }
    return 0;
}