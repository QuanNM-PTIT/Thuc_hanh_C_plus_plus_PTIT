// Created by Nguyễn Mạnh Quân

#include<bits/stdc++.h>

using namespace std;

class thoigian
{
private:
    int ngay, gio;
public:
    thoigian(int ngay, int gio)
    {
        this -> ngay = ngay;
        this -> gio = gio;
    }
    thoigian()
    {
        this -> ngay = 0;
        this -> gio = 0;
    }
    
    void nhapbp()
    {
        cin >> ngay >> gio;
    }
    
    void xemmh()
    {
        cout << ngay << " ngay " << gio << " gio" << endl;
    }
    
    void rutgon()
    {
        int tmp = gio;
        ngay += tmp / 24;
        gio = tmp % 24;
    }
    
    operator char*()
    {
        char *res = new char[105];
        stack<char> st;
        while(ngay)
        {
            st.push(ngay % 10 + '0');
            ngay /= 10;
        }
        int i = 0;
        while(!st.empty())
        {
            res[i++] = st.top();
            st.pop();
        }
        char tmp[] = " ngay ";
        i += 6;
        strcat(res, tmp);
        while(gio)
        {
            st.push(gio % 10 + '0');
            gio /= 10;
        }
        while(!st.empty())
        {
            res[i++] = st.top();
            st.pop();
        }
        char tmp2[] = " gio";
        strcat(res, tmp2);
        return res;
    }
    
    friend thoigian operator +(thoigian a, thoigian b);
    friend thoigian operator -(thoigian a, thoigian b);
    
    thoigian operator *(thoigian a)
    {
        thoigian tmp;
        tmp.gio = this -> gio * a.gio;
        tmp.ngay = this -> ngay * a.ngay;
        tmp.rutgon();
        return tmp;
    }
    
    thoigian operator /(thoigian a)
    {
        thoigian tmp;
        tmp.gio = this -> gio / a.gio;
        tmp.ngay = this -> ngay / a.ngay;
        tmp.rutgon();
        return tmp;
    }
    
    thoigian(char* a)
    {
        ngay = 0;
        gio = 0;
        int i = 0;
        for(; i < strlen(a); ++i)
        {
            if(isdigit(*(a + i))) ngay = ngay * 10 + *(a + i) - '0';
            else break;
        }
        while(isdigit(*(a + i)) == 0) ++i;
        for(; i < strlen(a); ++i)
        {
            if(isdigit(*(a + i))) gio = gio * 10 + *(a + i) - '0';
            else break;
        }
    }
};

thoigian operator +(thoigian a, thoigian b)
{
    thoigian tmp;
    tmp.gio = a.gio + b.gio;
    tmp.ngay = a.ngay + b.ngay;
    tmp.rutgon();
    return tmp;
}

thoigian operator -(thoigian a, thoigian b)
{
    thoigian tmp;
    tmp.gio = a.gio - b.gio;
    tmp.ngay = a.ngay - b.ngay;
    if(tmp.gio <= 0)
    {
        tmp.gio += 24;
        tmp.ngay--;
    }
    tmp.rutgon();
    return tmp;
}

int main()
{
    thoigian a, b(2, 10), c;
    a.nhapbp();
    a.rutgon();
    a.xemmh();
    c = a - b;
    c.xemmh();
    a = thoigian((char *)"2 ngay 20 gio");
    a.xemmh();
    cout << (char*)(b) << endl;
    return 0;
}
