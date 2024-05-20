//
// Created by student on 05.06.2022.
//

#ifndef CHECKERS_PAWN_H
#define CHECKERS_PAWN_H

#include <iostream>
#include <model/typedefs.h>
#include <vector>
#include <model/Board.h>
#include <model/Player.h>

using namespace std;

class Pawn {

private:
    int heatlh;
    bool stopped = false;
    pair<int, int> pos;
    bool canBeat = false;
    bool wasBeaten = false;

public:
    Pawn(int heatlh);

    virtual ~Pawn();

    int getHeatlh() const;

    void setHeatlh(int heatlh);

    bool isStopped() const;

    void setStopped(bool stopped);

    const pair<int, int> &getPos() const;

    void setPos(const pair<int, int> &pos);

    bool isCanBeat() const;

    void setCanBeat(bool canBeat);

    vector<pair<int, int>> getPossibleMoves(const BoardPtr& board, const PlayerPtr& player, bool forward);

    string getType() const;

    bool isWasBeaten() const;

    void setWasBeaten(bool wasBeaten);
};


#endif //CHECKERS_PAWN_H
