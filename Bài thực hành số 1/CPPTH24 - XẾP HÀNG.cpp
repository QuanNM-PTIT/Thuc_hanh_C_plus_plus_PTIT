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

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.first < b.first;
}

int main()
{
    faster();
    int n;
    cin >> n;
    pair<int, int> a[n];
    F(i, 0, n) cin >> a[i].first >> a[i].second;
    sort(a, a + n, cmp);
    int ans = 0;
    for(auto i : a)
    {
        if(ans < i.fi) ans = i.fi;
        ans += i.se;
    }
    cout << ans;
    return 0;
}
