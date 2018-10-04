#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    stringstream ss(str);
    vector<int> r;
    int t;
   char c;
    
    while(ss>>t)
    {
        r.push_back(t);
        ss>>c;
    }

   return r; 
}

int main() {
    string str;
	cout<<"Enter a string:\n";
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
