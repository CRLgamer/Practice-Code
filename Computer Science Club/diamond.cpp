#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios::sync_stdio(false);
    freopen("r", diamond.in, stdin);
    freopen("w", diamond.out, stdout);
    
    int n, k; cin >> n >> k;
    
    vector<int> diamonds(n);
    
    for (int i = 0; i < n; i++) {
        cin >> diamonds[i];
    }
    
    sort(diamonds.begin(), diamonds.end());
    
    int left, right;
    left = right = 0;
    
    int dmax = 0;
    
    while (right < diamonds.size()) {
        if (diamonds[right] - diamonds[left] <= k) {
            dmax = max(dmax, right - left + 1);
            right++;
        }
        else {
            left++;
        }
    }
    
    cout << dmax;
}
