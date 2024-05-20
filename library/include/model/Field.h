//
// Created by student on 03.06.2022.
//

#ifndef CHECKERS_FIELD_H
#define CHECKERS_FIELD_H

#include <iostream>
#include <model/typedefs.h>
#include <model/Pawn.h>

using namespace std;

class Field {

private:
    PawnPtr pawn = nullptr;

public:
    Field(const PawnPtr &pawn);

    virtual ~Field();

    virtual void action();

    void setPawn(PawnPtr pawn);

    void deletePawn(PawnPtr pawn);

    const PawnPtr &getPawn() const;
};


#endif //CHECKERS_FIELD_H
