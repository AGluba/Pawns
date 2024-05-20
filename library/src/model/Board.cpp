//
// Created by student on 03.06.2022.
//

#include "../../include/model/Board.h"

bool Board::isEndOfTheBoard(pair<int, int> pos) const {
    if(pos.first >= 0 && pos.first < getHeight() &&
    pos.second >= 0 && pos.second < getWidth()) return false;
    return true;
}

const int Board::getWidth() {
    return width;
}

const int Board::getHeight() {
    return height;
}

Board::Board(const vector<PawnPtr> &pawnsA, const vector<PawnPtr> &pawnsB) : pawnsA(pawnsA), pawnsB(pawnsB) {

    for(int i = 0; i < getHeight(); i++){

        for(int j = 0; j < getWidth(); j++){

            theBoard[i][j] = make_shared<Field>(nullptr);
        }
    }
}

FieldPtr Board::getField(int y, int x) const {
    return theBoard[y][x];
}