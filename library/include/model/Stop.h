//
// Created by student on 03.06.2022.
//

#ifndef CHECKERS_STOP_H
#define CHECKERS_STOP_H

#include <iostream>
#include "Field.h"

using namespace std;

class Stop : public Field{

public:
    void action() override;
};


#endif //CHECKERS_STOP_H
