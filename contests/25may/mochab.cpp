#include <bits/stdc++.h>
using namespace std;

bool is_beautiful(const std::vector<long long>& array) {
    long long first_min = LLONG_MAX, second_min = LLONG_MAX;
    for (long long num : array) {
        if (num < first_min) {
            
            if(first_min%num!=0){
                second_min = first_min;
            }
            first_min = num;
        } else if (num < second_min && num != first_min && num%first_min!=0) {
            second_min = num;
        }
    }
    for (long long num : array) {
        if (num % first_min != 0 && num % second_min != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;
        std::vector<long long> array(n);

        for (int i = 0; i < n; ++i) {
            std::cin >> array[i];
        }

        if (is_beautiful(array)) {
            std::cout << "Yes" << std::endl;
        } else {
            std::cout << "No" << std::endl;
        }
    }

    return 0;
}