#include <stdio.h>
#include <string.h>

int main(){
    int i = 0, count = 0;
    char str[100] = "Phan Trung Kien 11 09 2006";
    int len = strlen(str);
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z') 
        {
            count ++;
        }
        i++;
    }
    printf("Chuỗi có %d kí tự chữ.\n", count);
}