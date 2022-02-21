#include<stdio.h>
int main()
{
    char str[] = "abd"; //{'1', '2', 'a', 'b'};
    int i;
    while (1){
        printf ("%d - %c\n", i, str[i]);
        if (str[i] == '\0'){
            break;
        }
        i++;
    }
    return 0;
}
