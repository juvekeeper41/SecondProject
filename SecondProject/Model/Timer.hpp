//
//  Timer.hpp
//  SecondProject
//
//  Created by Osborne, Jacob on 1/31/17.
//  Copyright © 2017 Osborne, Jacob. All rights reserved.
//

#ifndef Timer_hpp
#define Timer_hpp

#include <time.h>

class Timer
{
private:
    //Data members
    clock_t executionTime;
public:
    //Constructor
    Timer();
    //Methods
    void startTimer();
    void stopTimer();
    void resetTimer();
    void displayTimingInformation();
    long getExecutionTimeInMicroseconds();
};

#endif /* Timer_hpp */
