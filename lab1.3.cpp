#include <stdio.h>

int main() {
    float p1, p2, p3;
    float totalA, totalB, totalC;

    printf("Enter price 1: ");
    scanf("%f", &p1);   
    totalA = (p1 * 0.95) * 1.07;
    printf("Promotion A (5%% + VAT 7%%): %.2f\n", totalA);

    printf("Enter price 2: ");
    scanf("%f", &p2);
    totalB = ((p1 + p2) * 0.85) * 1.07;
    printf("Promotion B (15%% + VAT 7%%): %.2f\n", totalB);

    printf("Enter price 3: ");
    scanf("%f", &p3);
    totalC = ((p1 + p2 + p3) * 0.70) * 1.07;
    printf("Promotion C (30%% + VAT 7%%): %.2f\n", totalC);

    return 0;
}
