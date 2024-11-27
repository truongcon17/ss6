#include <stdio.h>

int main() {
    int number[5];  
    int tong = 0;  
    int i;

    printf("Nhap cac gia tri nguyen :\n");
    for (i = 0; i < 5; i++) {
        printf("So thu %d: ", i + 1);
        scanf("%d", &number[i]);
    }


    for (i = 0; i < 5; i++) {
        if (number[i] % 2 != 0) {  
            tong += number[i];
        }
    }

    printf("Tong cac so le la: %d\n", tong);

    return 0;
}

