#include <stdio.h>

#define MAX 100
int main()
{
int n = 3, m = 3;
int mat[][MAX] = { { 2, 1, 7 },
{ 3, 7, 2 },
{ 5, 4, 9 } };
for (int i = 0; i< n; i++) {
for (int j = 0; j < m; j++) {
// right and left diagonal condition
if (i == j || (i + j + 1) == n)
mat[i][j] = 0;
}
}
for (int i = 0; i< n; i++) {
for (int j = 0; j < m; j++)
printf("%d ",mat[i][j]);
printf("\n");
}
return 0;
}
