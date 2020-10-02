#include <iostream>
using namespace std;
enum class Fruit { apple, orange, pear };
enum class Color { red, green, orange };

template <typename T> struct Traits;

// Define specializations for the Traits class template here.
template <class T> struct Traits{
    private:
    static const string colors[3];
    static const string fruits[3];
    static const string UNK;

    public:
    static string name(int value){
        return ((value > 2) || (value < 0)) ? UNK : (typeid(T) == typeid(Color) ? colors[value] : fruits[value]);
    }
};
template<class T> const string Traits<T>::colors[3] = {"red", "green", "orange"};
template<class T> const string Traits<T>::fruits[3] = {"apple", "orange", "pear"};
template<class T> const string Traits<T>::UNK = "unknown";
#

int main()
{
	int t = 0; std::cin >> t;

    for (int i=0; i!=t; ++i) {
        int index1; std::cin >> index1;
        int index2; std::cin >> index2;
        cout << Traits<Color>::name(index1) << " ";
        cout << Traits<Fruit>::name(index2) << "\n";
    }
}
