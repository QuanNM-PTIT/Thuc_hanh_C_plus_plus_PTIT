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
    string s;
    while(t--)
    {
        getline(cin, s);
        string ans = "";
        for(char i : s) if(isdigit(i)) ans += i;
        if(ans[0] == '8' && ans[1] == '4')
        {
            ans.erase(ans.begin());
            ans.erase(ans.begin());
        }
        while(ans.sz < 10) ans = "0" + ans;
        cout << ans << endl;
    }
    return 0;
}
