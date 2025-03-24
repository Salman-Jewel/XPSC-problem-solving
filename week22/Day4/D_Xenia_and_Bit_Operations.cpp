#include <bits/stdc++.h>
using namespace std;
const int maxN = (1 << 17) + 9;
const int inf = 1e9 + 9;
int a[maxN], t[4 * maxN];
long long merge(long long ans_l, long long ans_r, int len)
{
    int pw = 0;
    pw = __lg(len);
    if (pw & 1)
    {
        return (ans_l | ans_r);
    }
    else
    {
        return (ans_l ^ ans_r);
    }
}
void build(int n, int b, int e)
{
    if (b == e)
    {
        t[n] = a[b];
        return;
    }
    int mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    t[n] = merge(t[l], t[r], e - b + 1); // changes this
}

void update(int n, int b, int e, int i, int v)
{
    if (i < b || i > e)
    {
        return;
    }
    if (b == e)
    {
        t[n] = v;
        return;
    }
    int mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    update(l, b, mid, i, v);
    update(r, mid + 1, e, i, v);
    t[n] = merge(t[l], t[r], e - b + 1); // changes this
}

int main()
{
    int n, m;
    cin >> n >> m;
    n = (1 << n);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    build(1, 1, n);

    while (m--)
    {
        int idx, v;
        cin >> idx >> v;
        update(1, 1, n, idx, v);
        cout << t[1] << endl;
    }

    return 0;
}