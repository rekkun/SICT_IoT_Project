#include <stdio.h>
#include "HaMinhNghia.c"
#include "nguyendangphong.c"
int main() {
    float a, b, c;

    a = 2.0; b = 4.0; c = 5.0;

    printf(add(a, b));
    printf(nhanSoThuc(a,b));
    return 0;
}
