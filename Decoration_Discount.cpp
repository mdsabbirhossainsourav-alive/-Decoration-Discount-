#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++) 
        {
            cin >> a[i];
        }
        int min_cst = INT_MAX;
        for(int i=0; i<n; i++) 
        {
            for(int j=0; j<n; j++)
            {
                if(i != j) 
                {
                    int cst;
                    if(j == i+1) 
                    {
                        cst = a[i] + a[j]/2;
                    } 
                    else 
                    {
                        cst = a[i] + a[j];
                    }
                    min_cst = min(min_cst, cst);
                }
            }
        }
        cout << min_cst << endl;
    }
    return 0;
}
