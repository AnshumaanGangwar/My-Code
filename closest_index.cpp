int mad(int n)
{
    if(n>=0)
    {
        return n;
    }
    else
    {
        return n*(-1);
    }
}




int binarySearchClosest(int arr[], int left, int right, int target)
{
    int min;
    int min_index;
    while(left <= right)
    {
        int middle = (left + right)/2;
        double pre_diff = 1000000000;
        int curr_diff = mad(target - arr[middle]);
        if(arr[middle] == target)
        {
            return middle;
        }
        else if( curr_diff < pre_diff)
        {
            right = middle-1;
            pre_diff = curr_diff;
            min = curr_diff;
            min_index = middle;
        }
        else
        {
            left = middle+1;
            pre_diff = curr_diff;
        }
    }
    return min_index;
    
    
}