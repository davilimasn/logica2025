#include <stdio.h>
#include <math.h>

int main() {
    double raio, area;

    scanf("%lf", &raio);

    area = 3.14159 * raio * raio;

    printf("A=%0.4lf\n", area);

    return 0;
}
