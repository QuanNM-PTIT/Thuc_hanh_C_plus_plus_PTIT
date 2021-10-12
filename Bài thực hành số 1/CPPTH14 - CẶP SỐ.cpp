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
    int t;
    cin >> t;
    while(t--)
    {
        ll n, k;
        cin >> n >> k;
        ll a[n];
        for(int &i : a) cin >> i;
        ll start;
        long long cnt = 0;
        sort(a, a + n);
        F(i, 0, n)
        {
            start = lower_bound(a + i + 1, a + n, k - a[i]) - a;
            cnt += n - start;
        }
        cout << cnt << endl;
    }
    return 0;
}
