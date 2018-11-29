#pragma once

class Player
{
	private:
		int _score;
	public:
		int GetScore();
		void SetScore(int score);
		Player();
		~Player();
};
