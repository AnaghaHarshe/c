#include<stdio.h>
#include<limits.h>
#define MAX_VERTICES 100
void printMatrix(int m[MAX_VERTICES][MAX_VERTICES], int vertices,int i,int j) 
{
    printf("Adjacency Matrix\n");
    for (i=0;i<vertices;i++) 
	{
        for (j=0;j<vertices;j++) 
		{
            if (m[i][j]==INT_MAX)
                printf("INF\t");
            else
                printf("%d\t",m[i][j]);
        }
        printf("\n");
    }
}
void floydWarshall(int m[MAX_VERTICES][MAX_VERTICES], int vertices, int i, int j,int k) 
{
    int pathMatrix[MAX_VERTICES][MAX_VERTICES];
    for (i=0;i<vertices;i++) 
	{
        for (j=0;j<vertices;j++) 
		{
            pathMatrix[i][j]=j;
        }
    }
    for (k=0;k<vertices;k++) 
	{
        for (i=0;i<vertices;i++) 
		{
            for (j=0;j<vertices;j++) 
			{
                if (m[i][k]!=INT_MAX && m[k][j]!=INT_MAX && m[i][k]+m[k][j]<m[i][j]) 
				{
                    m[i][j]=m[i][k]+m[k][j];
                    pathMatrix[i][j]=pathMatrix[i][k];
                }
            }
        }
    }
    printf("\nPath Matrix\n");
    for (i=0;i<vertices;i++) 
	{
        for (j=0;j<vertices;j++) 
		{
            printf("%d\t", pathMatrix[i][j]);
        }
        printf("\n");
    }
}
int main() 
{
    int vertices,i,j;

    printf("Enter the number of vertices in the graph");
    scanf("%d", &vertices);

    int adjacencyMatrix[MAX_VERTICES][MAX_VERTICES];

    printf("Enter the adjacency matrix (Enter 'INF' for no direct edge)\n");
    for (i=0;i<vertices;i++) 
	{
        for (j=0;j<vertices;j++) 
		{
            scanf("%d", &adjacencyMatrix[i][j]);
            if (adjacencyMatrix[i][j]==-1)
                adjacencyMatrix[i][j]=INT_MAX;
        }
    }

    printMatrix(adjacencyMatrix, vertices);

    floydWarshall(adjacencyMatrix, vertices);

    return 0;
}

