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
    int t;
    cin >> t;
    cin.ignore();
    unordered_map<string, int> um;
    bool check = 1;
    string x, y;
    vector<string> vs;
    while(t--)
    {
        if(check)
        {
            getline(cin, x);
            vs.pb(x);
            check = 0;
        }
        else
        {
            getline(cin, y);
            if(y == "") check = 1;
            else ++um[x];
        }
    }
    for(string i : vs)
    {
        if(um[i])
        {
            cout << i << ": " << um[i] << endl;
            um[i] = 0;
        }
    }
    return 0;
}
