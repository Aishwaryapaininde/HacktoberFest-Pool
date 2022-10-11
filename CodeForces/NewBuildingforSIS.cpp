//question link: https://codeforces.com/contest/1020/problem/A
// my submission link: https://codeforces.com/contest/1020/submission/169430074
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,a,b,k;
    cin>>n>>h>>a>>b>>k;
    for(int i=0;i<k;i++)
    {
        int p,q,r,s;
        cin>>p>>q>>r>>s;
        if(p==r)
        {
            cout<<abs(q-s)<<endl;
        }
        else
        {
            if((q>=a && s<=b) || (q<=a && s>=b))
            {
                cout<<abs(p-r)+abs(q-s)<<endl;
            }
            else
            {
                if(q<=a)
                {
                    cout<<abs(p-r)+abs(q-a)+abs(s-a)<<endl;
                }
                else
                {
                    cout<<abs(p-r)+abs(b-q)+abs(s-b)<<endl;
                }
            }
        }
    }
}