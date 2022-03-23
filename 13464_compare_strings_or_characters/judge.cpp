#include "function.h"
#include <bits/extc++.h>
// #pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
// #pragma GCC target("tune=native")
#pragma message("GL; HF!")
using namespace std;
using namespace __gnu_cxx;
using namespace __gnu_pbds;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s, t;
    int n;
    while (cin >> s >> t >> n)
        cout << cmp(s, t) << ' '
             << cmp(s, t, n) << ' '
             << cmp(s, *t.rbegin()) << ' '
             << cmp(*s.begin(), t) << ' '
             << cmp(s, *t.rbegin(), n) << ' '
             << cmp(*s.begin(), t, n) << ' '
             << cmp(*s.rbegin(), *t.begin()) << '\n';
    return 0;
}
