#include<iostream>
#include<vector>
#include<algorithm>
#include <functional>

using namespace std;


struct Counter {
    int mutable count = 0;
    std::function<int (double)> callback;
    Counter(std::function<int (double)> func )
    : callback(func), count(0)
    { }

    int operator()(double i) const
    {
        count = count + 1;
        return callback(i);
    }
};


int f(double d)
{
     return static_cast<int>(2*d); 
}

int g(int i){
    cout<<"something"<<endl;
    return i;
}
void a(int i){
    cout<<i<<endl;
}

Counter cf(f);

int main()
{
    //cf.();
    cf(2.3); 
    cf(5.4);
    //cf(5);
    cout << cf.count << endl;
}
