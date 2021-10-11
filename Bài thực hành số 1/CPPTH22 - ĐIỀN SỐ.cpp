// Created by Nguyễn Mạnh Quân

#include<bits/stdc++.h>

using namespace std;

#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; ++i)
#define FORD(i, a, b) for(int i = a; i >= b; --i)
#define F(i, a, b) for(int i = a; i < b; ++i)
#define FD(i, a, b) for(int i = a; i > b; --i)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define endl '\n'

int main()
{
    faster();
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int a[n];
        int f[1005] = {};
        F(i, 0, n)
        {
            cin >> a[i];
            ++f[a[i]];
        }
        sort(a, a + n);
        int l = a[0], r = a[n - 1], cnt = 0;
        FOR(i, l, r) if(!f[i]) ++cnt;
        cout << cnt << endl;
    }
    return 0;
}
