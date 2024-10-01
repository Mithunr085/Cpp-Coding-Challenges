#include <bits/stdc++.h>
using namespace std;
// not array related but tricky
int main()
{

    int n, res = 0, pow = 1;
    cout << "Enter the Number : ";
    cin >> n;
    while (n > 0) // 102304455
    {
        int last = n % 10;
        if (last % 2 != 0) // select only odd digit
        {
            last += 2;              // increment by 2 for next odd number
            res = res + pow * last; // formula to store the result
            pow *= 10;              // to keep track of number places like units,tenth,hundredth....
        }
        n /= 10;
    }
    cout << res;
    return 0;
}
/*
Input
102304455
Output : to print only the next odd digit for the particular odd digit in th input
3577
*/