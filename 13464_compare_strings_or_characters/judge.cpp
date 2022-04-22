#include "function.h"
#include <iostream>
#pragma message("GL; HF!")
using std::cin, std::cout;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
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
