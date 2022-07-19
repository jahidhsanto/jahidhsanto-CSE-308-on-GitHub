#include <stdio.h>
#include <string.h>
int main() {
    char str_1[100], str_2[100];
    printf("Inter a binary number: ");
    
    gets(str_1);
    int length = strlen(str_1);

    int count=0;
    for (int i=0; i<length; i++)
    {
        if(str_1[i] == '1')
        count++;
    }
    
    if ( count%2 == 0)
    {
        for (int i = 0, j=1; i<length; i++, j++)
        {
            str_2[j] = str_1[i];
        }
        str_2[0] = '0';
    }
    else{
        for (int i = 0, j=1; i<length; i++, j++)
        {
            str_2[j] = str_1[i];
        }
        str_2[0] = '1';
    }
    printf("new string is: %s", str_2);
    
    return 0;
}