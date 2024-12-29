#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "Hello, World!";
    int count = 1;
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i] == ' ')
        {
            count ++;
        }
        
    }
    printf("Chuỗi có %d từ.\n", count);
}