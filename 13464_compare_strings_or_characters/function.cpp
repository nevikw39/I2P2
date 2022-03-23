#include "function.h"
#include <cstring>

int inline abs_and_unit(int x) { return x ? x / ((x ^ (x >> ((sizeof(int) << 3) - 1))) - (x >> ((sizeof(int) << 3) - 1))) : 0; }

int cmp(const string &l, const string &r) { return (l > r) - (l < r); }

int cmp(const string &l, const string &r, int n) { return abs_and_unit(strncmp(l.c_str(), r.c_str(), n)); }

int cmp(char c, const string &s) { return c > s[0] ?: -1; }

int cmp(const string &s, char c) { return ~cmp(c, s) + 1; }

int cmp(char c, const string &s, int n) { return (c > s[n]) - (c < s[n]); }

int cmp(const string &s, char c, int n) { return ~cmp(c, s, n) + 1; }

int cmp(char l, char r) { return abs_and_unit(l - r); }
