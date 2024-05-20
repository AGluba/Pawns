//
// Created by student on 05.06.2022.
//

#include "model/Pawn.h"

Pawn::Pawn(int heatlh) : heatlh(heatlh) {}

Pawn::~Pawn() {

}

int Pawn::getHeatlh() const {
    return heatlh;
}

void Pawn::setHeatlh(int heatlh) {
    Pawn::heatlh = heatlh;
}

bool Pawn::isStopped() const {
    return stopped;
}

void Pawn::setStopped(bool stopped) {
    Pawn::stopped = stopped;
}

const pair<int, int> &Pawn::getPos() const {
    return pos;
}

void Pawn::setPos(const pair<int, int> &pos) {
    Pawn::pos = pos;
}

bool Pawn::isCanBeat() const {
    return canBeat;
}

void Pawn::setCanBeat(bool canBeat) {
    Pawn::canBeat = canBeat;
}

string Pawn::getType() const {
    return "(Normal pawn)";
}

vector<pair<int, int>> Pawn::getPossibleMoves(const BoardPtr& board, const PlayerPtr& player, bool forward) {
    vector<pair<int, int>> possibleMoves;

    if(forward){

        if(player->findPawn(board->getField(getPos().first+1, getPos().second-1)->getPawn()) &&
        player->findPawn(board->getField(getPos().first+1, getPos().second+1)->getPawn())) return possibleMoves;

        else{

            if(!board->isEndOfTheBoard(make_pair(getPos().first+2, getPos().second-2)) &&
               board->getField(getPos().first+1, getPos().second-1)->getPawn() != nullptr &&
               !player->findPawn(board->getField(getPos().first+1, getPos().second-1)->getPawn()) &&
               board->getField(getPos().first+2, getPos().second-2)->getPawn() == nullptr){

                possibleMoves.push_back(make_pair(getPos().first+2, getPos().second-2));
                this->setCanBeat(true);
            }

            if(!board->isEndOfTheBoard(make_pair(getPos().first+2, getPos().second+2)) &&
                board->getField(getPos().first+1, getPos().second+1)->getPawn() != nullptr &&
                !player->findPawn(board->getField(getPos().first+1, getPos().second+1)->getPawn()) &&
                board->getField(getPos().first+2, getPos().second+2)->getPawn() == nullptr){

                possibleMoves.push_back(make_pair(getPos().first+2, getPos().second+2));
                this->setCanBeat(true);
            }

            if(!board->isEndOfTheBoard(make_pair(getPos().first-2, getPos().second-2)) &&
               board->getField(getPos().first-1, getPos().second-1)->getPawn() != nullptr &&
               !player->findPawn(board->getField(getPos().first-1, getPos().second-1)->getPawn()) &&
               board->getField(getPos().first-2, getPos().second-2)->getPawn() == nullptr){

                possibleMoves.push_back(make_pair(getPos().first-2, getPos().second-2));
                this->setCanBeat(true);
            }

            if(!board->isEndOfTheBoard(make_pair(getPos().first-2, getPos().second+2)) &&
               board->getField(getPos().first-1, getPos().second+1)->getPawn() != nullptr &&
               !player->findPawn(board->getField(getPos().first-1, getPos().second+1)->getPawn()) &&
               board->getField(getPos().first-2, getPos().second+2)->getPawn() == nullptr){

                possibleMoves.push_back(make_pair(getPos().first-2, getPos().second+2));
                this->setCanBeat(true);
            }

            if(!this->isCanBeat()){

                if(!board->isEndOfTheBoard(make_pair(getPos().first+1, getPos().second-1)) &&
                   board->getField(getPos().first+1, getPos().second-1)->getPawn() == nullptr)
                    possibleMoves.push_back(make_pair(getPos().first+1, getPos().second-1));

                if(!board->isEndOfTheBoard(make_pair(getPos().first+1, getPos().second+1)) &&
                   board->getField(getPos().first+1, getPos().second+1)->getPawn() == nullptr)
                    possibleMoves.push_back(make_pair(getPos().first+1, getPos().second+1));
            }
        }
    }

    if(!forward){

        if(player->findPawn(board->getField(getPos().first-1, getPos().second-1)->getPawn()) &&
           player->findPawn(board->getField(getPos().first-1, getPos().second+1)->getPawn())) return possibleMoves;

        else{

            if(!board->isEndOfTheBoard(make_pair(getPos().first-2, getPos().second-2)) &&
               board->getField(getPos().first-1, getPos().second-1)->getPawn() != nullptr &&
               !player->findPawn(board->getField(getPos().first-1, getPos().second-1)->getPawn()) &&
               board->getField(getPos().first-2, getPos().second-2)->getPawn() == nullptr){

                possibleMoves.push_back(make_pair(getPos().first-2, getPos().second-2));
                this->setCanBeat(true);
            }

            if(!board->isEndOfTheBoard(make_pair(getPos().first-2, getPos().second+2)) &&
               board->getField(getPos().first-1, getPos().second+1)->getPawn() != nullptr &&
               !player->findPawn(board->getField(getPos().first-1, getPos().second+1)->getPawn()) &&
               board->getField(getPos().first-2, getPos().second+2)->getPawn() == nullptr){

                possibleMoves.push_back(make_pair(getPos().first-2, getPos().second+2));
                this->setCanBeat(true);
            }

            if(!board->isEndOfTheBoard(make_pair(getPos().first+2, getPos().second-2)) &&
               board->getField(getPos().first+1, getPos().second-1)->getPawn() != nullptr &&
               !player->findPawn(board->getField(getPos().first+1, getPos().second-1)->getPawn()) &&
               board->getField(getPos().first+2, getPos().second-2)->getPawn() == nullptr){

                possibleMoves.push_back(make_pair(getPos().first+2, getPos().second-2));
                this->setCanBeat(true);
            }

            if(!board->isEndOfTheBoard(make_pair(getPos().first+2, getPos().second+2)) &&
               board->getField(getPos().first+1, getPos().second+1)->getPawn() != nullptr &&
               !player->findPawn(board->getField(getPos().first+1, getPos().second+1)->getPawn()) &&
               board->getField(getPos().first+2, getPos().second+2)->getPawn() == nullptr){

                possibleMoves.push_back(make_pair(getPos().first+2, getPos().second+2));
                this->setCanBeat(true);
            }

            if(!this->isCanBeat()){

                if(!board->isEndOfTheBoard(make_pair(getPos().first-1, getPos().second-1)) &&
                   board->getField(getPos().first-1, getPos().second-1)->getPawn() == nullptr)
                    possibleMoves.push_back(make_pair(getPos().first-1, getPos().second-1));

                if(!board->isEndOfTheBoard(make_pair(getPos().first-1, getPos().second+1)) &&
                   board->getField(getPos().first-1, getPos().second+1)->getPawn() == nullptr)
                    possibleMoves.push_back(make_pair(getPos().first-1, getPos().second+1));
            }
        }
    }

    return possibleMoves;
}

bool Pawn::isWasBeaten() const {
    return wasBeaten;
}

void Pawn::setWasBeaten(bool wasBeaten) {
    Pawn::wasBeaten = wasBeaten;
}


