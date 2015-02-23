// foo doesn't return anything
// foo takes 4 arguments:
//   a void pointer
//   2 integers
//   a function taking a void* and returning a void*
// it could be used as a generic map, where the void * points to an array of
// items, the ints pass in the array length and object size, and the function
// changes the item in the array
typedef void *(*mapfunc)(void *);
void (*map)(void *, int, int, mapfunc);
