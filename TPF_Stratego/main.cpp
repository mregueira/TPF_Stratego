#include "stdafx.h"
#include <iostream>
#include "marshal_token.h"

using namespace std;

int main()
{
	marshal_token t1;
	cout << "Range: " << t1.get_range() << " - Movable: " << t1.is_move_enabled() << endl;
    return 0;
}

