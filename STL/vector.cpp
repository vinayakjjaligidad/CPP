#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<int>a;
    a.push_back(10);
    a.pop_back();
    a.push_back(23);
    int x = a.size();

    sort(a.begin(),a.end());
    vector<int>::iterator it = lower_bound(a.begin(),a.end(),23);
    
    return 0;
}