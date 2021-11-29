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

struct xe
{
    string bienSo, loai, sts, date;
    int soGhe;
};

ll val(xe n)
{
    if(n.sts == "OUT") return 0;
    if(n.loai == "Xe_con")
    {
        if(n.soGhe == 5) return 10000;
        return 15000;
    }
    if(n.loai == "Xe_tai") return 20000;
    if(n.loai == "Xe_khach")
    {
        if(n.soGhe == 29) return 50000;
        return 70000;
    }
    return 0;
}

int main()
{
    faster();
    int n;
    cin >> n;
    xe a[n];
    F(i, 0, n) cin >> a[i].bienSo >> a[i].loai >> a[i].soGhe >> a[i].sts >> a[i].date;
    unordered_map<string, ll> um;
    vector<string> vs;
    F(i, 0, n)
    {
        if(!um[a[i].date]) vs.pb(a[i].date);
        um[a[i].date] += val(a[i]);
    }
    for(auto i : vs)
    {
        if(um[i])
        {
            cout << i << ": " << um[i] << endl;
            um[i] = 0;
        }
    }
    return 0;
}
