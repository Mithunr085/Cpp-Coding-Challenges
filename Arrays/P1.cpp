#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Number of Elements in Array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the Elements of Array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << (arr[i] * 10) + (arr[i] + 2) << " ";
    }
    return 0;
}
/*
Input
[2,6,4,3,7,5,3]
Output
[24,68,46,35,79,57,35]
explaination :
for eg in input there is 2 so in output we need to print 2 along with its consecutive number by difference =1,,, i.e: for 2 next consecutive number differing by 1 is 4 so output is 24...
*/
