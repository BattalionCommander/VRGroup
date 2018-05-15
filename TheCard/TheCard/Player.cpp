#include "stdafx.h"
#include "Player.h"

Player::Player()
{
}


Player::~Player()
{
}

void Player::SetCard(int i, Card card)
{
	_Cards[i] = card;
}

void Player::ShowCards()
{
	size_t length;
	if (_IsBanker)
	{
		length = 17;
	}
	else
	{
		length = 20;
	}
	for (size_t i = 0; i < length; i++)
	{
		cout << _Cards[i]._Name << "  " << _Cards[i]._Number << endl;
	}
	
	
}
