#include <stdio.h>
#include <string.h>

int count = 0; // number of 1
int length;
char str_1[100], str_2[100];

void odd_parity()
{
    if (count % 2 == 1)
    {
        for (int i = 0, j = 1; i < length; i++, j++)
        {
            str_2[j] = str_1[i];
        }
        str_2[0] = '1';
    }
    else
    {
        for (int i = 0, j = 1; i < length; i++, j++)
        {
            str_2[j] = str_1[i];
        }
        str_2[0] = '0';
    }
}

void even_parity()
{
    if (count % 2 == 1)
    {
        for (int i = 0, j = 1; i < length; i++, j++)
        {
            str_2[j] = str_1[i];
        }
        str_2[0] = '0';
    }
    else
    {
        for (int i = 0, j = 1; i < length; i++, j++)
        {
            str_2[j] = str_1[i];
        }
        str_2[0] = '1';
    }
}

int main()
{
    printf("Inter a binary number: ");

    gets(str_1);
    length = strlen(str_1);

    for (int i = 0; i < length; i++)
    {
        if (str_1[i] == '1')
            count++;
    }

    printf("Choose option: \n");
    printf("1=> EVEN\n");
    printf("2=> ODD\n");

    int option; // Choose for ODD or EVEN
    scanf("%d", &option);
    switch (option)
    {
    case 1:
        odd_parity();
        break;

    case 2:
        even_parity();
        break;
    }

    printf("new string is: %s", str_2);

    return 0;
}