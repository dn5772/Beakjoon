#include <stdio.h>
#include <string.h>

int find_s(char a[][51], int);

int n, m;

int main()
{
    int i, size=0;

    scanf("%d %d", &n, &m);

    char num[50][51]={0}, tmp[51];
    for (i=0; i<n; i++)
    {
        scanf("%s", tmp);
        strcpy(num[i], tmp);
        getchar();
    }
    if ((n==1)||(m==1))
        printf("1");
    else{
    for (i=2; i<=50; i++)
    {
        if (find_s(num, i))
        {
            size = i*i;
        }
    }
    printf("%d", size);
    }
    return 0;
}

int find_s(char num[50][51], int z)
{
    int a, b, c, d;
    int i, j;
    if ((z>n)||(z>m))
        return 0;
    if (z==1)
        return 1;
    for (i=0; i<=(n-z); i++)
        for (j=0; j<=(m-z); j++)
        {
            a = num[i][j];
            b = num[i][j+z-1];
            c = num[i+z-1][j];
            d = num[i+z-1][j+z-1];
            if ((a+b)==(c+d))
                if((a+c)==(b+d))
                    if((a+d)==(c+b))
                        return 1;
        }
    return 0;
}
