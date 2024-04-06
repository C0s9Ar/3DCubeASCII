#include "../Header/Util.h"

int main() {
    vector<Vertex> cubeVertices = {
        {-5, -5, -5}, {5, -5, -5}, {5, 5, -5}, {-5, 5, -5},
        {-5, -5,  5}, {5, -5,  5}, {5, 5,  5}, {-5, 5,  5}
    };

    vector<pair<int, int>> edges = {
        {0, 1}, {1, 2}, 
        {2, 3}, {3, 0},
        {4, 5}, {5, 6}, 
        {6, 7}, {7, 4},
        {0, 4}, {1, 5}, 
        {2, 6}, {3, 7}
    };

    float angle = 0.0;
    while (true) {
        clearScreen();

        vector<Vertex> rotatedVertices;
        for (const auto& vertex : cubeVertices) {
            Vertex v;
            v = Vertex::rotateX(vertex, angle);
            v = Vertex::rotateY(v, angle * 0.5);
            v = Vertex::rotateZ(v, angle * 0.33);
            rotatedVertices.push_back(v);
        }

        for (const auto& edge : edges) 
            drawLine(rotatedVertices[edge.first], rotatedVertices[edge.second]);
        
        Sleep(10);
        angle += 0.1;
    }

    return 0;
}
