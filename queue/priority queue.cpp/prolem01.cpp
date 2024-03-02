//https://-------/ph452/video/ph452-33-6-priority-queue-example-problem
/**!
* author: dween_md
* created: 2024-03-02    19:34:50
!**/
#include <bits/stdc++.h>
#define ll long long int
#define asc(v) sort(v.begin(), v.end()) // vectors,pairs,tuples,string
#define dsc(v) sort(v.begin(), v.end(), greater<int>())

using namespace std;

int digit(int x)
{
    return ((int)log10(x)+1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> arr1(n);
    vector<int> arr2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    priority_queue<int> pq1;
    priority_queue<int>pq2;
    for(int i=0;i<n;i++)
    {
        pq1.push(arr1[i]);
        pq2.push(arr2[i]);
    }
    int ans=0;
    while(!pq1.empty())
    {
        int x=pq1.top();
        int y=pq2.top();
        if(x==y)
        {
            pq1.pop();
            pq2.pop();
            continue;

        }
        ans++;
        if(x>y){
            pq1.pop();
            pq1.push(digit(x));

        }
        else{
            pq2.pop();
            pq2.push(digit(y));
        }
    }
    cout<<ans<<endl;

    return 0;
}