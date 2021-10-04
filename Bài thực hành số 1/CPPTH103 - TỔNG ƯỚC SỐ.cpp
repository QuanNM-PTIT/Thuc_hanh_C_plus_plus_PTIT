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

const int MAX = 2 * 1e6 + 5;
int A[MAX] = {};
int a[MAX];

int main()
{
    faster();
    int n, max = INT_MIN;
    ll tong = 0;
    cin >> n;
    F(i, 0, n)
    {
        cin >> a[i];
        if(a[i] > max) max = a[i];
    }
    A[0] = A[1] = 1;
    int sqr = sqrt(max);
    FOR(i, 2, sqr) if(!A[i]) for(int j = i * i; j <= max; j += i) if(!A[j]) A[j] = i;
    FOR(i, 2, max) if(!A[i]) A[i] = i;
    F(i, 0, n)
    {
        int x = a[i];
        while(x != 1)
        {
            tong += A[x];
            x /= A[x];
        }
    }
    cout << tong;
    return 0;
}

