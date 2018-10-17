#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
   
    string s;
  int n;
    cin>>n;
    string even, odd;
   
    for(int j=0;j<n;j++)
    {
   cin>>s; 
    even="";
    odd="";
   int l=s.length(); 
   
     for(int i=0;i<l;i++)
    { if(i%2==0)
    { even+=s[i];
    }
    else if(i%2!=0)
    { odd+=s[i];
    }}
    
    
   cout<<even<<" "<<odd;
        cout<<endl;
    }
     return 0;
}
