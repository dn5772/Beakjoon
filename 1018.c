#include <stdio.h>
void put_color (char a[50][50], _Bool b);


int wi, le;
int main() {
    char puzzle_ans[50][50], puzzle[50][50];
    int change_w = 0, change_b = 0;
    _Bool first_c = 0; // 0 = W, 1 = B
    
    
    scanf("%d %d", &le, &wi);
    
    for (int i=0; i<le; i++)
    {
        scanf("%s", puzzle[i]);
    }

    /*
    printf("%d, %d\n", le, wi);
    for (int i=0; i<le; i++)
    {
    printf("%s\n", puzzle[i]);
    }
    */
    
    put_color (puzzle_ans, first_c); // W
    
    for (int i=0; i<le; i++){
        for (int j=0; j<wi; j++){
            if ((puzzle_ans[i][j]!=puzzle[i][j]))
                change_w++;
        }
    }
    
    first_c = 1; // change first color
    put_color(puzzle_ans, first_c);
    
    for (int i=0; i<le; i++){
        for (int j=0; j<wi; j++){
            if ((puzzle_ans[i][j]!=puzzle[i][j]))
                change_b++;
        }
    }
    
    if (change_w < change_b)
        printf("%d\n", change_w);
    else
        printf("%d\n", change_b);
    
    return 0;
}


void put_color (char puz[50][50], _Bool first_c)
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
