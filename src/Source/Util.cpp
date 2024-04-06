#pragma once
#include "../Header/Util.h"

void clearScreen() {
    system("cls");
}

void drawLine(Vertex start, Vertex end) {
    auto [x1, y1] = Vertex::projectVertexTo2D(start);
    auto [x2, y2] = Vertex::projectVertexTo2D(end);

    int dx = abs(x2 - x1), sx = x1 < x2 ? 1 : -1;
    int dy = -abs(y2 - y1), sy = y1 < y2 ? 1 : -1;
    int err = dx + dy, e2;

    while (true) {
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { (short)x1, (short)y1 });
        cout << "+";
        if (x1 == x2 && y1 == y2)
            break;
        e2 = 2 * err;
        if (e2 >= dy) {
            err += dy;
            x1 += sx;
        }
        if (e2 <= dx) {
            err += dx;
            y1 += sy;
        }
    }
}
