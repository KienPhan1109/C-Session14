#include <stdio.h>
#include <string.h>

int main(){
    char c[1000];
    printf("Nhập vào chuỗi: ");
    gets(c);
    printf("Chuỗi đã nhập: %s", c);
    printf("\nSố lượng kí tự trong chuỗi: %d", strlen(c));
}