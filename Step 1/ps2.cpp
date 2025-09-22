#include <iostream>
using namespace std;

class Solution {
   public:
    void studentGrade(int marks) {
        if (marks >= 90 && marks<= 100) {
            cout << "Grade A" << endl;
        } else if (marks >= 70 && marks< 90) {
            cout << "Grade B" << endl;
        } else if (marks >= 50 &&  marks< 70) {
            cout << "Grade C" << endl;
        } else {
            cout << "Fail" << endl;
        }
    }
};
int main() {
    Solution obj;
    int marks;

    cout << "Enter marks: ";
    cin >> marks;

    obj.studentGrade(marks);

    return 0;
}