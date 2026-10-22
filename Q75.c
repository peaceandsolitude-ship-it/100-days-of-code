#include <stdio.h>
int main(void)
{
int rows, cols;
printf("The range of rows and columns are=");
scanf("%d %d", &rows, &cols);
int A[rows][cols], B[rows][cols], C[rows][cols];
printf("The first matrix is:\n");
for (int i = 0; i < rows; i++)
{
for (int j = 0; j < cols; j++)
{
scanf("%d", &A[i][j]);
}
}
printf("The second matrix is:\n");
for (int i = 0; i < rows; i++) 
{
for (int j = 0; j < cols; j++) 
{
scanf("%d", &B[i][j]);
}
}
for (int i = 0; i < rows; i++)
{
for (int j = 0; j < cols; j++)
{
C[i][j] = A[i][j] + B[i][j];
}
}
for (int i = 0; i < rows; i++) 
{
for (int j = 0; j < cols; j++)
{
printf("The sum of two matrices are=%d\n", C[i][j]);
if (j < cols - 1)
printf(" ");
}
printf("\n");
}
return 0;
}
