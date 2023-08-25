// This approach is simillar to the merge sort. Let’s build the intuition for this approach using a modified version of the given question.
// Assume two sorted arrays are given i.e. a1[] = {2, 3, 5, 6} and a2[] = {2, 2, 4, 4, 8}. Now, we have to count the pairs i.e. a1[i] and a2[j] such that a1[i] > a2[j]. 

int merge(vector<int> &arr,int low ,int mid, int high){

    vector<int>temp;
    int left = low;
    int right = mid + 1;
    int cnt =0;

    while(left <= mid && right <= high){

        if(arr[left] <= arr[right]){

            temp.push_back(arr[left]);

            left++;

        }

        else{

            temp.push_back(arr[right]);

            cnt+=(mid-left+1);

            right++;

        }

    }

    while(left <= mid){

        temp.push_back(arr[left]);

        left++;

    }

    while(right <= high){

        temp.push_back(arr[right]);

        right++;

    }
  for(int i=low ; i<= high ; i++){

        arr[i] = temp[i-low];

    }
    return cnt;
}

int mergeSort(vector<int>&arr,int low,int high){
    int cnt = 0;
    if(low>=high) return cnt;
    int mid=(low+high)/2;
    cnt+= mergeSort(arr,low,mid);
    cnt+=mergeSort(arr, mid+1, high);
    cnt+=merge(arr, low, mid, high);
    return cnt;
}

int numberOfInversions(vector<int>&a, int n) {
    return mergeSort(a,0,n-1);
}