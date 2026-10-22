#include <stdio.h>
int main() 
{
int rows, cols;
printf("The range of rows and columns are=");
scanf("%d %d", &rows, &cols);
int matrix[rows][cols];
for (int i = 0; i < rows; i++)
{
for (int j = 0; j < cols; j++) 
{
scanf("%d", &matrix[i][j]);
}
}
printf("Transpose:\n");
for (int i = 0; i < cols; i++) 
{         
for (int j = 0; j < rows; j++) 
{   
printf("%d", matrix[j][i]);if (j < rows - 1)
printf(" ");
}
printf("\n");
}
return 0;
}
