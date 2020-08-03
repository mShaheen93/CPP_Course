#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    vector<vector<int>> v_2d;

    int n,q;
    
    cin>>n>>q;

    vector<int> v;

    for (int i=0; i<n; i++)
    {
        int mysize;
        cin>>mysize;

        
        v.resize(mysize);

        for (int j=0; j<=mysize; j++)
        {
            int elem;
            cin>>elem;
            // v.push_back(elem);
            v[j]=elem;
        }

        v_2d.push_back(v);
        v.clear();
        v.resize(1);
    }

    for (int i=0; i<q; i++)
    {
        int x,y;
        cin>>x>>y;
        cout<<v_2d[x][y];
    }

    return 0;
}