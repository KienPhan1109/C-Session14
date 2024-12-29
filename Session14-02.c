#include <stdio.h>
#include <string.h>

int main(){
    char str[] = {"Phan Trung Kiên"};
    int length = strlen(str);
    for (int i = 0; i < length; i++)
    {
        printf("%c ", str[i]);
    }
}