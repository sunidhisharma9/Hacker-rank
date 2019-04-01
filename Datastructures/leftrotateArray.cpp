#include <bits/stdc++.h>

using namespace std;

  

void leftRotate(int arr[], int d, int n) 
{   int temp ,i,j;
    for (int i = 0; i < d; i++) 
    {   temp = arr[0];
        for (j = 0; j < n - 1; j++) 
       { arr[j] = arr[j + 1]; }
       arr[j]=temp;
  
    }
       
} 

void printArray(int arr[], int n) 
{ 
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " "; 
} 




int main()
{
   
    int n,d;
    cin>>n;
    cin>>d;
    int arr[1000000];

    for (int i = 0; i < n; i++) {
       cin>>arr[i];
    }
    leftRotate(arr,d,n);
    printArray(arr,n);

   
  

   

    return 0;

}

