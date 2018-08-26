#ifndef TIMER_H
#define TIMER_H
#include <chrono>

typedef std::chrono::high_resolution_clock::time_point TimePoint;

enum TimeExt{Sec,MSec,MicroSec,NSec};

class Timer{

    TimePoint start_;
    TimePoint end_;
    
public:
    Timer();
    void start();
    void stop();
    std::chrono::seconds get_elapsed_s();
    std::chrono::milliseconds get_elapsed_ms();
    std::chrono::microseconds get_elapsed_micros();
    std::chrono::nanoseconds get_elapsed_ns();
    
    void print_elapsed_time(TimeExt ext);
};

#endif
