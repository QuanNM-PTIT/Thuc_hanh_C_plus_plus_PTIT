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

struct thiSinh
{
    string mts, name;
    float toan, ly, hoa;
};

int main()
{
    faster();
    thiSinh a;
    getline(cin, a.mts);
    getline(cin, a.name);
    cin >> a.toan >> a.ly >> a.hoa;
    float sum = a.toan * 2 + a.ly + a.hoa;
    float ut;
    if(a.mts[2] == '1') ut = 0.5;
    else if(a.mts[2] == '2') ut = 1;
    else ut = 2.5;
    cout << a.mts << ' ' << a.name << ' ';
    printf("%g %g ", ut, sum);
    sum += ut;
    if(sum >= 24) cout << "TRUNG TUYEN";
    else cout << "TRUOT";
    return 0;
}
