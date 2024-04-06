#include "../Header/Util.h"

Vertex Vertex::rotateX(const Vertex& v, float angle) {
    return {
        v.x,
        v.y * cos(angle) - v.z * sin(angle),
        v.y * sin(angle) + v.z * cos(angle)
    };
}

Vertex Vertex::rotateY(const Vertex& v, float angle) {
    return {
        v.x * cos(angle) + v.z * sin(angle),
        v.y,
        -v.x * sin(angle) + v.z * cos(angle)
    };
}

Vertex Vertex::rotateZ(const Vertex& v, float angle) {
    return {
        v.x * cos(angle) - v.y * sin(angle),
        v.x * sin(angle) + v.y * cos(angle),
        v.z
    };
}

pair<int, int> Vertex::projectVertexTo2D(const Vertex& v) {
    int x = round(v.x) + 40;
    int y = round(v.y) + 12;
    return { x, y };
}