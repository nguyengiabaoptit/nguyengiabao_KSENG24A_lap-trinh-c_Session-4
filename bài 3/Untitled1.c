#include <stdio.h>

int main() {
	int number;
	printf("moi ban nhap so:");
	scanf("%d", &number);
	if ("number % 3 == 0 && number % 5 == 0") {
    printf("so chia het cho ca 3 va 5 la");
	}else if (number % 3 == 0) {
	printf("so %d chia het cho 3 nhung khong chia het duoc cho 5.\n, number");
	}else{
	printf("so %d khong chia het duoc cho 3.\n", number);
	}
	
	return 0;
}
