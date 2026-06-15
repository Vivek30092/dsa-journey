// Standard Template Library 
/*
1. Containers
2. Algorithms
3. Iterators
4. Functors
*/

#include<iostream>
#include<vector>
using namespace std;

void analyze(vector<int> & vec){
    cout<<"Size of vec: "<<vec.size()<<"    ";
    cout<<"Cap. of vec: "<<vec.capacity()<<endl;
}
int main(){
    // Vectors(containers)
    /* initialization:
    vector<int> vec = {1,2,3}
imp:vector<int> vec(3,10)   size : 3 , values : 10(all)
    vector<int> vec2(vec1)  */
    vector<int> vec;
    cout<<vec.size()<<endl;

    // push at back of vector
    vec.push_back(1);
    analyze(vec);
    vec.push_back(2);
    analyze(vec);
    vec.push_back(3);
    analyze(vec);
    // emplace_back
    vec.emplace_back(6);
    vec.push_back(5);
    vec.push_back(21);
    vec.push_back(12);
    vec.push_back(9);
    
    // pop_back : remove element from last
    vec.pop_back();

    // at() or []
    cout<<"value at idx3: "<<vec[2]<<" or "<<vec.at(2)<<endl;

    // front(for front element) & back(for back element)
    cout<<"Value at front: "<<vec.front()<<endl;
    cout<<"Value at back: "<<vec.back()<<endl;

    // erase() TC:O(n), changes size BUT NOT capacity
    vec.erase(vec.begin());
    vec.erase(vec.begin() + 1);
    // delete values in range
    // vec.erase(start,end)         [start(included), end(excluded))
    vec.erase(vec.begin()+1,vec.begin()+3);


    // insert: values at middle(14 at index 2)
    vec.insert(vec.begin()+2,14);       //insert(position, value)


    // clear: clear values of vector, capacity REMAIN SAME
    vec.clear();
    analyze(vec);
    cout<<"empty vec: "<<vec.empty()<<endl;     // 1: empty, 0: not empty

    // print ele of vec using for each loop
    cout<<"Values of vec: ";
    for(int val : vec){
        cout<<val<<" ";
    }

    
    return 0;
}