//
// Created by student on 03.06.2022.
//

#ifndef CHECKERS_BOARD_H
#define CHECKERS_BOARD_H

#include <iostream>
#include <model/typedefs.h>
#include <model/Pawn.h>
#include <model/Field.h>
#include <vector>

using namespace std;

class Board {

private:
    static const int width = 8;
    static const int height = 8;
    FieldPtr theBoard[width][height];
    vector<PawnPtr> pawnsA;
    vector<PawnPtr> pawnsB;

public:
    Board(const vector<PawnPtr> &pawnsA, const vector<PawnPtr> &pawnsB);

    bool isEndOfTheBoard(pair<int, int> pos) const;

    static const int getWidth();

    static const int getHeight();

    FieldPtr getField(int y, int x) const;
};


#endif //CHECKERS_BOARD_H
