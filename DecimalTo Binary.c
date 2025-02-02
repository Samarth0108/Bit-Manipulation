#include <stdio.h>

int binaryToDecimal(int n) {
    int decimal = 0;
    int base = 1;
    int temp = n;

    while (temp) {
        int lastDigit = temp % 10;
        temp = temp / 10;
        decimal = decimal + lastDigit * base;
        base = base * 2;
    }
    return decimal;
}

int main(){
    int n = 1101; 
    int decimal = binaryToDecimal(n);
    printf("%d",decimal);
    return 0;
}