#include <iostream>
using std::cout;
using std::endl;
template<class T>
T max(T x, T y)
{
    return (x > y) ? x : y;
}
template<class T>
void swap(T& par1, T& par2)
{
    T temp;
    temp = par1;
    par1 = par2;
    par2 = temp;
}

int main()
{
    cout << "max(1,5): " << max(1, 5) << endl;
    cout << "max(1.2,2.1): " << max(1.2, 2.1) << endl;
    cout << "max(1.2,2.1): " << max<double>(1, 2.1) << endl;
    int x = 50;
    int y = 100;
    swap(x, y);
    cout << "x: " << x << " y: " << y << endl;
    const char* text1 = "abcd";
    const char* text2 = "efgh";
    swap(text1, text2);
    cout << "text1: " << text1 << " text2: " << text2 << endl;
}