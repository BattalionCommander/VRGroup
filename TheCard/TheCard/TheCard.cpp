
#include "stdafx.h"
#include "Dealer.h"
#include "Player.h"

int main()
{
	Dealer Dealer;
	Player Player_1;
	Player Player_2;
	Player Player_3;
	Dealer.GetCard();
	Dealer.Shuffle();
	Dealer.Deal(Player_1, Player_2, Player_3);

	Player_1.ShowCards();

	system("PAUSE");
    return 0;
}

