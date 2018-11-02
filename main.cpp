#include "bird.hpp"

#include <iostream>
#include <string>

void constTest(Aviary const &a)
{
    a[1]->speak(std::cout);
}

int main()
{
    // The output of the program should be this:

    /*
Esko: QUACK
Orly: WHUU
Alfred: QUACK
Alfred flies!
Orly: WHUU
*/

    Aviary a;

    a.addBird(new Duck("Esko"));
    a.addBird(new Owl("Orly"));

    a.addBird(new Duck("Alfred"));

    a.speakAll(std::cout);

    a[2]->fly(std::cout);

    constTest(a);
}
