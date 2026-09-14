#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int getMinChange(vector<int> Coins, int V)
{
    int ans = 0;
    int n = Coins.size();
    for (int i = n - 1; i >= 0 && V > 0; i--)
    {
        if (V >= Coins[i])
        {
            ans += V / Coins[i];
            V = V % Coins[i];
        }
    }
    cout << ans;
    return ans;
};

int main()
{
    vector<int> Coins = {1, 2, 5, 10, 20, 50, 100, 500, 2000};
    int V = 590;
    getMinChange(Coins, V);
    return 0;
}