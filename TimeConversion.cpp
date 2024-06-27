#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    int hh = stoi(s.substr(0, 2)), n = s.size();
    char format = s[n-2];
    if(format == 'A' && hh == 12) {
        s = "00" + s.substr(2, 6);
    } else if((format == 'P' && hh == 12) ||(format == 'A' && hh != 12)) {
        s = s.substr(0, 8);
    } else if(format == 'P') {
        s = to_string(12+hh) + s.substr(2, 6);
    }
    return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
