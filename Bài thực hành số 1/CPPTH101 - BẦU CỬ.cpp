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

bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    if(a.se < b.se) return 1;
    else if(a.se > b.se) return 0;
    return a.fi < b.fi;
}

int main()
{
    faster();
    int n, m, x;
    map<int, int> myMap;
    cin >> n >> m;
    while(n--)
    {
        cin >> x;
        ++myMap[x];
    }
    vector<pair<int, int>> v;
    for(auto i : myMap) v.pb(i);
    sort(v.begin(), v.end(), cmp);
    int idx = v.sz - 2, M = v[v.sz - 1].se;
    while(v[idx].se == M) --idx;
    if(idx < 0) return cout << "NONE", 0;
    cout << v[idx].fi;
    return 0;
}

