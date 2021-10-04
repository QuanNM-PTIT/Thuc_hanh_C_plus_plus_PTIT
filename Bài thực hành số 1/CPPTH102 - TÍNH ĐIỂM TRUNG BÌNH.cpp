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
    map<double, int> m;
    int n;
    double x;
    cin >> n;
    F(i, 0, n)
    {
        cin >> x;
        ++m[x];
    }
    m.erase(m.begin());
    auto it = m.end();
    --it;
    m.erase(it);
    double sum = 0;
    int cnt = 0;
    for(auto i : m)
    {
        sum += i.fi * i.se;
        cnt += i.se;
    }
    cout << setprecision(2) << fixed << sum / cnt;
    return 0;
}

