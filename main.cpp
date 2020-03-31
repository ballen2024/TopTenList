#include <iostream>
#include <vector>
#include "Hyperlink.h"
#include "TopTenList.h"
#include "IDirectionable.h"

using std::cout;
using std::endl;

int main()
{
    TopTenList* languages = new TopTenList();
    Hyperlink cpp;

    cpp.text = "C++";
    cpp.url = "https://www.cplusplus.com/";
    languages->set_at(1, cpp);

    languages->display_forward();
    languages->display_backward();

    return 0;
}
