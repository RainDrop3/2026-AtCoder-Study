#include <stdio.h>
#include <string.h>

int main(void)
{
    int numberOfRibs;
    int ribLength[11], spineIntersectIndex[11];

    int numberOfStrings;

    char strings[200010][11];
    int lettersSorted[11][11][26] = {0}; // [length of string][index within string][letter count]
    int stringArraySize[11] = {0};

    scanf("%d", &numberOfRibs);
    for(int i = 0; i < numberOfRibs; i++)
    {
        scanf("%d %d", &ribLength[i], &spineIntersectIndex[i]);
    }

    scanf("%d", &numberOfStrings);
    for(int i = 0; i < numberOfStrings; i++)
    {
        scanf("%s", strings[i]);

        int len = strlen(strings[i]);
        for(int j = 0; j < len; j++)
        {
            lettersSorted[len][j][strings[i][j] - 'a']++;
        }
    }

    for(int i = 0; i < numberOfStrings; i++)
    {
        int len = strlen(strings[i]);

        if(len != numberOfRibs)
        {
            printf("No\n");
            continue;
        }

        int possible = 1;

        for(int j = 0; j < len; j++)
        {
            if(lettersSorted[ribLength[j]] [spineIntersectIndex[j] - 1] [strings[i][j] - 'a'] == 0)
            {
                possible = 0;
                printf("No\n");
                break;
            }
        }

        if(possible) printf("Yes\n");
    }
    return 0;
}
