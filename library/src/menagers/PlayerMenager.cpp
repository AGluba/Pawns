//
// Created by student on 05.06.2022.
//

#include "menagers/PlayerMenager.h"

PlayerMenager::PlayerMenager(const PlayerPtr &player1, const PlayerPtr &player2) : player1(player1), player2(player2) {}

string PlayerMenager::askForPawn(const PlayerPtr& player) const {
    if(player == player1) return "Choose your pawn (Player X)";
    if(player == player2) return "Choose your pawn (Player O)";
}

string PlayerMenager::showPossibleMoves(vector<pair<int, int>> moves) const {
    string output;
    for(int i = 0; i < moves.size(); i++){

        int a = moves[i].first;
        int b = moves[i].second;
        output += to_string(i) + "." + "(" + to_string(a) + "," + to_string(b) + ") ";
    }

    output += "\n";

    return output;
}

string PlayerMenager::askForMove(const PlayerPtr &player) const {
    return "Choose move coords";
}
