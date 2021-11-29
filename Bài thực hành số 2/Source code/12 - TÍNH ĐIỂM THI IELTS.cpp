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

double score(int n)
{
    if(n <= 4) return 2.5;
    if(n <= 6) return 3.0;
    if(n <= 9) return 3.5;
    if(n <= 12) return 4.0;
    if(n <= 15) return 4.5;
    if(n <= 19) return 5.0;
    if(n <= 22) return 5.5;
    if(n <= 26) return 6.0;
    if(n <= 29) return 6.5;
    if(n <= 32) return 7.0;
    if(n <= 34) return 7.5;
    if(n <= 36) return 8.0;
    if(n <= 38) return 8.5;
    return 9.0;
}

double ans(double n)
{
    double tmp = n - (int) n;
    if(tmp < 0.25) return n - tmp;
    if(tmp < 0.75) return n - tmp + 0.5;
    return n - tmp + 1.0;
}

int main()
{
    faster();
    int t;
    cin >> t;
    int a, b;
    double c, d;
    while(t--)
    {
        double sum = 0;
        cin >> a >> b >> c >> d;
        sum += score(a) + score(b) + c + d;
        sum /= 4.0;
        cout << setprecision(1) << fixed << ans(sum) << endl;
    }
    return 0;
}
