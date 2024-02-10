#include<bits/stdc++.h>
using namespace std;

int makeStringEmpty(string S) {
    int n = S.length();
    int cnt = 0;
    for(int i=0;i<n;i++) {
        if(S[i] == 'g' && i+3<n && S[i+1] == 'e' && S[i+2] == 'e' && S[i+3] == 'k') {
            cnt++;
            i += 3;
        }
    }
    int ans = cnt+1;
    if(cnt == 0 || S.substr(0,4) == "geek" || S.substr(n-4,4) == "geek") {
        ans = -1;
    }
    return ans;
}

int main() {
    string S = "gegeekek";
    cout << makeStringEmpty(S) << endl;
    S = "geekkgee";
    cout << makeStringEmpty(S) << endl;
    return 0;
}
