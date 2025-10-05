#include <iostream>
using namespace std;    

class Solution {
   public:
    bool isPalindrome(int n) {
        int original = n;
        int rev = 0;

        while (n > 0) {
            int digit = n % 10;
            rev = rev * 10 + digit;
            n /= 10;
        }
        return (rev == original);
    }
};

int main() {
    Solution obj;
    int n;
    cin >> n;                        
    bool result = obj.isPalindrome(n);

    if (result)
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}