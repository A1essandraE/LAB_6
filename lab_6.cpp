#include <iostream>
#include <vector>


int main{

	std::vector<int> vettore = {3, 65, 34, 138, 25};
    
    std::ostream_iterator<int> vettore_it;
    std::cout << *vettore_it << std::endl;

	return 0;
}