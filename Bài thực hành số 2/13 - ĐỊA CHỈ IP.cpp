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

bool check(vector<string> &vs)
{
    if(vs.size() != 4) return 0;
    for(string i : vs)
    {
        long long tmp = 0;
        for(char j : i)
        {
            if(!isdigit(j)) return 0;
            tmp = tmp * 10 + j - '0';
        }
        if(tmp < 0 || tmp > 255) return 0;
    }
    return 1;
}

int main()
{
    faster();
    int t;
    cin >> t;
    string s;
    while(t--)
    {
        cin >> s;
        vector<string> vs;
        stringstream ss(s);
        while(getline(ss, s, '.')) vs.push_back(s);
        if(check(vs)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
