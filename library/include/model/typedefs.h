//
// Created by student on 03.06.2022.
//

#ifndef CHECKERS_TYPEDEFS_H
#define CHECKERS_TYPEDEFS_H

#include <memory>

using namespace std;

class Field;
class Pawn;
class Player;
class Board;
class Game;

typedef shared_ptr<Field> FieldPtr;
typedef shared_ptr<Pawn> PawnPtr;
typedef shared_ptr<Player> PlayerPtr;
typedef shared_ptr<Board> BoardPtr;
typedef shared_ptr<Game> GamePtr;

#endif //CHECKERS_TYPEDEFS_H
