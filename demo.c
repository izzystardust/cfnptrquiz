#include <stdio.h>

int one(const void* intA, const void * intB) {
	return *((int*)intA) < *((int*)intB);
}

void two(void *arr, int n, int size, void*(* mapfn)(void *)) {
}

void* mapints(void * data) {
	return NULL;
}

int (*three(int(*f)(int), int(*g)(int)))(int) {
	// oops! Can declare the type, but can't really do it in c
	// I mean, you can cheat, but...
	return NULL;
}

int plus3(int a) { return a + 3; }
int time4(int a) { return a * 4; }


int main() {
	int(*ex1)(const void *, const void *);
	int a = 3;
	ex1 = &one;
	one(&a, &a);

	void (*ex2)(void *, int, int, void *(*)(void *));
	ex2 = &two;
	two(NULL, 0, 0, &mapints);

	int (*(*foo)(int(*)(int), int(*)(int)))(int);
	foo = &three;
	int (*composed)(int);
	composed = three(plus3, time4);

	printf("Got to the end... No segfaults here!\n");
}
