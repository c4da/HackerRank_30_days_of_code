#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <sstream>
#include <fstream>
#include <iostream>
using namespace std;

/*
Task
Given  names and phone numbers, assemble a phone book that maps friends' names to their respective phone numbers. 
You will then be given an unknown number of names to query your phone book for. 
For each  queried, print the associated entry from your phone book on a new line in the form name=phoneNumber; 
if an entry for  is not found, print Not found instead.
*/

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   int i = 0;
    int entries_count = 0;
    map<string, int> book;
    
    for (string line; std::getline(cin, line);) {
        if (i == 0){
            entries_count = stoi(line);
        } else if (i <= entries_count){
            string s_temp = "";
            vector <string> arr = {};
            stringstream sline(line);
            while (getline(sline, s_temp, ' ')){
              arr.push_back(s_temp);  
            };
            book[arr[0]] = stoi(arr[1]);
        } else {
            if (book.count(line)){
                cout << line << "=" << book[line] << endl;
            } else {
                cout << "Not found" << endl;
            }
        }
        i++;
    }
    return 0;
}
