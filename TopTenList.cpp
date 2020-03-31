//Manages a list of top ten hyperlinks
#include <iostream>
#include <string>
#include "TopTenList.h"
#include "Hyperlink.h"

using std::string;
using std::cout;
using std::endl;

TopTenList::TopTenList(string title)
{
    list_title = title;
    _list.resize(10);
}

void TopTenList::set_at(int index, Hyperlink link)
{
   _list.insert(_list.begin() + index-1, link);
}

Hyperlink TopTenList::get(int index)
{
    return _list.at(index-1); //subtract 1 to account for zero-indexing
}

<<<<<<< HEAD
string TopTenList::get_title()
{
    return list_title;
}

void TopTenList::printTopTen()
{
    for(int i = 0; i < _list.size(); i++)
    {
        cout << i+1 << ". " << _list[i].text << endl;
    }
}
=======
}
>>>>>>> 46774f7044b1dd9a87586c360ea8c3509f825020
