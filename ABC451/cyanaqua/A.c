#include <string.h>
#include <stdio.h>

int main(void)
{
    char string[11];
    scanf("%s", string);
    int len = strlen(string);

    printf("%s", len % 5 == 0? "Yes" : "No");
    return 0;
}
