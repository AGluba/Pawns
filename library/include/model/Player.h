//
// Created by student on 03.06.2022.
//

#ifndef CHECKERS_PLAYER_H
#define CHECKERS_PLAYER_H

#include <iostream>
#include <model/typedefs.h>
#include <vector>
#include <algorithm>
#include <model/Pawn.h>

using namespace std;

class Player {

private:
    string name;
    vector<PawnPtr> pawns;

public:
    Player(const vector<PawnPtr> &pawns);

    virtual ~Player() = 0;

    const string &getName() const;

    const vector<PawnPtr> &getPawns() const;

    PawnPtr choosePawn(pair<int, int> coords) const;

    void deletePawn(const PawnPtr& pawn);

    virtual pair<int, int> getCoords();

    bool findPawn(const PawnPtr& pawn) const;

    void clearSetBeat();
};


#endif //CHECKERS_PLAYER_H
