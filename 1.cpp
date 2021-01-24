/**
 * @file 1.cpp
 * @author your name (you@domain.com)
 * @brief 
 *     USACO 2021 January Contest, Bronze
 *     Problem 1. Uddered but not Herd
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
#include<string>
#include<complex>
#include<cmath>
#include<vector>
#include<stack>
#include<deque>
#include<queue>
using namespace std;

int main()
{
    string a,b;
    int i=0,ans=1;
    cin>>a>>b;
    for(int j=0;j<b.length();j++)
    {
        while(a[i]!=b[j])
        {
            i++;
            if(i==a.length())
            {
                // cout<<"(j,b[j])=("<<j<<','<<b[j]<<");\n";
                i=0;
                ans++;
            }
        }
        i++;
        if(i==a.length())
        {
            // cout<<"(j,b[j])=("<<j<<','<<b[j]<<");\n";
            i=0;
            ans++;
        }
    }
    cout<<ans<<endl;

    return 0;
}
