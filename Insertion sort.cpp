#include <iostream>
#include <time.h>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

int main()
{
    int n,i,j,temp;
    cout<<"\nEnter the number of elements : ";
    cin>>n;
    while(n<300000)
    {
    int arr[n];
    for(i=0;i<n;i++)
    {
        arr[i]=rand();
    }
    clock_t c=clock();
    for (i = 1; i < n; i++)
    {
        for (j = i; j >= 1; j--)
        {
            if (arr[j] < arr[j-1])
            {
                temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
            else
                break;
        }
    }
    n=n+100;
    clock_t d=clock();
    double x=((double)d-c)/CLOCKS_PER_SEC;
    cout<<"\n"<<x<<endl;
    //printf("%.6f\n",&x);
    }
    //cout<<endl<<(double)clock()<<endl<<(double)CLOCKS_PER_SEC<<endl<<(double)
    //c<<endl;

    /*for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }*/
    return 0;
}
