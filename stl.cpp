#include <map>
#include <list>
#include <iostream>

using namespace std;

int main()
{
    //http://www.cplusplus.com/reference/map/map/
    //Map
    map<int, string> mList;

    mList[0] = "January";
    mList[1] = "February";
    mList[2] = "March";
    mList[3] = "April";
    mList[4] = "May";

    map<int, string>::iterator it;

    // Why ++it ? for performance  https://blog.csdn.net/yangxuan0261/article/details/50414855
    for (it = mList.begin(); it != mList.end(); ++it)
    {
        cout << "key" << it->first << "value" << it->second << endl;
    }

    it = mList.find(2);

    cout << "val:" << it->second << endl;

    it = mList.find(6); //Get iterator to element

    //没有找到元素位置则返回end
    //end是map的尾部,没有实际元素,可以 iter = map.end(); iter --;指向map中最后一个元素

    if (it == mList.end())
    {
        cout << "Not Found" << endl;
    }

    mList.erase(it);

    //Count elements with a specific key
    int mCount = mList.count(6);

    //This can be used as contains
    if (mCount == 0)
    {
        cout << "Not Containing key 6" << endl;
    }

    //List

    //http://www.cplusplus.com/reference/list/list/

    // Sequence
    //      Elements in sequence containers are ordered in a strict linear sequence. Individual elements are accessed by their position in this sequence.
    // Doubly-linked list
    //      Each element keeps information on how to locate the next and the previous elements, allowing constant time insert and erase operations before or after a specific element (even of entire ranges), but no direct random access.
    // Allocator-aware
    //      The container uses an allocator object to dynamically handle its storage needs.
    list<int> nList;
    nList.push_back(23);
    nList.push_back(82);
    nList.push_back(12);

    list<int>::reverse_iterator nIt;

    for (nIt = nList.rbegin(); nIt != nList.rend(); nIt++)
    {
        cout << *nIt << endl;
    }

    cout << "2nd: " << *++nList.begin() << endl;
}