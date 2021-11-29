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

int checkPage(string &s)
{
    if(s.sz < 6) return -1;
    string tmp = s.substr(0, 4);
    if(tmp != "Page") return -1;
    int cnt = 0;
    for(int i = 5; i < s.sz; ++i) cnt = cnt * 10 + (s[i] - '0');
    return cnt;
}

int checkLevel(string &s)
{
    if(s.sz < 6) return -1;
    string tmp = s.substr(0, 5);
    if(tmp == "Level") return s[5] - '0';
    return -1;
}

int main()
{
    faster();
    ifstream fin("VANBAN.txt");
    ofstream fout("MUCLUC.txt");
    string s;
    vector<string> vs;
    int i;
    while(getline(fin, s))
    {
        if(!s.sz) continue;
        int check = checkPage(s);
        if(check != -1) i = check;
        check = checkLevel(s);
        if(check != -1)
        {
            string tmp = "";
            while(check--) tmp += ">";
            string sub = s.substr(8, s.sz - 8);
            tmp += sub + "--- " + to_string(i);
            vs.pb(tmp);
        }
    }
    for(string i : vs) fout << i << endl;
    return 0;
}
