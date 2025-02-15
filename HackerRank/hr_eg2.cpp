//print the lowercase English word corresponding to the number

#include <bits/stdc++.h>

using namespace std;

#include <iostream>
#include <sstream>

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    if (n>=1 && n<=9) {
        std::string words[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
        cout << words[n] << endl;
    } else if (n>9) {
        cout << "Greater than 9" << endl;
    } else {
        cout << "N/A" << endl;
    }

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
