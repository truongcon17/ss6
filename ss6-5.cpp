#include <stdio.h>

int main() {
    // B1: Khai b�o c�c bi?n
    int month;
    int year;

    // B2: Y�u c?u ngu?i d�ng nh?p th�ng v� nam
    printf("Moi ban nhap vao thang: \n");
    scanf("%d", &month);
    printf("Moi ban nhap vao nam: \n");
    scanf("%d", &year);

    // B3: Ki?m tra nam h?p l?
    if(year <= 0) {
        printf("Nam nhap vao khong hop le !\n");
    } else {
        // B4: Ki?m tra nam nhu?n
        if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            // B5: N?u l� nam nhu?n
            if (month >= 1 && month <= 12) {
                switch (month) {
                    case 1: 
                    case 3:  
                    case 5: 
                    case 7:  
                    case 8: 
                    case 10:
                    case 12: 
                        printf("Thang %d cua nam %d co 31 ngay.\n", month, year);
                        break;

                    case 4:  
                    case 6:  
                    case 9:  
                    case 11: 
                        printf("Thang %d cua nam %d co 30 ngay.\n", month, year);
                        break;
                    case 2:  // Thang 2 (nam nhuan c� 29 ngay)
                        printf("Thang 2 cua nam %d co 29 ngay.\n", year);
                        break;
                    default:
                        printf("Thang nhap vao khong hop le\n");
                        break;
                }
            } else {
                printf("Thang nhap vao khong hop le\n");
            }
        } else {
            // B5: Neu khong phai nam nhuan
            if (month >= 1 && month <= 12) {
                switch (month) {
                    case 1:  
                    case 3:  
                    case 5: 
                    case 7:  
                    case 8:  
                    case 10: 
                    case 12: 
                        printf("Thang %d cua nam %d co 31 ngay.\n", month, year);
                        break;

                    case 4:
                    case 6:  
                    case 9:  
                    case 11: 
                        printf("Thang %d cua nam %d co 30 ngay.\n", month, year);
                        break;
                    case 2:  
                        printf("Thang 2 cua nam %d co 28 ngay.\n", year);
                        break;
                    default:
                        printf("Thang nhap vao khong hop le\n");
                        break;
                }
            } else {
                printf("Thang nhap vao khong hop le\n");
            }
        }
    }

    return 0;
}

