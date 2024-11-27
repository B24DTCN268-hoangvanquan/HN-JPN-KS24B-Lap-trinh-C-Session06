#include <stdio.h>

int main() {
    int num;   
    int sum = 0;  
    printf("Nhâp vao 5 sô nguyên:\n");
    for (int i = 0; i < 5; i++) {
        printf("Nhâp sô thu %d: ", i + 1);
        scanf("%d", &num);
        if (num % 2 != 0) { 
            sum += num; 
        }
    }
    printf("Tông cac sô le là: %d\n", sum);
    return 0;
}

