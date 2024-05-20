//
// Created by student on 03.06.2022.
//

#ifndef CHECKERS_GAME_H
#define CHECKERS_GAME_H

#include <iostream>
#include <model/typedefs.h>
#include <model/Player.h>
#include <model/Board.h>

using namespace std;

class Game {

private:
    BoardPtr board;
    PlayerPtr player1;
    PlayerPtr player2;
    bool running = true;
    PlayerPtr actualPlayer = player1;

public:
    Game(const BoardPtr &board, const PlayerPtr &player1, const PlayerPtr &player2);

    virtual ~Game();

    void checkEnd();

    void startGame();

    void setIsRunning(bool isRunning);

    void mainMenu();

    bool isRunning() const;

    void switchTurn();

    const PlayerPtr &getActualPlayer() const;

    void makeMove(pair<int, int> move, const PawnPtr& pawn, bool p1);

    static bool checkPossibilityForMove(pair<int, int> move, const vector<pair<int, int>>& possibilities);

    void removePawnFromBoard(const PawnPtr& pawn);
};


#endif //CHECKERS_GAME_H
