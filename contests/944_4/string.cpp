#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main(){

    int T;
    cin>>T;
    while(T>0){
        string s;
        cin >> s;

        bool found = false;
        for (int i = 0; i < s.length() - 1; ++i) {
            if (s[i] != s[i + 1]) {
                // Swap characters at positions i and i + 1
                std::swap(s[i], s[i + 1]);
                found = true;
                break;
            }
        }
        if (found) {
            // If a swap was performed, output "YES" and the new string
            std::cout << "YES\n" << s << "\n";
        } else {
            // If no swap was possible, output "NO"
            std::cout << "NO\n";
        }

        T--;
    }

}