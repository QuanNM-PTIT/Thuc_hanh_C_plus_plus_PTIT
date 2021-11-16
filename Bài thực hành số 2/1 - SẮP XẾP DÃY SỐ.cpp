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
#define PI 3.141592653589793238
#define endl '\n'

int main()
{
    faster();
    int t, n, m, x;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        vi a, b;
        int MAX = INT_MIN;
        F(i, 0, n)
        {
            cin >> x;
            if(x < 0) a.pb(x);
            else b.pb(x);
            MAX = max(x, MAX);
        }
        bool check = 1;
        for(int i : a)
        {
            if(i == MAX && check)
            {
                cout << m << ' ' << i << ' ';
                check = 0;
            }
            else cout << i << ' ';
        }
        for(int i : b)
        {
            if(i == MAX && check)
            {
                cout << m << ' ' << i << ' ';
                check = 0;
            }
            else cout << i << ' ';
        }
        cout << endl;
    }
    return 0;
}
