// Lecture 2 : by Apna College, basics of c++ in DSA series

#include <iostream>
using namespace std;

int main(){
    cout<<"hello world\nstarting DSA journey";
    int age = 20;
    char grade = 'A';
    float PI = 3.14f;
    bool isSafe = true;


    // type conversion
    char name = 'v';
    int num = name;
    cout<<"\n"<<num<<endl;

    double price = 100.99;
    int newPrice = (int)price;
    cout << newPrice << endl;

    // input in cpp
    int myage;
    cout<<"enter your age :";
    cin>>myage;
    cout<<"your age is : "<<myage<<"\n";

    // type casting
    cout<< "learning type casting\n";
    int ans = (5/(double)2);
    cout<<ans<<endl;
    return 0;



}

// variable types in C++
// 1. int - integer type
// 2. float - decimal point number  
// 3. double - large decimal point number
// 4. char - character type
// 5. bool - boolean type (true/false)
// 6. void - represents absence of type
// 7. wchar_t - wide character type for larger character sets
// 8. short - smaller integer type
// 9. long - larger integer type
// 10. long long - even larger integer type 
// 11. unsigned - non-negative integer type
// 12. signed - signed integer type (can be negative or positive)
// 13. auto - automatically deduced type
// 14. decltype - type of an expression
// 15. nullptr_t - type of the null pointer literal
// 16. enum - user-defined type for enumerations    
// 17. struct - user-defined type for grouping variables
// 18. union - user-defined type for storing different data types in the same memory location
// 19. class - user-defined type for object-oriented programming
// 20. std::string - string type from the C++ Standard Library
// 21. std::vector - dynamic array type from the C++ Standard Library
// 22. std::array - fixed-size array type from the C++ Standard Library
// 23. std::map - associative array type from the C++ Standard Library
// 24. std::set - collection type from the C++ Standard Library 
// 25. std::tuple - fixed-size collection of heterogeneous values from the C++ Standard Library
// 26. std::pair - container to hold two heterogeneous values from the C++ Standard
