double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    if (nums1Size > nums2Size) { // Ensuring number1 is the smaller array
        int* temp = nums1;
        nums1 = nums2;
        nums2 = temp;

        int tempSize = nums1Size;
        nums1Size = nums2Size;
        nums2Size = tempSize;
    }

    int low = 0, high = nums1Size, halfLen = (nums1Size + nums2Size + 1) / 2;
    
    while (low <= high) {
        int mid1 = (low + high) / 2;
        int mid2 = halfLen - mid1;

        int left1 = (mid1 == 0) ? -1000001 : nums1[mid1 - 1];
        int right1 = (mid1 == nums1Size) ? 1000001 : nums1[mid1];
        int left2 = (mid2 == 0) ? -1000001 : nums2[mid2 - 1];
        int right2 = (mid2 == nums2Size) ? 1000001 : nums2[mid2];

        if (left1 <= right2 && left2 <= right1) { // Found correct partition
            if ((nums1Size + nums2Size) % 2 == 0) {
                return ((double)(fmax(left1, left2) + fmin(right1, right2))) / 2.0;
            } else {
                return (double)fmax(left1, left2);
            }
        } else if (left1 > right2) {
            high = mid1 - 1;
        } else {
            low = mid1 + 1;
        }
    }
    return 0.0; // Should never reach here
}