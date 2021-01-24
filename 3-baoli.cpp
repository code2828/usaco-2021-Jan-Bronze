/**
 * @file 3-baoli.cpp
 * @author your name (you@domain.com)
 * @brief 
 *     USACO 2021 January Contest, Bronze
 *     Problem 3. Just Stalling
 * @version 0.1
 * @date 2021-01-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<iostream>
#include<algorithm>
using namespace std;

int a[22],b[22];

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    int ans=0;
    sort(a,a+n);
    do
    {
        bool f=true;
        for(int i=0;i<n;i++)
        {
            if(a[i]>b[i])
            {
                f=false;
            }
        }
        if(f)ans++;
    }while(next_permutation(a,a+n));
    cout<<ans<<endl;

    return 0;
}
