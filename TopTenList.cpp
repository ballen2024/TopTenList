//Manages a list of top ten hyperlinks
#include <iostream>
#include <string>
#include "TopTenList.h"
#include "Hyperlink.h"
#include "IDirectionable.h"

using std::string;
using std::cout;
using std::endl;

TopTenList::TopTenList()
{
    _list.resize(10);
}

void TopTenList::set_at(int index, Hyperlink link)
{
    _list[index-1] = link;
}

Hyperlink TopTenList::get(int index)
{
    return _list.at(index-1); //subtract 1 to account for zero-indexing
}

// string TopTenList::get_title()
// {
//     return list_title;
// }

void TopTenList::printTopTen()
{
    for(int i = 0; i < _list.size(); i++)
    {
        cout << i+1 << ". " << _list[i].text << endl;
    }
}

void TopTenList::display_forward()
{
    cout << "Printing Top Ten forward" << endl;
    for(int i = 0; i < _list.size(); i++)
    {
        cout << i+1 << ". " << _list[i].text << endl;
    }
}

void TopTenList::display_backward()
{
    cout << "Printing Top Ten backward" << endl;
    for(int i = _list.size()-1; i >= 0; i--)
    {
        cout << i+1 << ". " << _list[i].text << endl;
    }
}