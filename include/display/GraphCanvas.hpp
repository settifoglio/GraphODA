#ifndef GRAPH_CANVASH
#define GRAPH_CANVASH

#include "GraphDisplay.hpp"
#include "../vector/Vector.hpp"

#include <SFML/Graphics.hpp>

#include <string>
#include <vector>
#include <utility>
#include <iostream>
#include <fstream>
#include <sstream>

struct GraphCanvas {
	GraphDisplay GD;
	sf::RenderWindow *janela;
	sf::Font fonte;
	int editLabel, editWeight;

	GraphCanvas(sf::RenderWindow&, sf::Font&, int, int, int);
	void setGraph(Graph, vector<int>);
	void handleClique();
	void display();

	// private:
	sf::Color getColor(int);
	int findFontSize(int, int);
	int findFontSizeNew(int, int);
	void printPesos();
	void printAresta(Vector, int);
	void printGrafo();
	void printSetas();
};

pair<Graph, vector<int> > lerGrafoArquivo(string);

#endif
