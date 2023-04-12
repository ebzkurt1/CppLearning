#include <iostream>


void copy_func(){
    int v1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int v2[10];

    for (auto i = 0; i != 10; ++i){
        v2[i] = v1[i];
    }
}


void print(){
    int v[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (auto x : v){
        std::cout << x << '\n';
    }

    for(auto x: {12, 23, 34, 45, 56, 67, 78, 89, 90}){
        std::cout << x << '\n';
    }
    // If we didn’t want to copy the values from v into the variable x, but rather just have x refer to an
    // element, we could write:
    // the unary suffix & means “give me the address of the thing I’m following”
    for (auto& x : v){
        std::cout << x << '\n';
    }
}


// It is wise to check whether the pointer actually points to something before we try to use it:
int count_x(char* p, char x){
    if (p == nullptr) return 0;
    int count = 0;
    // Note how we can move a pointer to point to the next element of an array using ++ and that we can
    // leave out the initializer in a for-statement if we don’t need it.
    for (; *p != 0; ++p){
        if (*p == x) ++count;
    }
    return count;
}


int main(){
    char v[6];  // array of elements of type char
    char* p;    // pointer to char


    char* p1 = &v[0];   // pointer to first element of v
    char x = *p1;       // *p1 is the object p1 points to


    return 0;
}
