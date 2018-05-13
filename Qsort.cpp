#include <iostream>
using namespace std;
void Qsort(int *a, int first, int last)
{
    if(first >= last) {
        return;
    }
    int left = first, right = last;
    int pivot = a[left];
    while(left < right)
    {
        while(left < right && a[right] >= pivot)
        {
            right--;
        }
        a[left] = a[right];
        while(left < right && a[left] <= pivot)
        {
            left++;
        }
        a[right] = a[left];
    }
    a[left] = pivot;
    Qsort(a, first, left-1);
    Qsort(a, left+1, last);
}

int main()
{
    int nums[] = {1, 4, 2, 7, 5, 3, 8, 3, 10};
    Qsort(nums, 0, sizeof(nums)/sizeof(int) - 1);
    for(int i = 0; i < sizeof(nums)/sizeof(int); ++i)
    {
        std::cout << nums[i] << " ";
    }
    std::cout << "\n";
    return 0;
}
