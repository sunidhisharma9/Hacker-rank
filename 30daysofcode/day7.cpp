#include<iostream>

using namespace std;



int main()
{
    int n;
    cin >> n;
    int a[n];
    cout<<endl;
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }
    int temp;
    int j,k;
    for(j=0,k=n-1;j<=k;j++,k--)
    { temp=a[j];
     a[j]=a[k];
     a[k]=temp;
        
        
    }
    cout<<endl;
    for(int k=0;k<n;k++)
    {cout<<a[k]<<" ";}
    
   return 0;
}
