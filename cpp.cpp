#include<iostream>
#include<ctime>
#include<numeric>
#include<tuple>
#include<iomanip>
#include<cstdlib>
#include<queue>
#include<stack>
#include<map>
#include<unordered_map>
#include<cmath>
#include<cstdio>
#include<vector>
#include<climits>
#include<algorithm>
#include<string>
#include<sstream>
#include<cstring>
#include<deque>
#include<set>
using namespace std;
int main()
{
    int i,j,k,n,cnt,min,t,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        string s[n];
        for(i=0;i<n;i++)
        {
           cin>>s[i];
        }
        min=10000;
        for(i=0;i<n;i++)
        {  
            for(j=i+1;j<n;j++)
            {
                cnt=0;
                for(k=0;k<m;k++)
                {
                    cnt+=abs(s[i][k]-s[j][k]);
                }
                if(min>cnt)
                {
                    min=cnt;
                }
            }
        }
        cout<<min<<endl;
    }
    return 0;
}

