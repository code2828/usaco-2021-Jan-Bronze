/**
 * @file 2.cpp
 * @author your name (you@domain.com)
 * @brief 
 *     USACO 2021 January Contest, Bronze
 *     Problem 2. Even More Odd Photos
 * @version 0.1
 * @date 2021-01-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<iostream>
#include<ctime>
#include<algorithm>
#include<utility>
#include<functional>
#include<complex>
#include<cmath>
#include<vector>
#include<stack>
#include<deque>
#include<queue>
using namespace std;

int main()
{
    int n,o=0,e=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int p;
        cin>>p;
        if(p%2)o++;
        else e++;
    }
    if(o<e)
    {
        cout<<2*o+1<<endl;
    }
    else if(o==e)
    {
        cout<<o+e<<endl;
    }
    else // o>e
    {
        int ans=0;
        ans+=2*e;
        // cout<<"ans after +=2*e:"<<ans<<'\n';
        o-=e;
        while(o>3)
        {
            o-=3;
            ans+=2;
        }
        // cout<<"ans after while(o>3) and o"<<ans<<' '<<o<<endl;
        switch(o)
        {
            case 3: ans+=2;break;
            case 2: ans+=1;break;
            case 1: ans-=1;break;
        }
        cout<<ans<<endl;
    }

    return 0;
}
