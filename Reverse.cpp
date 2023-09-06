#include<iostream>
using namespace std;
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10,}, i;
    cout<<"\nThe Number is:\n";
    for(i=0; i<10; i++)
        cout<<arr[i]<<" ";
    cout<<"\n\nThe Reverse of Number is:\n";
    for(i=(10-1); i>=0; i--)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}

