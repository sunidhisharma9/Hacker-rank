#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    
    long n;
    cin>>n;
    
    string name;
    long long num;
      map<string,long long> phonebook;
    for (int i=0; i<n; i++)
    {
        cin>>name;
        cin>>num;
        phonebook.insert(make_pair(name,num));
    }
    while(cin>>name)
    {
        if (phonebook.find(name)!=phonebook.end())
            cout<<name<<"="<<phonebook[name]<<"\n";
        else
            cout<<"Not found"<<"\n";
    }
    return 0;
}
