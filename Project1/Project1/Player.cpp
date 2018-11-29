#include "Player.h"
#include <Math.h>

int Player::GetScore(){
	return _score;
}

void Player::SetScore(int score){
	_score = abs(score);
}

Player::Player()
{
}


Player::~Player()
{
}
