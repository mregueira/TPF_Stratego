#include "stdafx.h"
#include <iostream>
#include "MarshalToken.h"
#include "GameBoard.h"

int main()
{
	PosType pos;
	pos.x = 'A';
	pos.y = '1';
	GameBoard G;
	G.set_new_token(pos, MARSHAL);
	PosType dst;
	dst.x = 'A';
	dst.y = '2';
	((MarshalToken*)(&G.get_board()[0][0]))->move(dst, G.get_board()); ///GANE!

    return 0;
}

