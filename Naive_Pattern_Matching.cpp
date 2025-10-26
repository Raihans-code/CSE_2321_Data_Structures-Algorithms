#include <iostream>
#include <string>
using namespace std;

void naivePatternMatch(const string &text, const string &pattern) {
    int n = text.size();//Set N=length of text
    int m = pattern.size();//Set M=length of pattern

    for (int i = 0; i <= n - m; i++) { // i=0 to (N-M)
        int j;
        for (j = 0; j < m; j++) { // j=0 to (M-1)
            if (text[i + j] != pattern[j]) //text[n+m=(0,1,2,...)] != patter[j]
                break;
        }
        if (j == m)
            cout << "Pattern found at index " << i << endl;
    }
}

int main() {
    string text = "ABAAABCDBBABCDDEBCABC";
    string pattern = "ABC";
    naivePatternMatch(text, pattern);
    return 0;
}
