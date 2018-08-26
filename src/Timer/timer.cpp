#include <iostream>
#include "timer.h"

Timer::Timer() {}

void Timer::start() {start_ = std::chrono::high_resolution_clock::now(); }

void Timer::stop() { end_ = std::chrono::high_resolution_clock::now(); }

std::chrono::seconds Timer::get_elapsed_s()
{
    return std::chrono::duration_cast<std::chrono::seconds>(end_-start_);
}

std::chrono::milliseconds Timer::get_elapsed_ms()
{
    return std::chrono::duration_cast<std::chrono::milliseconds>(end_-start_);
}

std::chrono::microseconds Timer::get_elapsed_micros()
{
    return std::chrono::duration_cast<std::chrono::microseconds>(end_-start_);
}

std::chrono::nanoseconds Timer::get_elapsed_ns()
{
    return std::chrono::duration_cast<std::chrono::nanoseconds> (end_-start_);
}

void Timer::print_elapsed_time(TimeExt ext){
    std::cerr << "Timer::Elapsed time ";
    switch(ext) {
        case Sec: {
            std::cerr << get_elapsed_s().count() << " .s \n";
            break;
        }
        case MSec: {
            std::cerr << get_elapsed_ms().count() << " .s \n";
            break;
        }
        case MicroSec: {
            std::cerr << get_elapsed_micros().count() << " micros.\n";
            break;
        }
        case NSec: {
            std::cerr << get_elapsed_ns().count() << " ns.\n";
            break;
        }
        default: { std::cerr << "\n Wrong time specification" << std::endl;}
    }
}
