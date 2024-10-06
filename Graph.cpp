#include <iostream>
#include <vector>

class Graph {
private:
    int numVertices;
    std::vector<std::vector<int>> adjMatrix;

public:
    // Constructor
    Graph(int vertices) : numVertices(vertices), adjMatrix(vertices, std::vector<int>(vertices, 0)) {}

    // Function to add an edge to the graph
    void addEdge(int source, int destination) {
        // Assuming the graph is undirected
        adjMatrix[source][destination] = 1;
        adjMatrix[destination][source] = 1;
    }

    // Function to display the adjacency matrix
    void displayMatrix() {
        std::cout << "Adjacency Matrix:\n";
        for (int i = 0; i < numVertices; ++i) {
            for (int j = 0; j < numVertices; ++j) {
                std::cout << adjMatrix[i][j] << " ";
            }
            std::cout << "\n";
        }
    }
};

int main() {
    // Create a graph with 5 vertices
    Graph graph(5);

    // Add edges to the graph
    graph.addEdge(0, 1);
    graph.addEdge(0, 4);
    graph.addEdge(1, 3);
    graph.addEdge(1, 4);
    graph.addEdge(2, 3);
    graph.addEdge(3, 4);

    // Display the adjacency matrix
    graph.displayMatrix();

    return 0;
}
