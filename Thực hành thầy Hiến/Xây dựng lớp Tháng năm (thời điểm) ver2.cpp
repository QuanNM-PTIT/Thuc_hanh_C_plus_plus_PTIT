// Created by Nguyễn Mạnh Quân

#include<bits/stdc++.h>

using namespace std;

class thangnam
{
private:
    int thang, nam;
public:
    thangnam()
    {
        this -> thang  = 0;
        this -> nam = 0;
    }

    thangnam(int thang, int nam)
    {
        this -> thang = thang;
        this -> nam = nam;
    }

    void nhapbp()
    {
        cin >> this -> thang >> this -> nam;
    }

    void xemmh()
    {
        cout << "thang " << this -> thang << " nam " << this -> nam << endl;
    }

    operator string()
    {
		string s = "thang ";
		s += to_string(thang);
		s += " nam ";
		s += to_string(nam);
        return s;
    }

	thangnam(string s)
	{
		int n = 0, i = 0;
		while(!isdigit(s[i])) ++i;
		for(; i < s.length(); ++i)
		{
			if(isdigit(s[i])) n = n * 10 + s[i] - '0';
			else break;
		}
		thang = n;
		n = 0;
		while(!isdigit(s[i])) ++i;
		for(; i < s.length(); ++i)
		{
			if(isdigit(s[i])) n = n * 10 + s[i] - '0';
			else break;
		}
		nam = n;
	}

    thangnam operator +(int n)
    {
		thangnam res;
		res.thang = thang;
		res.nam = nam;
        int tmp = res.thang;
        tmp += res.nam * 12;
        tmp += n;
        res.nam = tmp / 12;
        res.thang = tmp - res.nam * 12;
        if(res.thang == 0)
        {
            res.thang = 12;
            --res.nam;
        }
		return res;
    }

    thangnam operator -(int n)
    {
		thangnam res;
		res.thang = thang;
		res.nam = nam;
        int tmp = res.thang;
        tmp += res.nam * 12;
        tmp -= n;
        res.nam = tmp / 12;
        res.thang = tmp - res.nam * 12;
        if(res.thang == 0)
        {
            res.thang = 12;
            --res.nam;
        }
		return res;
    }

    bool operator <(thangnam b)
    {
        if(nam < b.nam) return 1;
        if(nam > b.nam) return 0;
        if(thang < b.thang) return 1;
        return 0;
    }
};

int main()
{
    thangnam a, b(10, 2021), c;
    a.nhapbp();
    a.xemmh();
	string x = "thang 11 nam 2021";
    c = thangnam(x);
    c.xemmh();
    cout << string(c) << endl;
    c = a + 20;
    c.xemmh();
    if(a < b) cout << "a < b" << endl;
    else cout << "a > b" << endl;
    return 0;
}
