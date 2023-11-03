#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void    reverse(char str[], int length)
{
    int     start;
    int     end;

    start = 0;
    end = length - 1;
    while (start < end)
    {
        char temp;

        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

char *itoa(int num, char *str, int base) {
    int i = 0;
    int is_negative = 0;

    if (num == 0) {
        str[i++] = '0';
    } else {
        if (num < 0 && base == 10 && num > -2147483648) {
            is_negative = 1;
            num = -num;
        }
        while (num != 0) {
            int rem = num % base;
            str[i++] = rem + '0'; 
            num = num / base;
        }
        if (is_negative) {
            str[i++] = '-';
        }
        str[i] = '\0';
        reverse(str, i);
    }

    return str;
}

bool isPalindrome(int x) 
{
    int     i;
    int     y;
    int     s;
    char    str[20];

    itoa(x, str, 10);
    i = 0;
    y = strlen(str) - 1;
    printf("%s\n", str);
    while (i < y)
    {
        if (str[i] != str[y])
        {
            printf("It's not a palindrom");
            return false;
        }
        i++;
        y--;
        if (i == y)
        {
            printf("It's a palindrom");
            return true;
        }
    }
    printf("It's a palindrom");
    return true;
}

int main() 
{
    int num = -212;
    isPalindrome(num);
    return 0;
}