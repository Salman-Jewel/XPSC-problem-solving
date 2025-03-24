#include <bits/stdc++.h>
using namespace std;
const int maxN = 1e5 + 9;
const int inf = 1e9 + 9;
int a[maxN];
struct node
{
    int mn, count;
};
node t[maxN * 4];
node merge(node l, node r)
{
    node ans;
    ans.mn = min(l.mn, r.mn);
    ans.count = 0;
    if (l.mn == ans.mn)
    {
        ans.count += l.count;
        ;
    }
    if (r.mn == ans.mn)
    {
        ans.count += r.count;
    }
    return ans;
}
void build(int n, int b, int e)
{
    if (b == e)
    {
        t[n].mn = a[b];
        t[n].count = 1;
        return;
    }
    int mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    t[n] = merge(t[l], t[r]); // changes this
}

void update(int n, int b, int e, int i, int v)
{
    if (i < b || i > e)
    {
        return;
    }
    if (b == e)
    {
        t[n].mn = v;
        t[n].count = 1;
        return;
    }
    int mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    update(l, b, mid, i, v);
    update(r, mid + 1, e, i, v);
    t[n] = merge(t[l], t[r]); // changes this
}

node query(int n, int b, int e, int i, int j)
{
    if (e < i || b > j)
    {
        return {inf,0}; // changes here
    }
    if (b >= i && e <= j)
    {
        return t[n];
    }
    int mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    return merge(query(l, b, mid, i, j), query(r, mid + 1, e, i, j)); // changes this
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    build(1, 1, n);

    while (m--)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            int idx, v;
            cin >> idx >> v;
            idx++;
            update(1, 1, n, idx, v);
        }
        else
        {
            int l, r;
            cin >> l >> r;
            l++;
            node ans = query(1, 1, n, l, r);
            cout << ans.mn<<" "<<ans.count << endl;
        }
    }

    return 0;
}