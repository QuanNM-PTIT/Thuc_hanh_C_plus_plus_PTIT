// Created by Nguyễn Mạnh Quân

#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    if(!b) return a;
    return gcd(b, a % b);
}

class honso
{
private:
    int nguyen, tu, mau;
public:
    honso()
    {
        this -> nguyen = 0;
        this -> tu = 0;
        this -> mau = 0;
    }
    honso(int nguyen, int tu, int mau)
    {
        this -> tu = tu;
        this -> mau = mau;
        this -> nguyen = nguyen;
    }
    void nhapbp()
    {
        cin >> nguyen >> tu >> mau;
    }
    void xemmh()
    {
        cout << "nguyen: " << nguyen << " tu: " << tu << " mau: " << mau << endl;
    }
    void convert()
    {
        nguyen *= mau;
        tu += nguyen;
        nguyen = 0;
        int GCD = gcd(tu, mau);
        tu /= GCD;
        mau /= GCD;
    }
    void rutgon()
    {
        nguyen += abs(tu) / abs(mau);
        tu = tu % mau;
        int GCD = gcd(tu, mau);
        tu /= GCD;
        mau /= GCD;
    }
    friend honso operator *(honso a, honso b)
    {
        honso res;
        a.convert();
        b.convert();
        res.tu = a.tu * b.tu;
        res.mau = a.mau * b.mau;
        res.rutgon();
        return res;
    }
    friend honso operator /(honso a, honso b)
    {
        honso res;
        a.convert();
        b.convert();
        res.tu = a.tu * b.mau;
        res.mau = a.mau * b.tu;
        res.rutgon();
        return res;
    }
    honso operator +(honso a)
    {
        honso res;
        this -> convert();
        a.convert();
        int lcm = this -> mau * a.mau / gcd(this -> mau, a.mau);
        res.tu = this -> tu * lcm / this -> mau + a.tu * lcm / a.mau;
        res.mau = lcm;
        res.rutgon();
        this -> rutgon();
        return res;
    }
    honso operator -(honso a)
    {
        honso res;
        this -> convert();
        a.convert();
        int lcm = this -> mau * a.mau / gcd(this -> mau, a.mau);
        res.tu = this -> tu * lcm / this -> mau - a.tu * lcm / a.mau;
        res.mau = lcm;
        res.rutgon();
        if(res.tu < 0 && res.mau < 0)
        {
            res.tu *= -1;
            res.mau *= -1;
        }
        else if(res.tu < 0)
        {
            res.nguyen *= -1;
            res.tu *= -1;
        }
        else if(res.mau < 0)
        {
            res.nguyen *= -1;
            res.mau *= -1;
        }
        this -> rutgon();
        return res;
    }
    operator string()
    {
        string s;
        s = "nguyen: ";
        s += to_string(nguyen) + " tu: " + to_string(tu) + " mau: " + to_string(mau);
        return s;
    }
    honso(float n)
    {
        this -> nguyen = (int) n;
        n -= this -> nguyen;
        this -> mau = 1e7;
        for(int i = 1; i <= 7; ++i) n *= 10;
        this -> tu = n;
        this -> rutgon();
    }
};

int main()
{
    honso a, b(2, 3, 5), c;
    a.nhapbp();
    a.rutgon();
    a.xemmh();
    c = a * b;
    c.xemmh();
    c = a / b;
    c.xemmh();
    c = a + b;
    c.xemmh();
    c = a - b;
    c.xemmh();
    cout << "\na = " << string(a);
    c = honso(1.25);
    cout << endl;
    c.xemmh();
    return 0;
}
