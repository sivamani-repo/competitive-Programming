/* Algo Discuss With Greedy_mani
At first glance, one might think of declaring two arrays of size n. However, the actual greediness comes into play when we carefully analyze the problem.
We can observe that the total quantity of juice must be filled into two cans. So, instead of using extra arrays, we can simply calculate the total quantity of juice in the first iteration.
Then, we find the maximum capacity of the two cans, as the problem explicitly states that we need to fill the juice into two cans.
Bingo! If the combined capacity of the two cans is greater than or equal to the total quantity of juice, we can happily return "YES"; otherwise, we return "NO". */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    int n;
    cin >> n;

    ll sum = 0; // oh shit u need to take long long to prevent overflow !!

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        sum += x;
    }

    ll max1 = 0, max2 = 0;

    for (int i = 0; i < n; i++)
    {
        ll y;
        cin >> y;

        if (y > max1)
        {
            max2 = max1;
            max1 = y;
        }
        else if (y > max2)
        {
            max2 = y;
        }
    }

    if (max1 + max2 >= sum)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}