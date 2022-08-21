#include <iostream>

#define deb2(x, y) std:: cout << #x << x << ", " << #y << y << '\n';

struct point { int x, y; };

void plot_line(point p1, point p2) {

    auto dx{p2.x - p1.x};
    auto dy{p2.y - p1.y};

        // if DY is bigger than DX then it will render at y axis
        if (dx >= dy) {
            auto D{2 * dy - dx};
            for (auto y{p1.y}, x{p1.x}; x <= p2.x; ++x) {
                        deb2(x,y)
                        if (D > 0) {
                                ++y;
                    D -= 2 * dx;
                    }
                        D += 2 * dy;
                }
    }

        else {
                auto D{2 * dx - dy};
                for (auto y{p1.y}, x{p1.x}; y <= p2.y; ++y) {
                        deb2(x,y)
                if (D > 0) {
                        ++x;
                            D -= 2 * dy;
                        }
                        D += 2 * dx;
                }
        }
        return;
}

int main() {
        plot_line(point{0,0}, point{3,8});
        return 0;
}
