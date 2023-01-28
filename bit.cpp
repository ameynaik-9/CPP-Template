#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void printBinary(int num)
{
    for (int i = 10; i >= 0; i--)
    {
        cout << ((num >> i) & 1);
    }
    cout << endl;
}

bool chk_ith_bitset(int num, int index)
{
    int n = pow(2, index);
    if (num & n)
    {
        return true;
    }
    return false;
}

int make_ith_bitset(int num, int index)
{
    int ans = num | (1 << index);
    return ans;
}

int make_ith_bitunset(int num, int index)
{
    int ans = num & (~(1 << index));
    return ans;
}

int toggle_ith_bit(int num, int index)
{
    int ans = num ^ (1 << index);
    return ans;
}

int clear_till_ith_bit(int num, int index)
{
    int ans = num&(~((1 << (index + 1)) - 1));
    return ans;
}

bool chk_2power(int num){
    if(!(num&(num-1)))return true;
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (; t--;)
    {
        // printBinary(6);
        // cout<<clear_till_ith_bit(29,3);
    }
    return 0;
}
// 2. Two ki power ke just pehle wala number me saare 1 hote hai binary me
// Conv to lowercase Capital | ' '
// Conv to uppercase Small & '_'
// No of set bits count -----> __builtin_popcount(for integers) and __builtin_popcountll(for long);
