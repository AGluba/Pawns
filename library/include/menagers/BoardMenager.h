//
// Created by student on 05.06.2022.
//

#ifndef CHECKERS_BOARDMENAGER_H
#define CHECKERS_BOARDMENAGER_H

#include <model/typedefs.h>
#include <model/Board.h>
#include <model/Player.h>
#include <model/Field.h>

using namespace std;

class BoardMenager {

private:
    BoardPtr board;
    PlayerPtr player1;
    PlayerPtr player2;

public:
    BoardMenager(const BoardPtr &board, const PlayerPtr &player1, const PlayerPtr &player2);

    virtual ~BoardMenager();

    void drawBoard();

    void clearBoard();
};


#endif //CHECKERS_BOARDMENAGER_H
