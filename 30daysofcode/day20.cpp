#include <bits/stdc++.h>
#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int a_i = 0; a_i < n; a_i++){
    	cin >> a[a_i];
    }
   
    int m=0;
    for(int i=0;i<n;i++)
    {      int count=0;
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+i])
        {
           swap(a[j],a[j+1]);
             count++;}
           
        }
            m=m+count;
        
          if (count= 0) {
         break; }
    }
         
    }
  
    cout<<endl<<"Array sorted in "<<m<<"swaps.\n";
    cout<<"First Element: "<<a[0]<<endl;
    cout<<"Last Element: "<<a[n-1];
    return 0;
}
