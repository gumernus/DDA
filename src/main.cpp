#include <iostream>

struct point {
	
	int x;
	int y;

};

void draw_line (point one, point two) {

	int m = (two.y - one.y) / (two.x - one.x);
	
	for (int x = one.x; x <= two.x; ++x) {

		// why am i making this shi

	}

}

int main() {

	/* int x; */
    /* std::cout << "Type a number: "; */
    /* std::cin >> x; */
    /* std::cout << "Your number is: " << x << std::endl; */

	draw_line(point{1, 1}, point{4,4});

	return 0;

}
