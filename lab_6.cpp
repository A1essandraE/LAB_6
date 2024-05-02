#include <iostream>
#include <vector>


int main{

	std::vector<int> vettore = {3, 65, 34, 138, 25};
    
std::ostream_iterator<int> it(std::cout, ", ");
    for (vettore.begin(), vettore.end()
    std::cout << *it << std::endl;

	return 0;
}