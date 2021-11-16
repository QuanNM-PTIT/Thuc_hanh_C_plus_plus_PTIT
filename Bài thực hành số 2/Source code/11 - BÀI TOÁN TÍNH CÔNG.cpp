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

struct nv
{
    string name, chucVu;
    ll luong, ngayCong, thuong, phuCap;
};

ll Thuong(ll n, ll x)
{
    if(n < 22) return 0;
    if(n < 25) return x * 10 / 100;
    return x * 20 / 100;
}

ll PhuCap(string s)
{
    if(s == "GD") return 250000;
    if(s == "PGD") return 200000;
    if(s == "NV") return 150000;
    return 180000;
}

int main()
{
    faster();
    nv a;
    getline(cin, a.name);
    cin >> a.luong >> a.ngayCong >> a.chucVu;
    a.luong *= a.ngayCong;
    a.thuong = Thuong(a.ngayCong, a.luong);
    a.phuCap = PhuCap(a.chucVu);
    cout << "NV01 " << a.name << ' ' << a.luong << ' ' << a.thuong << ' ' << a.phuCap << ' ' << a.luong + a.thuong + a.phuCap;
    return 0;
}
