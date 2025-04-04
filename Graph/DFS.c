#include<stdio.h>

int mat[10][10] = {0};
int v[10] = {0};

void dfs(int vertex, int n)
{
	printf("%d\t", vertex);
	v[vertex] = 1;
	
	for(int i=0; i<n; i++)
		{
			if(mat[vertex][i] == 1 && !v[i])
				dfs(i, n);
		}
}

int main()
{
	int n, e, u, v, start_vertex;
	
	printf("Enter Total Nodes: ");
	scanf("%d", &n);
	printf("Enter Total Edges: ");
	scanf("%d", &e);
	
	printf("\nEnter Edges: \n");
	for(int i=0; i<e; i++)
		{
			scanf("%d %d", &u, &v);
			mat[u][v] = 1;
		}
		
	printf("\nEnter Start Vertex for DFS: ");
	scanf("%d", &start_vertex);
	
	printf("\nDFS Traversal: \n");
	dfs(start_vertex, n);
	
	return 0;
}
