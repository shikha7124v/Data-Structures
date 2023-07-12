#include<bits/stdc++.h>
using namespace std;

// Brute Forse Approach - Using set T.C. - O((n+m)log(n+m)) and S.C. - O(n+m)  
void unionOfArray(vector<int> a, vector<int> b)
{
    set<int> s;
    int n = a.size();
    int m = b.size();
    
    for(int i=0; i<n; i++){
        s.insert(a[i]);
    }
    cout<<endl;
    for(int i=0; i<m; i++){
        s.insert(b[i]);
    }
    cout<<endl;
    int s_size = s.size();
    for(int x: s){
        cout<<x<<" ";
    }
    cout<<endl;
}

//Another solution using map - T.C. - O((n+m)log(n+m)) and S.C. - O(n+m)
vector<int> unionOfArray(vector<int> a, vector<int> b){
    int n = a.size();
    int m = b.size();

    map<int, int> freq;
    vector<int> union_arr;

    for(int i=0; i<n; i++){
        freq[a[i]++];
    }
    for(int i=0; i<m; i++){
        freq[b[i]++];
    }
    for(auto & it:freq){
        union_arr.push_back(it.first);
    }
    for(auto x: union_arr){
        cout<<x<<" ";
    }
    cout<<endl;
}

// Brute Force Approach
vector<int> unionOfArray(vector<int> a, vector<int> b){
    int n = a.size();
    int m = b.size();

    vector<int> Union;
    int i=0, j=0;
    while(i<n && j<m){
        if(a[i] < b[j]){
            if(Union.size() == 0 || Union.back() != a[i]){
                Union.push_back(a[i]);
                i++;
            }
        }
        else{
            if(Union.size() == 0 || Union.back() != b[j]){
                Union.push_back(b[j]);
                j++;
            }
        }
    }
    while(i<n){
        if(Union.back() != a[i]){
            Union.push_back(a[i]);
            i++;
        }
    }
    while(j<m){
        if(Union.back() != b[j]){
            Union.push_back(b[j]);
            j++;
        }
    }
    return Union;
}
int main()
{
    vector<int> a{2,3,5,7,8};
    vector<int> b{1,2,7,8,9};

    for(auto x: a){
        cout<<x<<" ";
    }
    cout<<endl;
    for(auto x: b){
        cout<<x<<" ";
    }
    cout<<endl;
    vector<int> Union = unionOfArray(a, b);
    for(auto it: Union){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}