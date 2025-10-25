#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //freopen("mowing.in", "r", stdin);
    //freopen("mowing.out", "w", stdout);
    
    vector<vector<int>> lawn(2200, vector<int>(2200, -1));
    int x, y; x = y = 1100;
    
    int timemax = -1;
    
    int n; cin >> n;
    int t = 0;
    
    for (int i = 0; i < n; i++) {
        char direction; int length;
        cin >> direction >> length;
        
        if (direction == 'N') {
            for (int j = 0; j < length; j++) {
                t++;
                y++;
                if (lawn[x][y] == -1) {
                    lawn[x][y] = t;
                }
                else {
                    if (timemax == -1) {
                        timemax = t - lawn[x][y];
                    }
                    else {
                        timemax = min(t - lawn[x][y], timemax);
                    }
                    lawn[x][y] = t;
                }
            }
        }
        if (direction == 'S') {
            for (int j = 0; j < length; j++) {
                t++;
                y--;
                if (lawn[x][y] == -1) {
                    lawn[x][y] = t;
                }
                else {
                    if (timemax == -1) {
                        timemax = t - lawn[x][y];
                    }
                    else {
                        timemax = min(t - lawn[x][y], timemax);
                    }
                    lawn[x][y] = t;
                }
            }
        }
        if (direction == 'E') {
            for (int j = 0; j < length; j++) {
                t++;
                x++;
                if (lawn[x][y] == -1) {
                    lawn[x][y] = t;
                }
                else {
                    if (timemax == -1) {
                        timemax = t - lawn[x][y];
                    }
                    else {
                        timemax = min(t - lawn[x][y], timemax);
                    }
                    lawn[x][y] = t;
                }
            }
        }
        if (direction == 'W') {
            for (int j = 0; j < length; j++) {
                t++;
                x--;
                if (lawn[x][y] == -1) {
                    lawn[x][y] = t;
                }
                else {
                    if (timemax == -1) {
                        timemax = t - lawn[x][y];
                    }
                    else {
                        timemax = min(t - lawn[x][y], timemax);
                    }
                    lawn[x][y] = t;
                }
            }
        }
    }
    cout << timemax;
}
