//#include"Graph.h"
//#include"QueueTemplate.h"
//
//
//void Graph::CheckIndex(int n) {
//	if (n < 0 || n >= GRAPH_SIZE)
//		Error("Illegal index");
//}
//void Graph::VisitVertex(int n)
//{
//	visited[n] = true;
//	cout << label[n] << " ";
//}
//Graph::Graph()
//{
//	graphSize = 0;
//	for (int i = 0; i < GRAPH_SIZE; i++)
//	{
//		label[i] = NONE;
//		degree[i] = 0;
//		visited[i] = false;
//		for (int j = 0; j < GRAPH_SIZE; j++) {
//			adjacent[i][j] = false;
//		}
//	}
//}
//void Graph::InsertVertex(int n, char c)
//{
//	CheckIndex(n);
//	if (label[n] != NONE)Error("Occupied");
//	label[n] = c; graphSize++;
//}
//
//void Graph::InsertEdge(int n, int m)
//{
//	CheckIndex(n); CheckIndex(m);
//	adjacent[n][m] = adjacent[m][n] = true;
//	degree[n]++; degree[m]++;
//}
//
//void Graph::PrintGraph()
//{
//	for (int n = 0; n < GRAPH_SIZE; n++) {
//		if (label[n] == NONE)continue;
//		cout << "Vertex " << label[n] << " has neighbor ";
//		for (int i = 0; i < GRAPH_SIZE; i++) {
//			if (adjacent[n][i]) cout << label[i] << " ";
//		}
//		cout << endl;
//	}
//}
//void Graph::ResetVisited()
//{
//	for (int i = 0; i < GRAPH_SIZE; i++) {
//		visited[i] = false;
//	}
//}
//
//void Graph::DepthFirstSearchRecursion(int n)
//{
//	if (visited[n])return;
//	VisitVertex(n);
//	for (int i = 0; i < GRAPH_SIZE; i++)
//	{
//		if (adjacent[n][i])
//			DepthFirstSearchRecursion(i);
//	}
//}
//
//void Graph::DepthFirstSearch(int n)
//{
//	ResetVisited();
//	DepthFirstSearchRecursion(n);
//}
//
//void Graph::PrintDegree()
//{
//	
//	for (int i = 0; i < graphSize; i++)
//	{
//		cout <<label[i] << " degree = ";
//		cout << degree[i] << endl;
//	}
//}