#include <stdio.h>
#include <stdlib.h>

int main() {
float A1, B1, C1, BMax;
int n;
A1 = 2.8;
B1 = 0.2;
C1 = 0;
n = 0;
printf("%d %f %f %f\n", n, A1, B1, C1);
n = 1;
BMax = 0;

while (n <= 9) {
    C1 = C1 + 0.4 * B1;
    B1 = 0.6 * B1 + 0.1 * A1;
    A1 = A1 * 0.9;



printf("%d %f %f %f\n", n, A1, B1, C1);
n++;

if (BMax < B1) {
BMax = B1;


}
}
printf("%f\n", BMax);
}

