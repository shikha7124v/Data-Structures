// Search Element in Rotated Sorted Array II
// Problem Statement: Given an integer array arr of size N, sorted in ascending order (may contain duplicate values) and a target value k. Now the array is rotated at some pivot point unknown to you. Return True if k is present and otherwise, return False. 
bool searchInARotatedSortedArrayII(vector<int>&A, int key) {
    int n = A.size();
    int low = 0;
    int high = n-1;
    int mid;
    while(low <= high){
        mid = (low + high)/2;
        if(A[mid] == key) return true;

        if(A[mid] == A[low] && A[mid] == A[high]){
            high = high - 1;
            low = low + 1;
            continue;
        }

        if(A[low] <= A[mid]){
            if(A[low] <= key && key <= A[mid]){
                high = mid - 1;
            }
            else{
                low = low + 1;
            }
        }
        else{
            if(A[mid] <= key && key <= A[high]){
                low = low + 1;
            }
            else{
                high = mid - 1;
            }
        }
    }
    return false;
}