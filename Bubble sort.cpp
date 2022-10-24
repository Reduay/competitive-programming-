#include<iostream>
 using namespace std;
  int main () 
  { int i, j,temp,pass=0; 
  int n;
  cin>>n;
  int a[n]; 
  
   for(i = 0; i<n; i++) {
       cin>>a[i];
     }
      
     for(i = 0; i<n; i++) { 
     for(j = i+1; j<n; j++) 
     { if(a[j] < a[i]) { 
     temp = a[i]; 
     a[i] = a[j]; 
     a[j] = temp; } } 
     pass++; 
     } 
     cout<<"Array is sorted in "<<pass<<" swaps."<<endl;
     cout <<"First element: ";
      
      cout <<a[0];
      cout<<"\nLast element: ";
      cout<<a[n-1]; 
      return 0; }
 
