#include <stdio.h>
int main() {
int rows, cols, sum = 0;
printf("The range of rows and columns=");
scanf("%d %d", &rows, &cols);
int matrix[rows][cols];
for (int i = 0; i < rows; i++) 
{
for (int j = 0; j < cols; j++)
{
scanf("%d", &matrix[i][j]);
}
}
for (int i = 0; i < rows; i++)
{
for (int j = 0; j < cols; j++) 
{
sum += matrix[i][j];
}
}
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
printf("\nSum of all elements = %d\n", sum);
return 0;
}
