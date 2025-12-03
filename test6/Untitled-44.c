#include <stdio.h>
#define ROW 3
#define COL 4
void transpose(int src[ROW][COL], int dest[COL][ROW])
{
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            dest[j][i] = src[i][j];
        }
    }
}
int main()
{
    int src[ROW][COL] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int dest[COL][ROW];
    transpose(src, dest);
    printf("转置后的数组：\n");
    for (int i = 0; i < COL; i++)
    {
        for (int j = 0; j < ROW; j++)
        {
            printf("%d ", dest[i][j]);
        }
        printf("\n");
    }
    return 0;
}