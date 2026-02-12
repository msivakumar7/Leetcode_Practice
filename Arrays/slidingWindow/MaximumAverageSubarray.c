double findMaxAverage(int* nums, int numsSize, int k) {
    int sum = 0;
    for(int i = 0;i < k;i++)
    sum += nums[i];
    double MaxAverage =(double)sum/k;
    int s =0;
    for(int i = k;i < numsSize;i++)
    {
        sum = sum - nums[s++] + nums[i];
        double avg = (double)sum/k;
        if(avg > MaxAverage)
            MaxAverage = avg;
    }
    return MaxAverage;

}
