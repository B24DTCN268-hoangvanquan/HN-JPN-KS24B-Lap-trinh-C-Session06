#include <stdio.h>

int main() {
    int num;   
    int sum = 0;  
    printf("Nh�p vao 5 s� nguy�n:\n");
    for (int i = 0; i < 5; i++) {
        printf("Nh�p s� thu %d: ", i + 1);
        scanf("%d", &num);
        if (num % 2 != 0) { 
            sum += num; 
        }
    }
    printf("T�ng cac s� le l�: %d\n", sum);
    return 0;
}

