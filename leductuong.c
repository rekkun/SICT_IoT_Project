#include <stdio.h>

extern int a, b, c; 

void tinh_toan_nguyen() {
    printf("Hieu: %d\n", a - b - c);
}