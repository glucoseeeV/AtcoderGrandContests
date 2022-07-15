
//we see that we have to select any two skewers and the minimum of the two will be the ingredient so if we select 
//one min and one max then then min will be the answer so its better to select the one which have minimum value low 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int>v(2*n);
    for(int i=0;i<2*n;i++)
    {
        int x;
        cin >> x;
        v[i]=x;
    }
    sort(v.begin(), v.end());
    int ans=0;
    for(int i=0;i<2*n;i+=2)
    {
        ans+=min(v[i],v[i+1]);
    }
    cout << ans;
    
}
