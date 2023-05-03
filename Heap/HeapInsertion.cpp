#include <iostream>
using namespace std;

class HeapInsertion
{
public:
    int arr[100];
    int size;
    HeapInsertion()
    {
        arr[0] = -1;
        size = 0;
    }
    void insert(int val)
    {
        size = size + 1;
        int index = size;
        arr[index] = val;

        while (index > 1)
        {
            int parent = index / 2;

            if (arr[parent] > arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
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
int main()
{
    HeapInsertion h;
    
    h.insert(90);
    h.insert(100);
    h.insert(110);
    h.insert(120);
    h.insert(130);
    h.insert(140);
    h.insert(10);
    h.insert(20);
    h.insert(30);
    h.insert(40);
    h.insert(50);
    h.insert(60);
    h.insert(70);
    h.insert(80);
    h.insert(150);
    h.insert(160);
    h.insert(170);
    h.insert(180);
    h.insert(190);
    h.print();
}
