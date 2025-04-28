#include <stdio.h>
#include "HaMinhNghia.c"
#include "nguyendangphong.c"
int main() {
    float a, b, c;
    a = 2; b = 4; c = 5;
    printf(add(a, b));
    printf(nhanSoThuc(a,b));
    return 0;
}
