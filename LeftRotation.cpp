// HackerRank Problem
#include <bits/stdc++.h>

using namespace std;
int n,d,i=0;
int get_index(int i)
{
    int index = (i+(n-d));
    if( index >= n) index = abs(n - index);
    return index;
}
void printArray(int *a)
{
    for(int j =0; j<n; j++)
        {
            cout<<a[j]<<" ";
        }
}
void rotLeft(int *a)
{
    int temp[n];
    i=0;
    while(i < n)
    {
       temp[get_index(i)] = a[i];i++;
    }
    printArray(temp);
}
int main()
{
    cin>>n;
    cin>>d;

    int a[n];
    while(i < n )
    {
        cin>>a[i];
        i++;
    }
    rotLeft(a);
    return 0;
}
