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

bool check(string &s)
{
    int i = 0;
    string fi = "", se = "";
    for(; i < s.size(); ++i)
    {
        if(isblank(s[i])) return 0;
        if(s[i] == '@') break;
        if(!isalnum(s[i]) && s[i] != '.' && s[i] != '_') return 0;
        fi += s[i];
        if(fi.size() > 64) return 0;
    }
    if(!fi.size()) return 0;
    ++i;
    int checkDots = 0;
    for(; i < s.size(); ++i)
    {
        if(isblank(s[i])) return 0;
        if(!isalnum(s[i]) && s[i] != '.' && s[i] != '_') return 0;
        if(s[i] == '.') checkDots++;
        se += s[i];
        if(se.size() > 254) return 0;
    }
    if(checkDots == 1 && se.size() && se[se.size() - 1] == '.') return 0;
    return se.size() && checkDots;
}
 
int main()
{
    faster();
    int t;
    cin >> t;
    cin.ignore();
    string s;
    while(t--)
    {
        getline(cin, s);
        if(check(s)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
