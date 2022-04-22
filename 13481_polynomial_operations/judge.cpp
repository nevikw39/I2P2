#include "function.h"
#pragma message("GL; HF!")
#if __cplusplus < 201103L
#define nullptr NULL
#endif

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    polynomial a, b;
    while (cin >> a >> b)
        cout << a << '\n'
             << b << '\n'
             << a + b << '\n'
             << a - b << '\n'
             << '\n';
    return 0;
}
