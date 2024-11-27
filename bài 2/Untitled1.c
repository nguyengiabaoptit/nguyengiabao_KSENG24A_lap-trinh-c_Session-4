#include <stdio.h>

int main() {
	int a;
	printf("moi ban nhap so vao:");
	scanf("%d", &a);
	if(a % 2 == 0) {
	printf("day la so chan %d \n", a);
	}else{
	printf("day la so le %d \n", a);
	}
	
	return 0;
}
