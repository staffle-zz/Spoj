/* C/C++ program for solution of Hamiltonian Cycle problem 
using backtracking */
#include<stdio.h> 

// Number of vertices in the graph 
#define V 5 
#define long long ll
void printSolution(int path[]); 

/* A utility function to check if the vertex v can be added at 
index 'pos' in the Hamiltonian Cycle constructed so far (stored 
in 'path[]') */
bool isSafe(int v, bool graph[V][V], int path[], int pos) 
{ 
	/* Check if this vertex is an adjacent vertex of the previously 
	added vertex. */
	if (graph [ path[pos-1] ][ v ] == 0) 
		return false; 

	/* Check if the vertex has already been included. 
	This step can be optimized by creating an array of size V */
	for (int i = 0; i < pos; i++) 
		if (path[i] == v) 
			return false; 

	return true; 
} 

/* A recursive utility function to solve hamiltonian cycle problem */
bool hamCycleUtil(bool graph[V][V], int path[], int pos) 
{ 
	if (pos == V) 
	{ 

		if ( graph[ path[pos-1] ][ path[0] ] == 1 ) 
		return true; 
		else
		return false; 
	} 
	for (int v = 1; v < V; v++) 
	{ 
	
		if (isSafe(v, graph, path, pos)) 
		{ 
			path[pos] = v; 

			if (hamCycleUtil (graph, path, pos+1) == true) 
				return true; 

			path[pos] = -1; 
		} 
	} 
	return false; 
} 

bool hamCycle(bool graph[V][V]) 
{ 
	int *path = new int[V]; 
	for (int i = 0; i < V; i++) 
		path[i] = -1; 
	path[0] = 0; 
	if ( hamCycleUtil(graph, path, 1) == false ) 
	{ 
		printf("\nSolution does not exist"); 
		return false; 
	} 

	printSolution(path); 
	return true; 
} 

/* A utility function to print solution */
void printSolution(int path[]) 
{ 
	printf ("Solution Exists:"
			" Following is one Hamiltonian Cycle \n"); 
	for (int i = 0; i < V; i++) 
		printf(" %d ", path[i]); 

	// Let us print the first vertex again to show the complete cycle 
	printf(" %d ", path[0]); 
	printf("\n"); 
} 

// driver program to test above function 
int main() 
{ 
/* Let us create the following graph 
	(0)--(1)--(2) 
	| / \ | 
	| / \ | 
	| /	 \ | 
	(3)-------(4) */
bool graph1[V][V] = {{0, 1, 0, 1, 0}, 
					{1, 0, 1, 1, 1}, 
					{0, 1, 0, 0, 1}, 
					{1, 1, 0, 0, 1}, 
					{0, 1, 1, 1, 0}, 
					}; 

	// Print the solution 
	hamCycle(graph1); 

/* Let us create the following graph 
	(0)--(1)--(2) 
	| / \ | 
	| / \ | 
	| /	 \ | 
	(3)	 (4) */
	bool graph2[V][V] = {{0, 1, 0, 1, 0}, 
					{1, 0, 1, 1, 1}, 
					{0, 1, 0, 0, 1}, 
					{1, 1, 0, 0, 0}, 
					{0, 1, 1, 0, 0}, 
					}; 

	// Print the solution 
	hamCycle(graph2); 

	return 0; 
} 
