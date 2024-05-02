#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> vettore = { 23, 4, 190, 34, 0, 44, 98, 1, 33, 75 };

    std::ostream_iterator<int> it(std::cout, " ");
    //output
    std::cout << "output: ";
    for (auto it = vettore.begin(); it != vettore.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    //reverse output
    std::cout << "reversed output: ";
    std::copy(vettore.rbegin(), vettore.rend(), it);
    std::cout << std::endl;

    //min element
    std::vector<int>::iterator min = std::min_element(vettore.begin(), vettore.end());
    std::cout << "min element: " << *min << std::endl;

    //sorting in descending order
    std::sort(vettore.begin(), vettore.end(), std::greater<int>());
    std::cout << "output: ";
    std::copy(vettore.begin(), vettore.end(), it);
    std::cout << std::endl;

    //sorting in ascending order
    std::sort(vettore.begin(), vettore.end(), std::less<int>());
    std::cout << "output: ";
    std::copy(vettore.begin(), vettore.end(), it);
    std::cout << std::endl;

    vettore.push_back(8);
    std::cout << "output: ";
    for (auto it = vettore.begin(); it != vettore.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;



    return 0;
}