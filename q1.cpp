//NAME - KUNAL
//ROLLNO. - 2010990403
//GROUP - G9
//SET - 03
//Q-1 REARRANGE AN ARRAY WITH ALTERNATE HIGH AND LOW ELEMENTS.
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no. of array elements: ";  //declare the size of array
    cin>>n;

    int a[n];   //declare the array
    
	//input array elements
    for(int i=0;i<n;i++)    
    {
        cin>>a[i];
    }
    
    sort(a,a+n);    		//sorting the entered array 
    
    for(int i=0;i<n;i++)    //swap array elements so that middle element is greater than left and right elements.
    {
        if(i%2!=0 && i!=n-1)    //array elements whose index is odd and is not the last element of array will be swapped.
        {
            swap(a[i],a[i+1]);
        }
    }
    
    for(int i=0;i<n;i++)    //print final array
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}
