#include "mindustry.h"
extern struct MindustryObject message1;
void main(void) {
	double i = 0;
	while (i < 10) {
		printd(i);
		i++;
	}
	print("\n");
	i = 0;
	printd(i);
	if (i == 3) {
		print(" is 3");
	} else {
		print(" is not 3");
	}
	print("\n");
	printflush(message1);
}