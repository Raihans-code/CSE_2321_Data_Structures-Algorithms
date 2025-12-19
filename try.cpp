#include <iostream>
#include <list>

int main()
{
    std::list<int> li = {1,2,3,4,5};
    
    li.push_back(6);
    li.push_back(7);

    std::list<int>::iterator it = li.begin();

    while(it!= li.end())
    {
        std::cout << *it << " ";
        ++it;
    }

    std::cout << '\n';
}