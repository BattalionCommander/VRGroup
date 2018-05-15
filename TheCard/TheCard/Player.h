#pragma once

class Dealer;
class Player
{
	friend class Dealer;
public:
	Player();
	~Player();
	
	void SetCard(int i,Card card);
	void ShowCards();

private:
	static void SetCardCopy();

	Card _Cards[20];
	
	bool _IsBanker = false;
};

