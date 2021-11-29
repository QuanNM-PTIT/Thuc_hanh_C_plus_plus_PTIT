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

bool check(string &tmp, string &s)
{
    int cnt1 = 0, cnt2 = 0;
    int idx1 = 0, idx2 = 0;
    for(char i : tmp)
    {
        if(i - 'A' + '0' == s[idx1])
        {
            ++cnt1;
            ++idx1;
        }
        else if(i - 'K' + '0' == s[idx2])
        {
            ++cnt2;
            ++idx2;
        }
    }
    return (cnt1 == s.sz || cnt2 == s.sz);
}

int main()
{
    faster();
    int t;
    cin >> t;
    cin.ignore();
    string s1, s2;
    while(t--)
    {
        cin >> s1 >> s2;
        string tmp = "";
        for(char i : s2) if(i >= 'A' && i <= 'Z' ) tmp += i;
        if(check(tmp, s1)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
