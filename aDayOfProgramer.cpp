#include <bits/stdc++.h>

using namespace std;

// Complete the solve function below.
 string solve(int y){
    int d = 13;
    if(!(y%4) && (y < 1918 || y%100 || !(y%400))) d--;
    if(y == 1918) d = 26;
    return to_string(d) + ".09." + to_string(y);
}



int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int year;
    cin >> year;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = solve(year);

    fout << result << "\n";

    fout.close();

    return 0;
}
