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

struct SoPhuc
{
    long long thuc, ao;
};

SoPhuc binh_phuong_tong(SoPhuc a, SoPhuc b)
{
    SoPhuc res;
    a.thuc += b.thuc;
    a.ao += b.ao;
    res.thuc = a.thuc * a.thuc - a.ao * a.ao;
    res.ao = 2 * a.thuc * a.ao;
    return res;
}

void hien_thi(SoPhuc a)
{
    cout << a.thuc << " + " << a.ao << 'i';
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        SoPhuc A;
        SoPhuc B;
        cin >> A.thuc >> A.ao >> B.thuc >> B.ao;
        SoPhuc C = binh_phuong_tong(A, B);
        hien_thi(C);
        cout << endl;
    }
}
