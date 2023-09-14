//#include<iostream>
//#include<cstdlib>
//using namespace std;
//#define GRAPH_SIZE 20
//const char NONE = '.';
//class Graph {
//protected:
//	char label[GRAPH_SIZE];
//	bool adjacent[GRAPH_SIZE][GRAPH_SIZE];
//	int degree[GRAPH_SIZE];
//	bool visited[GRAPH_SIZE];
//	int graphSize;
//	void CheckIndex(int n);
//	void VisitVertex(int n);
//	void DepthFirstSearchRecursion(int n);
//public:
//	Graph();
//	void InsertVertex(int n, char c);
//	void InsertEdge(int n, int m);
//	void DeleteVertex(int n);
//	void DeleteEdge(int n, int m);
//	void PrintGraph();
//	void DepthFirstSearch(int n);
//	void BreadthFirstSearch(int n);
//	void ResetVisited();
//	void PrintDegree();
//	void Error(string s) { cerr << s; exit(-1); }
//};