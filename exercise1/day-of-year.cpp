#include "../include/day-of-year.hpp"

int dayOfYear(int month, int dayOfMonth, int year) {
    
    std::vector<int> DaysV{31, 28, 31 , 30, 31, 30, 31 , 31 ,30 , 31 , 30};
    const int hundred{100};
    const int fourHundred{400};
    if(((year%4)==0 && (year%hundred) != 0) || (year%fourHundred)==0 )
    {
        DaysV[1] = 29;
    }
    return std::accumulate(DaysV.begin(), DaysV.begin()+ month-1, dayOfMonth);;
}

