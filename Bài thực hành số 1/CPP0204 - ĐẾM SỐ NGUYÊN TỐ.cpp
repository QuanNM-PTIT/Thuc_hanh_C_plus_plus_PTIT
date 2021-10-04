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
    int n = 1e5;
    bool check[100005] = {};
    check[0] = check[1] = 1;
    for(int i = 2; i * i <= n; ++i) if(!check[i]) for(int j = i * i; j <= n; j += i) check[j] = 1;
    int t, l, r;
    cin >> t;
    while(t--)
    {
        cin >> l >> r;
        int cnt = 0;
        FOR(i, l, r) if(!check[i]) ++cnt;
        cout << cnt << endl;
    }
    return 0;
}

