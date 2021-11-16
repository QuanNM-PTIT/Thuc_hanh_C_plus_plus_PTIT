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
    int n;
    cin >> n;
    bool f[205] = {};
    int x;
    while(n--)
    {
        cin >> x;
        f[x] = 1;
    }
    bool check = 1;
    for(int i = 1; i <= x; ++i)
    {
        if(!f[i])
        {
            cout << i << endl;
            check = 0;
        }
    }
    if(check) cout << "Excellent!";
    return 0;
}
