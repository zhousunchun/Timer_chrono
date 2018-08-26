#include <iostream>
#include "Timer/timer.h"
#include "Timer/timer.cpp"
// enum TimeExt{Sec,MSec,MicroSec,NSec};
using namespace std;

int main(int argc, char **argv) {
    Timer timer;
    timer.start();
    
    std::cout << "Hello, world!" << std::endl;
    timer.stop();

    timer.print_elapsed_time(TimeExt::Sec);
    return 0;
}
