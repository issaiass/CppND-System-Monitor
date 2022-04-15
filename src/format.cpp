#include <string>

#include "format.h"

// TODO: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
// REMOVE: [[maybe_unused]] once you define the function
using std::to_string;
using std::string;

string Format::ElapsedTime(long seconds) { 
    int hr = 0;
    int min = 0;
    int sec = 0;
    string t;
    string h, m, s;
    
    hr = seconds / 3600;
    min = (seconds % 3600) / 60;
    sec = seconds % 60;

    h = to_string(hr);
    m = to_string(min);
    s = to_string(sec);

    h = hr  < 10 ? "0" + h : h;    
    m = min < 10 ? "0" + m : m;    
    s = sec < 10 ? "0" + s : s;
    
    t = h + ":" + m + ":" + s;

    return t;
}