#include <stdio.h>
int main()
{
int rows, cols;
printf("Enter the value of row and column=");
scanf("%d %d", &rows, &cols);
int matrix[rows][cols];
for (int i = 0; i < rows; i++)
{
for (int j = 0; j < cols; j++)
{
scanf("%d", &matrix[i][j]);
}
}
printf("The matrix is:\n");
for (int i = 0; i < rows; i++)
{
for (int j = 0; j < cols; j++)
{
if (j > 0)
printf(" ");
printf("%d", matrix[i][j]);
}
printf("\n");
}
return 0;
}
