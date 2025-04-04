#include<stdio.h>

int mat[10][10] = {0};
int v[10] = {0};
int queue[10] = {0}, front = 0, rear = 0;

void bfs(int n)
{
	if(front == rear)
		return;
		
	int vertex = queue[front++];
	printf("%d\t", vertex);
	
	for(int i=0; i<n; i++)
		{
			if(mat[vertex][i] == 1 && !v[i])
				{
					queue[rear++] = i;
					v[i] = 1;
				}
		}
	
	bfs(n);
}

int main()
{
	int n, e, x, y, start_vertex;
	
	printf("Enter Total Nodes: ");
	scanf("%d", &n);
	printf("Enter Total Edges: ");
	scanf("%d", &e);
	
	printf("\nEnter Edges: \n");
	for(int i=0; i<e; i++)
		{
			scanf("%d %d", &x, &y);
			mat[x][y] = 1;
		}
		
	printf("\nEnter Start Vertex for BFS: ");
	scanf("%d", &start_vertex);
	
	queue[rear++] = start_vertex;
	v[start_vertex] = 1;
	
	printf("\nBFS Traversal: \n");
	bfs(n);
	
	return 0;
}
