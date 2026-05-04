#include "Player.h"

int main()
{
    cout << "Normal Multiplier: " << Player::scoreMultiplier << endl;

    Player::scoreMultiplier = 2;

    cout << "Double XP Multiplier: " << Player::scoreMultiplier << endl;

    return 0;
}
