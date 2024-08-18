#include<stdio.h>
int main()
{
	int sparseMatrix[10][10];
    int x,y,r1,c1;
    printf("Enter the number of rows and columns of the array:  \n");
    scanf("%d %d", &r1, &c1);
    printf("Enter the elements in array: (%d x %d):\n",r1,c1);
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&sparseMatrix[i][j]);
        }

    }

	int size = 0;
	for (int i = 0; i < r1; i++)
		for (int j = 0; j < c1; j++)
			if (sparseMatrix[i][j] != 0)
				size++;

	int compactMatrix[3][size];
    printf("Sparse Matrix is: \n");
	int k = 0;
	for (int i = 0; i < r1; i++)
		for (int j = 0; j < c1; j++)
			if (sparseMatrix[i][j] != 0)
			{
				compactMatrix[0][k] = i;
				compactMatrix[1][k] = j;
				compactMatrix[2][k] = sparseMatrix[i][j];
				k++;
			}

	for (int i=0; i<3; i++)
	{
		for (int j=0; j<size; j++)
			printf("%d ", compactMatrix[i][j]);

		printf("\n");
	}
	return 0;
}
