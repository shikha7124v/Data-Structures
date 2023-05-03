#include<iostream>
using namespace std;

class HeapDeletion{
    public: 
    int arr[100];
    int size;
    HeapDeletion()
    {
        arr[0] = -1;
        size = 0;
    }
    void insert(int val){
        size = size + 1;
        int index = size;
        arr[index] = val;

        while(index > 1){
        int parent = index/2;
        if(arr[parent] > arr[index]){
            swap(arr[parent], arr[index]);
        }
        else{
            return;
        }
        }
    }
    
    void deletion(){
        if(size == 0){
            cout<<"Nothing to delete"<<endl;
        }
        arr[1]= arr[size];
        size = size -1;
         
        int i = 1;
        while(i < size){
            int leftind = 2*i;
            int rightind = 2*i +1;

            if(leftind <size && arr[i] < arr[leftind]){
                swap(arr[i], arr[leftind]);
                i = leftind;
            }
            else if(rightind < size && arr[i] < arr[rightind]){
                swap(arr[i], arr[rightind]);
                i = rightind;
            }
            else{
                return;
            }
        }
    }
    void print(){
        for(int i=1; i<size; i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
    
};
void heapify(int arr[], int n, int i)
    {
        int largest = i;
        int left = 2*i;
        int right = 2*i + 1;

        if(left < n && arr[largest] < arr[left]){
            largest = left;
        }
        if(right < n && arr[largest] < arr[right]){
            largest = right;
        }
        if(largest != i){
            swap(arr[largest], arr[i]);
            heapify(arr, n, largest);
        }
    }
int main()
{
    HeapDeletion h;
    h.insert(12);
    h.insert(13);
    h.insert(17);
    h.insert(19);
    h.insert(20);
    h.insert(22);
    h.insert(26);
    h.print();
    h.deletion();
    h.print();
    int arr2[] = {-1, 54, 53, 55, 52, 50};
    int n = 5;
    for (int i=n/2; i>0; i--){
        heapify(arr2, n, i);
    }
    cout<<"Printing the array now: ";
    for(int i=1; i<=n; i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    return 0;
}
