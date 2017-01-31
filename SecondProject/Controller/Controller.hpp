//
//  Controller.hpp
//  SecondProject
//
//  Created by Osborne, Jacob on 1/27/17.
//  Copyright © 2017 Osborne, Jacob. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

class Controller
{
private:
    void tryNumbers(int sent);
    int changeNumber();
    void changeWithPointer(int * numberPointer);
public:
    void start();
};
#endif /* Controller_hpp */
