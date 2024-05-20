//
// Created by student on 11.06.2022.
//

#ifndef CHECKERS_HUMANPLAYER_H
#define CHECKERS_HUMANPLAYER_H

#include <model/Player.h>

class HumanPlayer : public Player{

public:
    HumanPlayer(const vector<PawnPtr> &pawns);

    virtual ~HumanPlayer();

    pair<int, int> getCoords() override;
};


#endif //CHECKERS_HUMANPLAYER_H
