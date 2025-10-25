#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios::sync_stdio(false);
    // freopen("r", file.in, stdin);
    // freopen("w", file.out, stdout);
    
    int age;
    string name;
    cin >> age >> name;
    if (name != "Bobby") {
        for (int i = 0; i < age; i++) {
                cout << "happy bday " << endl;
        }
    }
    else {
        cout << "no.";
    }
    cout << age;
    return 0;
}
