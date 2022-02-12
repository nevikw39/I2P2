/**                  _ _              _____ ___
 *  _ __   _____   _(_) | ____      _|___ // _ \
 * | '_ \ / _ \ \ / / | |/ /\ \ /\ / / |_ \ (_) |
 * | | | |  __/\ V /| |   <  \ V  V / ___) \__, |
 * |_| |_|\___| \_/ |_|_|\_\  \_/\_/ |____/  /_/
 **/
#include <bits/extc++.h>
#ifndef nevikw39
#define nevikw39 cin.tie(nullptr), ios::sync_with_stdio(false)
#else
#pragma message("hello, nevikw39")
#endif
#pragma message("GL; HF!")
#define ALL(X) begin(X), end(X)
#define ST first
#define ND second
using namespace std;
using namespace __gnu_cxx;
using namespace __gnu_pbds;
template <typename T, typename Cmp = greater<T>, typename Tag = pairing_heap_tag>
using _heap = __gnu_pbds::priority_queue<T, Cmp, Tag>;
template <typename K, typename M = null_type>
using _hash = gp_hash_table<K, M>;
template <typename K, typename M = null_type, typename Cmp = less<K>, typename T = rb_tree_tag>
using _tree = tree<K, M, Cmp, T, tree_order_statistics_node_update>;

struct node
{
    node *l = nullptr, *r = nullptr;
    char op = 0;
    __int128_t val = UINT64_MAX;
};

node *dfs(const int d = 0)
{
    static mt19937 rnd = mt19937(random_device{}());
    static string ops = "+++---*//%%";
    static uniform_int_distribution<int> op(0, ops.length() - 1), val(INT_MIN, INT_MAX);
    node *n = new node();
    if (uniform_int_distribution<int>(0, sqrt(d * 0.46))(rnd))
    {
        n->val = val(rnd);
        return n;
    }
    n->op = ops[op(rnd)];
    while (n->val < INT64_MIN || INT64_MAX < n->val)
    {
        n->l = dfs(d + 1);
        n->r = dfs(d + 1);
        switch (n->op)
        {
        case '+':
            n->val = n->l->val + n->r->val;
            break;
        case '-':
            n->val = n->l->val - n->r->val;
            break;
        case '*':
            n->val = n->l->val * n->r->val;
            break;
        case '/':
            if (n->r->val)
                n->val = n->l->val / n->r->val;
            break;
        case '%':
            if (n->r->val)
                n->val = n->l->val % n->r->val;
            break;
        }
    }
    return n;
}

void prefix(node *n)
{
    if (n->op)
    {
        cout << n->op << ' ';
        prefix(n->l);
        cout << ' ';
        prefix(n->r);
    }
    else
        cout << (int)n->val;
    delete n;
}

int main()
{
    node *n = dfs();
    cerr << (int64_t)n->val << '\n';
    prefix(n);
    cout << '\n';
    return 0;
}
