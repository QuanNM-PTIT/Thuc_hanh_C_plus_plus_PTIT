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
    int t, n;
    cin >> t;
    n = t;
    cin.ignore();
    vector<int> len;
    string s;
    while(t--)
    {
        getline(cin, s);
        stringstream ss(s);
        string tmp;
        int y = 0;
        while(ss >> tmp) ++y;
        len.pb(y);
    }
    int i = 0;
    int cnt = 0;
    bool check = 1;
    vi ans;
    while(i < n)
    {
        if(len[i] == 6)
        {
            if(check)
            {
                ++cnt;
                check = 0;
                ans.pb(1);
            }
            i += 2;
        }
        else
        {
            check = 1;
            ++cnt;
            i += 4;
            ans.pb(2);
        }
    }
    cout << ans.sz << endl;
    for(int i : ans) cout << i << endl;
    return 0;
}
