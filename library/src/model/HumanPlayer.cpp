//
// Created by student on 11.06.2022.
//

#include "model/HumanPlayer.h"

HumanPlayer::HumanPlayer(const vector<PawnPtr> &pawns) : Player(pawns) {}

HumanPlayer::~HumanPlayer() {

}

pair<int, int> HumanPlayer::getCoords() {
    int a, b;
    cout << "Enter y coords: ";
    cin >> a;
    cout << "Enter x coords: ";
    cin >> b;

    return make_pair(a, b);
}
