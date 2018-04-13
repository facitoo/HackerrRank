/*------------------------------------------ Facitoo -------------------------------------------------
  c++ code for kangroo jump question on HackerrRank 
        approach: 1. Checking for the truth conditions that are if the velocity and position is same.
                  2. Applying the formula of AP(arthamtic progression) for calculationg the same term at repetations of 'N' itrations.
*/
#include <bits/stdc++.h>

using namespace std;

string kangaroo(int position_1, int velocity_1, int position_2, int velocity_2) {
        if(position_1==position_2){
            return velocity_1==velocity_2 ? "YES" : "NO";
        } else if (velocity_1==velocity_2) {
            return "NO";
        }
          else{
            return (position_1-position_2)/(velocity_2-velocity_1) > 0 && (position_1-position_2)%(velocity_2-velocity_1) == 0 ? "YES" : "NO" ;
        }
}

int main() {
    int position_1;
    int velocity_1;
    int position_2;
    int velocity_2;
    cin >> position_1 >> velocity_1 >> position_2 >> velocity_2;
    string result = kangaroo(position_1, velocity_1, position_2, velocity_2);
    cout << result << endl;
    return 0;
}
