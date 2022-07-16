#include <iostream>
#include<vector>
using namespace std;

class MagicFoo{
    public:
        vector<int> vec;
        MagicFoo(initializer_list<int> list){
            for(initializer_list<int>::iterator it = list.begin(); it != list.end(); ++it){
                vec.push_back(*it);
            }
        }
};
int main(){
    MagicFoo magicFoo  {1,2,3,4,5};
    cout << "magicFoo:" << endl;
    for(vector<int>::iterator it = magicFoo.vec.begin();
                                it != magicFoo.vec.end(); ++it){
        cout << *it << endl;
    }
}