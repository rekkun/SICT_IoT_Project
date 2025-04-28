#include <stdio.h>
using namespace std;

int add(int x, int y) {
    return x+y;
}

int main() {
    int a, b, c;
    a = 2; b = 4; c = 5;
    int sum = add(a, b);

    cout<<sum<<"\n";

    return 0;
}
