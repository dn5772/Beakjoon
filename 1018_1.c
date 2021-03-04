#include <stdio.h>
void put_color (char a[][51], _Bool b);
int chack_color (char a[][51], char b[][51], int, int);

int wi, le;
int main() {
    char puzzle_ans[50][51], puzzle[50][51];
    int change_w = 100, change_b = 100, tmp;
    _Bool first_c = 1; // 0 = B, 1 = W
    
    
    scanf("%d %d", &le, &wi);
    
    for (int i=0; i<le; i++)
    {
        scanf("%s", puzzle[i]);
    }
    
    put_color (puzzle_ans, first_c); // W
    for (int a=0; a<=(le-8); a++)
    {
        for (int b=0; b<=(wi-8); b++)
        {
            tmp = chack_color(puzzle, puzzle_ans, a, b);
            if (tmp<change_w)
                change_w = tmp;
        }
    }
    
    first_c = 0; // change first color
    put_color(puzzle_ans, first_c);
    for (int a=0; a<=(le-8); a++)
    {
        for (int b=0; b<=(wi-8); b++)
        {
            tmp = chack_color(puzzle, puzzle_ans, a, b);
            if (tmp<change_b)
                change_b = tmp;
        }
    }
    

    if (change_w < change_b)
        printf("%d\n", change_w);
    else
        printf("%d\n", change_b);
    
    return 0;
}


void put_color (char puz[50][51], _Bool first_c)
{
    if (first_c){
        for (int i=0; i<le; i++){
            for (int j=0; j<wi; j++){
                if ((i%2) == (j%2))
                    puz[i][j] = 'W';
                else
                    puz[i][j] = 'B';
            }
        }
    }
    else {
        for (int i=0; i<le; i++){
            for (int j=0; j<wi; j++){
                if ((i%2) == (j%2))
                    puz[i][j] = 'B';
                else
                    puz[i][j] = 'W';
            }
        }
    }
}


int chack_color (char puzzle[50][51], char puzzle_ans[50][51], int a, int b)
{
    int count = 0;
    for (int i=0; i<8; i++){
        for (int j=0; j<8; j++){
            if ((puzzle_ans[i+a][j+b]!=puzzle[i+a][j+b])){
//                printf("1\n");
                count++;
            }
        }
    }
    return count;
}

