
#include <iostream>
#include "ring.h"

using namespace std;

int main(int argc, char const *argv[])
{
    ring<string> textring(3);

    textring.add("one");
    textring.add("two");
    textring.add("three");
    textring.add("four");
    textring.add("five");

    for( int i=0;i<textring.size();i++){
        cout << textring.get(i) << endl;
    }
    
    return 0;
}
