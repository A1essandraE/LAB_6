#include <iostream>
#include <vector>
#include <algorithm>

void output(std::vector<int> vector) {
    for (auto it = vector.begin(); it != vector.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<int> vettore = { 23, 4, 190, 34, 0, 44, 98, 1, 33, 75, 34, 93, 27, 3, 1, 9, 9, 27 };

    std::ostream_iterator<int> it(std::cout, " ");
    //output
    std::cout << "output: " << std::endl;;
    std::copy(vettore.begin(), vettore.end(), it);
    std::cout << std::endl;

    //reverse output
    std::cout << "reversed output: " << std::endl;;
    std::copy(vettore.rbegin(), vettore.rend(), it);
    std::cout << std::endl;

    //min element
    std::vector<int>::iterator min = std::min_element(vettore.begin(), vettore.end());
    std::cout << "min element: " << *min << std::endl;

    //erasing all even numbers
    for (std::vector<int>::iterator it = vettore.begin(); it != vettore.end(); ) {
        if (*it % 2 == 0)
            it = vettore.erase(it);
        else
            ++it;
    }
    std::cout << "output after erasing all even elements: " << std::endl;
    output(vettore);

    //sorting in descending order
    std::sort(vettore.begin(), vettore.end(), std::greater<int>());
    std::cout << "output after sorting in descending order: " << std::endl;
    std::copy(vettore.begin(), vettore.end(), it);
    std::cout << std::endl;

    //sorting in ascending order
    std::sort(vettore.begin(), vettore.end(), std::less<int>());
    std::cout << "output after sorting in ascending order: " << std::endl;
    std::copy(vettore.begin(), vettore.end(), it);
    std::cout << std::endl;

    vettore.push_back(8);
    std::cout << "output after adding random number: " << std::endl;;
    for (auto it = vettore.begin(); it != vettore.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    //index of an added element
    std::vector<int>::iterator elem = std::find(vettore.begin(), vettore.end(), 8);
    if (elem != vettore.end())
        std::cout << "the element is found at index [" << std::distance(vettore.begin(), elem) << "]" << std::endl;
    else
        std::cout << "the element is not found" << std::endl;

    //deleting all the duplicates
    auto unique = std::unique(vettore.begin(), vettore.end());
    vettore.resize(std::distance(vettore.begin(), unique));
    std::cout << "output after removing all duplicates: " << std::endl;
    output(vettore);

    return 0;
}
