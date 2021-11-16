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

struct gv
{
    string maNgach, name;
    ll luongCB, phuCap;
    int lv;
};

int lv(gv a)
{
    int res = 0;
    res = res * 10 + a.maNgach[2] - '0';
    res = res * 10 + a.maNgach[3] - '0';
    return res;
}

ll phuCap(gv a)
{
    if(a.maNgach[1] == 'T') return 2000000;
    if(a.maNgach[0] == 'G') return 500000;
    return 900000;
}

int main()
{
    faster();
    gv a;
    getline(cin, a.maNgach);
    getline(cin, a.name);
    cin >> a.luongCB;
    a.lv = lv(a);
    a.phuCap = phuCap(a);
    cout << a.maNgach << ' ' << a.name << ' ' << a.lv << ' ' << a.phuCap << ' ' << a.luongCB * a.lv + a.phuCap;
    return 0;
}
