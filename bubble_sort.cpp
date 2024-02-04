void bubbleSort(int arr[], int n) 
{
    for(int end = n-1; end > 0; end--; )
    {
        for(int i = 0; i < end; i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
}