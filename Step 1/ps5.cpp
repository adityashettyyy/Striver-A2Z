#include <iostream>
using namespace std;    

class Solution {
public:
    int reverseNumber(int n) {
        int rev = 0;
        while (n > 0) {
            int digit = n % 10;
            rev = rev * 10 + digit;
            n /= 10;
        }
        return rev;
    }
};

int main() {
    Solution obj;
    int n;
    cin >> n;
    cout << obj.reverseNumber(n) << endl;
    return 0;
}
