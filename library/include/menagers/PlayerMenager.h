//
// Created by student on 05.06.2022.
//

#ifndef CHECKERS_PLAYERMENAGER_H
#define CHECKERS_PLAYERMENAGER_H

#include <model/typedefs.h>
#include <model/Player.h>

using namespace std;

class PlayerMenager {

private:
    PlayerPtr player1;
    PlayerPtr player2;

public:
    PlayerMenager(const PlayerPtr &player1, const PlayerPtr &player2);

    string askForPawn(const PlayerPtr& player) const;

    string showPossibleMoves(vector<pair<int, int>> moves) const;

    string askForMove(const PlayerPtr& player) const;
};


#endif //CHECKERS_PLAYERMENAGER_H
