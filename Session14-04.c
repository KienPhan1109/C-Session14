#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "Hello, World!";
    char c;
    int count = 0;
    int len = strlen(str);
    printf("Nhập một ký tự bất kỳ: ");
    scanf("%c", &c);
    for (int i = 0; i < len; i++)
    {
        if (str[i] == c)
        {
            count ++;
        }
        
    }
    printf("%c xuất hiện %d lần trong chuỗi.\n", c, count);
}