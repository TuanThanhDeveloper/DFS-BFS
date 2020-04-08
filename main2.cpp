#include "Graph.h"
int main()
{
	int choose, size, edge, x, y, search, begin;

   // khoi tao do thi
	printf("Enter how many nodes: ");
    scanf("%d", &size);
    Graph g(size);

	// tao canh noi giua cac dinh ke
    printf("Enter how many edges: ");
    scanf("%d", &edge);

    for (int i = 0; i < edge; i++){
        printf("AddEdge: ");
        scanf("%d", &x);
        scanf("%d", &y);
        g.addEdge(x,y);
    }

    //Menu
	printf("------------------Menu----------------- ");
	printf("\n1. BFS");
	printf("\n2. DFS");
    printf("\nSelect: ");
	scanf("\n%d", &choose);
	printf("\nPlease enter begin node: ");
	scanf("%d", &begin);
	printf("\nPlease enter your node you need search: ");
    scanf("%d", &search);

	switch (choose)
	{
	case 1:
		g.BreadthFirstSearch(begin, search);
		break;
	
	case 2:
		g.DepthFirstSearch(begin, search);
		break;
	}
}


	