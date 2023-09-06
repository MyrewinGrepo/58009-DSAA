#include <iostream>
using namespace std;

int main() {
  int arr[] = {10,20,30,40,50,60,70,80,90,100},i;
  cout<<"\nThe Number is:\n";
  for(i=0; i<10; i++)
        cout<<arr[i]<<" ";
  int arrSize = sizeof(arr)/sizeof(arr[0]);
  cout << "\nThe size of the array is:\n" << arrSize;
  return 0;
}
