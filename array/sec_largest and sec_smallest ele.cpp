vector<int> getSecondOrderElements(int n, vector<int> a)
{
    // Write your code here.
    int largest = INT_MIN;
    int secondLargest = -1;

    int smallest = INT_MAX;
    int secondSmallest = -1;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > largest)
        {
            secondLargest = largest;
            largest = a[i];
        }
        else if (a[i] > secondLargest && a[i] != largest)
        {
            secondLargest = a[i];
        }
        if (a[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = a[i];
        }
        else if (a[i] < secondSmallest && a[i] != smallest)
        {
            secondSmallest = a[i];
        }
    }
    return {secondLargest, secondSmallest};
}
