// https://issues.dlang.org/show_bug.cgi?id=20268

/*
TEST_OUTPUT:
---
fail_compilation/diag20268.d(12): Error: none of the overloads of template `diag20268.__lambda4` are callable using argument types `!()(int)`
fail_compilation/diag20268.d(11):        Candidate is: `__lambda4(__T1, __T2)(x, y)`
---
*/

alias f = (x,y) => true;
auto x = f(1);
