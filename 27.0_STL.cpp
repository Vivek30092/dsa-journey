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

    // pop_back : remove element from last
    vec.pop_back();

    // at() or []
    cout<<"value at idx3: "<<vec[2]<<" or "<<vec.at(2)<<endl;

    // front(for front element) & back(for back element)
    cout<<"Value at front: "<<vec.front()<<endl;
    cout<<"Value at back: "<<vec.back()<<endl;



    // print ele of vec using for each loop
    cout<<"Values of vec: ";
    for(int val : vec){
        cout<<val<<" ";
    }

    
    return 0;
}