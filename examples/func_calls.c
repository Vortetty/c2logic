#include "c2logic/builtins.h"
extern struct MindustryObject message1;
double factorial(int x) {
	int ret = 1;
	for (int i = 2; i <= x; i++) {
		ret *= x;
	}
	return ret;
}
void main(void) {
	printd(factorial(4));
	print("\n");
	printd(factorial(5));
	printflush(message1);
}