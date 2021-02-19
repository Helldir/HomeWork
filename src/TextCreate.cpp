#include"include\header.h"

namespace HomeFunctions {
using namespace std;

void TextCreate(){
    ofstream osfile("../files/Sonnet.txt");
    osfile << "From naked stones of agony\n"
           << "I will build a house for me;\n"
           << "As a mason all alone\n"
           << "I will raise it, stone by stone,\n"
           << "And every stone where I have bled\n"
           << "Will show a sign of dusky red.\n"
           << "I have not gone the way in vain,\n"
           << "For I have good of all my pain;\n"
           << "My spirit's quiet house will be\n"
           << "Built of naked stones I trod\n"
           << "On roads where I lost sight of God.\n";
    osfile.close();
    ofstream osfile2("../files/Sonnet_2.txt");
    osfile2 << "Sigh no more, ladies, sigh no more,\n"
              << "Men were deceivers ever,\n"
              << "One foot in sea and one on shore,\n"
              << "To one thing constant never:\n"
              << "Then sigh not so, but let them go,\n"
              << "And be you blithe and bonny,\n"
              << "Converting all your sounds of woe\n"
              << "Into Hey nonny, nonny.\n"
              << "Sing no more ditties, sing no moe,\n"
              << "Of dumps so dull and heavy;"
              << "The fraud of men was ever so\n"
              << "Since summer first was leafy\n";
    osfile2.close();
}
}
