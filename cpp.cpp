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
    int n,x,y;
    int t,i,j,cnt;
    cin>>t;
    while(t--)
    {
        cin>>n>>x>>y;
        cout<<n-x+y<<endl;
    }
    return 0;
}

