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

struct Dat
{
    string firstName, lastName, phoneNumber, date;
};

bool cmp(Dat &a, Dat &b)
{
    if(a.lastName > b.lastName) return 0;
    if(a.lastName < b.lastName) return 1;
    if(a.firstName > b.firstName) return 0;
    if(a.firstName < b.firstName) return 1;
    return 0;
}

int main()
{
    faster();
    ifstream fin("SOTAY.txt");
    ofstream fout("DIENTHOAI.txt");
    string s;
    unordered_map<int, string> m;
    Dat a[10005];
    int idx = 0;
    int i = 0;
    string date;
    while(getline(fin, s))
    {
        string tmp = s.substr(0, 4);
        if(tmp == "Ngay")
        {
            ++i;
            date = s.substr(5, s.sz - 5);
            m[i] = date;
        }
        else
        {
            string tmp;
            getline(fin, tmp);
            vector<string> v;
            string fName = "";
            string s1;
            stringstream ss(s);
            while(ss >> s1) v.pb(s1);
            a[idx].lastName = v[v.sz - 1];
            for(int i = 0; i < v.sz - 1; ++i) fName += v[i] + " ";
            a[idx].firstName = fName;
            a[idx].phoneNumber = tmp;
            a[idx].date = m[i];
            ++idx;
        }
    }
    sort(a, a + idx, cmp);
    for(int i = 0; i < idx; ++i) fout << a[i].firstName << a[i].lastName << ": " << a[i].phoneNumber << ' ' << a[i].date << endl;
    return 0;
}

