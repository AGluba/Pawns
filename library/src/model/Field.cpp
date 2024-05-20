//
// Created by student on 03.06.2022.
//

#include "model/Field.h"

Field::~Field() {

}

void Field::action() {

}

Field::Field(const PawnPtr &pawn) : pawn(pawn) {}

void Field::setPawn(PawnPtr pawn) {
    if(getPawn() == nullptr) this->pawn = pawn;
    else this->pawn = nullptr;
}

void Field::deletePawn(PawnPtr pawn) {
    this->pawn = nullptr;
}

const PawnPtr &Field::getPawn() const {
    return pawn;
}
