#include <stdio.h>

int main(void)
{
    int numberOfEmployees, numberOfDepts;
    scanf("%d %d", &numberOfEmployees, &numberOfDepts);

    int employeesThisTerm[101] = {0}, employeesNextTerm[101] = {0};

    for(int i = 0; i < numberOfEmployees; i++)
    {
        int deptThisTerm, deptNextTerm;
        scanf("%d %d", &deptThisTerm, &deptNextTerm);
        employeesThisTerm[deptThisTerm]++;
        employeesNextTerm[deptNextTerm]++;
    }

    for(int i = 1; i <= numberOfDepts; i++)
    {
        printf("%d\n", employeesNextTerm[i] - employeesThisTerm[i]);
    }
    return 0;
}
