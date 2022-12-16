#include<bits/stdc++.h>

using namespace std;

int main() {

    int n; cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int cnt = 0;
    map < int, int > mymap;

    for (int i = 0; i < n; i++) {
        int x = arr[i];
        if (mymap.find(x) == mymap.end()) {
            mymap[x] = cnt++;
        }
    }


}
