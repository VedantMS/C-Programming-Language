#include<stdio.h>
int main()
{
	int adj[10][10] = {0}, ind[10] = {0}, od[10] = {0}, nodes, edges, u, v;
	
	printf("Enter Total Nodes : ");
	scanf("%d", &nodes);
	printf("Enter Total Edges : ");
	scanf("%d", &edges);
	
	printf("\nEnter Edges (Start End): \n");
	for(int i=0; i < edges; i++)
		{
			scanf("%d %d", &u, &v);
			adj[u][v] += 1;
		}
		
	printf("Adjacency Matrix : \n");
	for(int i=0; i<nodes; i++)
		{
			for(int j=0; j<nodes; j++)
				{
					printf("%d\t", adj[i][j]);
					ind[i] += adj[i][j];
					od[j] += adj[i][j];
				}
			printf("\n");
		}
		
	printf("Vertex\tIndegree\tOutdegree \n");
	for(int i=0; i<nodes; i++)
		{
			printf("%d\t%d\t\t%d \n", i, ind[i], od[i]);
		}
		
	return 0;
}
