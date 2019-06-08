#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n,x,count,max;
    cin >> n;
    
    x=0;
    count=0;
    max=0;
   
     while(n){
        x = n%2;
        n = floor(n/2);
        if(x==1){
            count++;
        }
        else{
            if(count>max){
              max=count;
            }
            count=0;
        }
    }
    
   if(max>=count){
        cout<<max<<endl;
    }
    else
    {
        cout<<count<<endl;
    }
   return 0;     
}
