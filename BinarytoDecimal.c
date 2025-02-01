#include <stdio.h>

int binaryBit(int num){
    while(num!=0){
        int bit = num%2;
        printf("%d",bit);
        num = num/2;
        //printf("%d",num);
    }
    return 0;
    
}

int main() {
    int num=13;
    binaryBit(num);
    return 0;
}