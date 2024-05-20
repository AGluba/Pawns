//
// Created by student on 05.06.2022.
//

#include "menagers/BoardMenager.h"

BoardMenager::~BoardMenager() {

}

void BoardMenager::drawBoard() {

    cout << " ";
    for(int i = 0; i < board->getWidth(); i++) cout << " " << i;
    cout << endl;

    for(int i = 0; i < board->getWidth(); i++){

        cout << i << " ";
        for(int j = 0; j < board->getHeight(); j++) {

            bool check = false;
            FieldPtr field = board->getField(i, j);
            for (const auto &k: player1->getPawns()) {

                if (field->getPawn() == k) {

                    cout << "X ";
                    check = true;
                    break;
                }
            }

            if (!check) {

                for (const auto &k: player2->getPawns()) {

                    if (field->getPawn() == k) {

                        cout << "O ";
                        check = true;
                        break;
                    }
                }
            }

            if (!check) cout << "  ";
        }


        cout << endl;
    }
    cout << endl;
}

BoardMenager::BoardMenager(const BoardPtr &board, const PlayerPtr &player1, const PlayerPtr &player2) : board(board),
                                                                                                        player1(player1),
                                                                                                        player2(player2) {}

void BoardMenager::clearBoard() {
    for(int i = 0; i < board->getHeight(); i++){

        for(int j = 0; j < board->getWidth(); j++){

            board->getField(i, j)->setPawn(nullptr);
        }
    }
}
