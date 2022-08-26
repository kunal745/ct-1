//NAME - KUNAL
//ROLLNO - 2010990403
//GROUP - G9
//SET - 03
//Q2 - FIND A PAIR WITH GIVEN SUM IN AN ARRAY
#include<iostream>
using namespace std;
int main()
{
    int n,X,s=0;
    cout<<"Enter no. of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter X: ";
    cin>>X;
    
//we use two loops here because we will compare all elements (as the value of i changes) to all other elements(as value of j changes)
//ex- array={1,2,3} and X=3 then we compare 1(i) with all elements then 2(i) with all elements and so and so as value of i and j changes.
    for(int i=0;i<n;i++)    //we use two loops here for comparing elements
    {
        for(int j=i+1;j<n;j++)
        {
            if((arr[i]+arr[j])==X)
            {
                cout<<"("<<arr[i]<<" , "<<arr[j]<<")"<<endl;
            }
        }
    }
}
