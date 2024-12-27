#include <stdio.h>

int main() {
    int number1, number2, number3;
    printf("Nhap vao so thu nhat: ");
    scanf("%d", &number1);
    printf("Nhap vao so thu hai: ");
    scanf("%d", &number2);
    printf("Nhap vao so thu ba: ");
    scanf("%d", &number3);
    if ((number3 > number1 && number3 < number2) || (number3 > number2 && number3 < number1)) {
        printf("So thu ba (%d) nam trong khoang giua so thu nhat (%d) va so thu hai (%d).\n", number3, number1, number2);
    } else {
        printf("So thu ba (%d) khong nam trong khoang giua so thu nhat (%d) va so thu hai (%d).\n", number3, number1, number2);
    }

    return 0;
}

