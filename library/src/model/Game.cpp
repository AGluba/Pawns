//
// Created by student on 03.06.2022.
//

#include "model/Game.h"

Game::Game(const BoardPtr &board, const PlayerPtr &player1, const PlayerPtr &player2) : board(board), player1(player1),
                                                                                        player2(player2) {}

Game::~Game() {

}

void Game::checkEnd() {
    if(player1->getPawns().empty() || player2->getPawns().empty()) setIsRunning(false);
}

void Game::startGame() {

    int temp = 0;
    for(int i = 0; i < 3; i++){

        for(int j = i%2; j < 8; j+=2){

            board->getField(i, j)->setPawn(player1->getPawns()[temp]);
            player1->getPawns()[temp]->setPos(make_pair(i, j));
            temp++;
        }
    }

    temp=0;
    for(int i = 5; i < 8; i++){

        for(int j = i%2; j < 8; j+=2){

            board->getField(i, j)->setPawn(player2->getPawns()[temp]);
            player2->getPawns()[temp]->setPos(make_pair(i, j));
            temp++;
        }
    }
}

void Game::setIsRunning(bool isRunning) {
    Game::running = isRunning;
}

void Game::mainMenu() {
    int choice;

    cout << "--------------------" << endl;
    cout << "1.New game" << endl;
    cout << "2.Load game" << endl;
    cout << "3.Exit" << endl;
    cout << "--------------------" << endl;

    cout << endl << "Choice: ";
    cin >> choice;

    switch(choice){

        case 1:

            startGame();
            break;

        case 2:
            break;

        case 3:
            exit(0);

        default:
            cout << "Wrong number!" << endl;
    }
}

bool Game::isRunning() const {
    return running;
}

void Game::switchTurn() {
    if(actualPlayer == player1) actualPlayer = player2;
    else actualPlayer = player1;
}

const PlayerPtr &Game::getActualPlayer() const {
    return actualPlayer;
}

void Game::makeMove(pair<int, int> move, const PawnPtr& pawn, bool p1) {

    if(pawn->isCanBeat() && p1){

        player2->deletePawn(board->getField((move.first+pawn->getPos().first)/2, (move.second+pawn->getPos().second)/2)->getPawn());
        board->getField((move.first+pawn->getPos().first)/2, (move.second+pawn->getPos().second)/2)->setPawn(nullptr);
        pawn->setWasBeaten(true);
    }

    if(pawn->isCanBeat() && !p1){

        player1->deletePawn(board->getField((move.first+pawn->getPos().first)/2, (move.second+pawn->getPos().second)/2)->getPawn());
        board->getField((move.first+pawn->getPos().first)/2, (move.second+pawn->getPos().second)/2)->setPawn(nullptr);
        pawn->setWasBeaten(true);
    }

    removePawnFromBoard(pawn);
    board->getField(move.first, move.second)->setPawn(pawn);
    pawn->setPos(make_pair(move.first, move.second));
}

bool Game::checkPossibilityForMove(pair<int, int> move, const vector<pair<int, int>>& possibilities) {
    for(const auto & possibilitie : possibilities){

        if(move.first == possibilitie.first && move.second == possibilitie.second) return true;
    }

    return false;
}

void Game::removePawnFromBoard(const PawnPtr& pawn) {
    board->getField(pawn->getPos().first, pawn->getPos().second)->setPawn(nullptr);
}
