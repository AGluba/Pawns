//
// Created by student on 03.06.2022.
//

#include <iostream>
#include <model/Board.h>
#include <menagers/BoardMenager.h>
#include <menagers/PlayerMenager.h>
#include <model/HumanPlayer.h>
#include <model/Pawn.h>
#include <model/Game.h>
#include <vector>

using namespace std;

int main(){

    vector<PawnPtr> pawnsA;
    vector<PawnPtr> pawnsB;

    for(int i = 0; i < 12; i++){

        pawnsA.push_back(make_shared<Pawn>(1));
        pawnsB.push_back(make_shared<Pawn>(1));
    }

    auto player1 = make_shared<HumanPlayer>(pawnsA);
    auto player2 = make_shared<HumanPlayer>(pawnsB);

    auto board = make_shared<Board>(player1->getPawns(), player2->getPawns());
    auto boardM = make_shared<BoardMenager>(board, player1, player2);
    auto playerM = make_shared<PlayerMenager>(player1, player2);

    auto game = make_shared<Game>(board, player1, player2);

    pair<int, int> coords = make_pair(0, 0);
    PawnPtr pawn = game->getActualPlayer()->choosePawn(coords);

    game->mainMenu();
    while(game->isRunning()){

        bool nextStep = false;
        game->getActualPlayer()->clearSetBeat();
        do{

            boardM->drawBoard();
            cout << playerM->askForPawn(game->getActualPlayer()) << endl;
            coords = game->getActualPlayer()->getCoords();

            if(game->getActualPlayer()->findPawn(board->getField(coords.first, coords.second)->getPawn()) && // Add catching out of index
            !board->getField(coords.first, coords.second)->getPawn()->getPossibleMoves(board, game->getActualPlayer(),
                                                                                       game->getActualPlayer() == player1).empty()){

                pawn = game->getActualPlayer()->choosePawn(coords);
                nextStep = true;
            }
        }
        while(!nextStep);

        nextStep = false;
        do{

            cout << endl << playerM->askForMove(game->getActualPlayer()) << endl;
            coords = game->getActualPlayer()->getCoords();

            if(game->checkPossibilityForMove(coords, pawn->getPossibleMoves(board, game->getActualPlayer(),
                                                                             game->getActualPlayer() == player1))){

                game->makeMove(coords, pawn, game->getActualPlayer() == player1);
                game->getActualPlayer()->clearSetBeat();
                pawn->getPossibleMoves(board, game->getActualPlayer(),game->getActualPlayer() == player1);
                nextStep = true;

                if(pawn->isCanBeat() && pawn->isWasBeaten()){

                    boardM->drawBoard();
                    nextStep = false;
                }
            }
        }
        while(!nextStep);

        pawn->setWasBeaten(false);
        game->switchTurn();
        game->checkEnd();
    }

    return 0;
}