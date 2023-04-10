/*
Given a base- integer, , convert it to binary (base-). 
Then find and print the base- integer denoting the maximum number of consecutive 's in 's binary representation. 
When working with different bases, it is common to show the base as a subscript.
*/
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string n_temp;
    getline(cin, n_temp);
    vector<int> binary = {};
    int n = stoi(ltrim(rtrim(n_temp)));
    
    while (n/2.0f >= 1){
        int m = n % 2;
        n = n/2;
        binary.push_back(m);
    }
    int m = n % 2;
    binary.push_back(m);
    
    std::reverse(binary.begin(), binary.end());

    
    int counter = 0;
    int max = 0;
    for (int x : binary){
    
        if (x == 1){
            ++counter;
        }
        if (max < counter){
            max = counter;
        }
        if (x == 0){
            counter = 0;
        }
    }
    cout<<max<<endl;
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
