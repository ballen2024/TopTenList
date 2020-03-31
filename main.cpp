#include <iostream>
#include <vector>
#include "Hyperlink.h"
#include "TopTenList.h"

using std::cout;
using std::endl;

int main()
{
    TopTenList* languages = new TopTenList();
    Hyperlink cpp;

    cpp.text = "C++";
    cpp.url = "https://www.cplusplus.com/";
    languages->set_at(1, cpp);

<<<<<<< HEAD
    cout<<"Top Ten "<<languages->get_title()<<"\n";
    languages->printTopTen();
=======
>>>>>>> 46774f7044b1dd9a87586c360ea8c3509f825020
    return 0;
}
