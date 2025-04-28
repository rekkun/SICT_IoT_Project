#include <stdio.h>

extern int a, b, c; 

void tinh_toan_nguyen() {
    printf("Tong: %d\n", a + b + c);
    printf("Hieu: %d\n", a - b - c);
    printf("Tich: %d\n", a * b * c);
}