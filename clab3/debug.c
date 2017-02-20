#include <stdio.h>

struct TwoDPoint {
	double x, y;
};

int main(void) {
	// Error 1: declare new struct variables
	// TwoDPoint_t was not defined
	// struct TwoDPoint is defined
	struct TwoDPoint a = {0, 0};
	struct TwoDPoint b = {0, 0};
	{
		char input [100];
		puts("Please enter the x and y coordinates of the 1st point , separated by a comma.");
		fgets(input , sizeof(input), stdin);
		// Error 2: return addresses for double
		// and fix format
		sscanf(input, "%lf,%lf", &(a.x), &(a.y));
		puts("Please enter the x and y coordinates of the 2nd point , separated by a comma.");
		fgets(input , sizeof(input), stdin);
		// Error 3: same as before:
		// pass address and fix format
		sscanf(input ,"%lf ,%lf", &(b.x), &(b.y));
	}
	double x_dist = (a.x - b.x), y_dist = (a.y - b.y);
	printf("The square of the distance between the two points is: %f\n", (x_dist*x_dist)+(y_dist*y_dist));
	return 0;
}
