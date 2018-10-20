#include <stdio.h>
#include <stdlib.h>

void input_value(int **m, int row, int col);
void output_value(int **m, int row, int col);

int main()
{
		int row, col;
		scanf("%d %d", &row, &col);

		int **d_Array = malloc(sizeof(int *) * row);

		for(int i=0; i<row; i++){
				free(d_Array[i]);
		}

		free(d_Array);

		return 0;
}

void input_value(int **m, int row, int col)
{
		for(int i=0; i<row; i++)
		{
				for(int j=0; j<col; j++)
				{
						printf("%d ", m[i][j]);
				}
				printf("\n");
		}
}
