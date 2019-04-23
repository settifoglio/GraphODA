#ifndef GRAPH
#define GRAPH

#include <vector>
#include <string>
#include <iostream>
using namespace std;

struct Graph {
	int n, m;
	vector<string> label;
	vector<vector<int> > adj;
	vector<pair<int, int> > edges;

	Graph();
	Graph(int);
	Graph(int, vector<string>&);
	void addEdge(int, int);
	vector<int> getColoring();
};

#endif