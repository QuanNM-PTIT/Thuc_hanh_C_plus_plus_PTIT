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

map<string, string> myMap;

class MonHoc
{
public:
    string ma, name;
    MonHoc()
    {
        this -> ma = "";
        this -> name = "";
    }
    friend istream &operator >>(istream &is, MonHoc &a)
    {
        getline(is, a.ma);
        getline(is, a.name);
        myMap[a.ma] = a.name;
        return is;
    }
};

int i = 1;
int cv(string &s)
{
    int res = 0;
    for(int i : s) res = res * 10 + (i - '0');
    return res;
}

class LichThi
{
public:
    string stt, ma, ten, date, time, group;
    int ngay, thang, nam, gio, phut;
    friend istream &operator >> (istream &is, LichThi &a)
    {
        string x = "T0";
        if(i < 10) x += "0";
        x += to_string(i);
        a.stt = x;
        string s1, s2;
        getline(is, s1);
        stringstream ss(s1);
        ss >> a.ma >> a.date >> a.time >> a.group;
        a.ten = myMap[a.ma];
        stringstream ss2(a.date);
        getline(ss2, s2, '/');
        a.ngay = cv(s2);
        getline(ss2, s2, '/');
        a.thang = cv(s2);
        getline(ss2, s2, '/');
        a.nam = cv(s2);
        stringstream ss3(a.time);
        getline(ss3, s2, ':');
        a.gio = cv(s2);
        getline(ss3, s2, ':');
        a.phut = cv(s2);
        ++i;
        return is;
    }
    friend ostream &operator << (ostream &os, LichThi &a)
    {
        cout << a.stt << ' ' << a.ma << ' ' << a.ten << ' ' << a.date << ' ' << a.time << ' ' << a.group << endl;
        return os;
    }
};

bool cmp(LichThi &a, LichThi &b)
{
    if(a.nam > b.nam) return 0;
    if(a.nam < b.nam) return 1;
    if(a.thang > b.thang) return 0;
    if(a.thang < b.thang) return 1;
    if(a.ngay > b.ngay) return 0;
    if(a.ngay < b.ngay) return 1;
    if(a.gio > b.gio) return 0;
    if(a.gio < b.gio) return 1;
    if(a.phut > b.phut) return 0;
    if(a.phut < b.phut) return 1;
    if(a.ma > b.ma) return 0;
    if(a.ma < b.ma) return 1;
    return 0;
}

void process(MonHoc mh[], int n, LichThi a[], int m)
{
    sort(a, a + m, cmp);
}

int main()
{
    int n, m;
    cin >> n >> m;
    cin.ignore();
    MonHoc mh[100];
    LichThi lt[1000];
    for (int i = 0; i < n; i++) cin >> mh[i];
    for (int i = 0; i < m; i++) cin >> lt[i];
    process(mh, n, lt, m);
    for (int i = 0; i < m; i++) cout << lt[i];
    return 0;
}


