#include "../include/mindustry.h"
extern struct MindustryObject message1;
void main(void) {
	double x = rand(20), y = rand(20);
	printd(x);
	print("\n");
	printd(y);
	print("\n");
	print(max(x, y) < 10);
	printflush(message1);
}