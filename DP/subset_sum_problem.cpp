// https://practice.geeksforgeeks.org/problems/subset-sum-problem2014/1

bool isSubsetSum(int arr[], int n, int sum)
{
    bool subset[sum];

    for (int i = 0; i <= sum; i++)
    {
        subset[i] = false;
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < sum)
        {
            if (subset[sum - arr[i]] == true)
            {
                return true;
            }
            subset[arr[i]] = true;
        }
    }
    return false;
}