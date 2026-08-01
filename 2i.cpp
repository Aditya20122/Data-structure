#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"enter number of elements"<<endl;
    cin>> n;
    
    int arr[n];
    cout<<"enter array elements"<<endl;
    for(int i=0;i<n;i++)
    {
    cin>>arr[i];
    }   
    int *ptr = arr + n-1;
    cout<<"array in reverse order"<<endl;
   
     for(int i=0;i<n;i++)
     {
        cout<< *ptr << endl;
        ptr--;
     }
return 0;  
}
