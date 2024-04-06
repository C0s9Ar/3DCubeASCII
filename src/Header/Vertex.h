#pragma once
#include <cmath>
#include <utility>

using namespace std;

class Vertex {
public:
    float x, y, z;

    static Vertex rotateX(const Vertex& v, float angle);
    static Vertex rotateY(const Vertex& v, float angle);
    static Vertex rotateZ(const Vertex& v, float angle);
    static pair<int, int> projectVertexTo2D(const Vertex& v);
};

