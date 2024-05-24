#include<iostream>
using namespace std;

int main()
{
    int arr[4]={1,2,3};
    cout<<*arr<<"\n";
    arr[4]=4;
    cout<<arr[4]<<"\n";
    cout<<*(arr+10)<<"\n";//No Bound Checking
    char name[20]="Vivek";
    printf("%s",name);
    return 0;
}