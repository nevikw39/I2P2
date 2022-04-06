#include "function.h"
#include <bits/extc++.h>
#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("tune=native")
#pragma message("GL; HF!")
using namespace std;
using namespace __gnu_cxx;
using namespace __gnu_pbds;

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
