#include <stdio.h>

int main()
{
    int i, j, count=0;
    char bord[8][9];
    
    for (i=0; i<8; i++)
    scanf("%s", bord[i]);
    
    for (i=0; i<8; i++)
    {
        for (j=0; j<8; j++)
        {
            if (i%2==j%2)
            {
                if (bord[i][j]=='F')
                {
                    count++;
                }
            }
        }
    }
    
    printf("%d", count);
}
