typedef int (*f)(int);
f (*foo)(f, f);

// foo is a function taking two functions int->int and
// returning a function int->int.
//
// This may be used for `compose`, fºg
