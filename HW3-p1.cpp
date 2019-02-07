#include <iostream>
#include <cassert>

using namespace std;

class Bag{
public:
    typedef std::size_t size_type;
    static const size_type CAPACITY = 1000;
    Bag();
    Bag(int arr[], size_type size);
    size_type size() const;
    size_type count(int target) const;
    int operator [](size_type pos) const{return data_[pos];}
    void insert(int target);
    void operator += (const Bag & b);
    bool erase_one(int target);
    size_type erase(int target);
private:
    int data_[CAPACITY];
    size_type  size_;
};

void Bag::insert(int target){
    assert(size()<CAPACITY);    //Adds the target to Bag if its current size is less than the max capacity
    data_[size_]=target;        //Puts the target int at the end of the array Bag
    size_++;                    //Increments the size to include the new target at the end of the array
}

int main() {
    return 0;
}