#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string> arr1;
    vector<string> arr2;
    arr1.push_back("0");
    arr1.push_back("1");
    for(int i=2;i<=n;i++)
    {
        arr2.clear();
        for(int j=0;j<arr1.size();j++)
            arr2.push_back(arr1[arr1.size()-1-j]);
        for(int j=0;j<arr1.size();j++)
            arr1[j]="0"+arr1[j];
        for(int j=0;j<arr2.size();j++)
            arr2[j]="1"+arr2[j];
        for(int j=0;j<arr2.size();j++)
            arr1.push_back(arr2[j]);
    }
    for(int i=0;i<arr1.size();i++)
    cout<<arr1[i]+" ";
    return 0;
}
