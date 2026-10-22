#include <stdio.h>
int main(void) 
{
int rows, cols;
scanf("%d %d", &rows, &cols);
int matrix[rows][cols];
int rowSum[rows];
for (int i = 0; i < rows; i++) 
{
rowSum[i] = 0;
for (int j = 0; j < cols; j++)
{
scanf("%d", &matrix[i][j]);
rowSum[i] += matrix[i][j];
}
}
for (int i = 0; i < rows; i++)
{
printf("%d\n", rowSum[i]);
}
return 0;
}
