//
// Created by student on 03.06.2022.
//

#include "model/Player.h"

const string &Player::getName() const {
    return name;
}

Player::~Player() {

}

Player::Player(const vector<PawnPtr> &pawns) : pawns(pawns) {}

const vector<PawnPtr> &Player::getPawns() const {
    return pawns;
}

PawnPtr Player::choosePawn(pair<int, int> coords) const {
    for(int i = 0; i < getPawns().size(); i++){

        if(getPawns()[i]->getPos() == coords) return getPawns()[i];
    }

    return nullptr;
}

void Player::deletePawn(const PawnPtr& pawn) {
    pawns.erase(remove(pawns.begin(), pawns.end(), pawn), pawns.end());
}

pair<int, int> Player::getCoords() {
    return {};
}

bool Player::findPawn(const PawnPtr& pawn) const {
    for(int i = 0; i < getPawns().size(); i++){

        if(getPawns()[i] == pawn) return true;
    }

    return false;
}

void Player::clearSetBeat() {
    for(const auto & i : getPawns()){

        i->setCanBeat(false);
    }
}



