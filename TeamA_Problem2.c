bool threeConsecutiveOdds(int* arr, int arrSize){
    int count = 0;
    int i = 0;
    
    while(i<arrSize && count <2)
    {
        if(arr[i] %2 == 1)
        {
            count++;
        }
        else
        {
            count = 0;
        }
        i++;
    }
    return count == 2;
}