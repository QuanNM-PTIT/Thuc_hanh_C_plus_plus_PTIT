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
    int t, n, k, l, r;
    ll sum;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        int a[n];
        F(i, 0, n) cin >> a[i];
        while(k--)
        {
            sum = 0;
            cin >> l >> r;
            --l;
            F(i, l, r) sum += a[i];
            cout << sum << endl;
        }
    }
    return 0;
}

