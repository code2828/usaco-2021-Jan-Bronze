/**
 * @file 3.cpp
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

int a[22]={0},b[22]={0},n;
unsigned long long ans=1;

void solve()
{
	int partialsum=0;
	for(int i=n-1;i>=0;i--)
	{
		for(int j=n-1;j>=0;j--)
		{
			if(a[i]>b[j])
			{
				break;
			}
			partialsum++;
		}
		partialsum-=n-(i+1);
		ans*=(unsigned long long)partialsum;
		partialsum=0;
	}
}

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+n);
    for(int i=0;i<n;i++)
    {
        if(a[i]>b[i])
        {
            cout<<0;
            return 0;
        }
    }
   // preinit();
	solve();
    cout<<ans<<endl;

    return 0;
}
