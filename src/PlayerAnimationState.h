#pragma once
#ifndef __PLAYER_ANIMATION_STATE__
#define __PLAYER_ANIMATION_STATE__

enum PlayerAnimationState
{
	PLAYER_IDLE,
	PLAYER_RUN,
	PLAYER_SHOOT,
	PLAYER_ATTACK,
	PLAYER_HURT,
	PLAYER_DEAD,
	NUM_OF_ANIMATION_STATES
};

enum EnemyAminationState
{
	ENEMY_IDLE,
	ENEMY_RUN,
	ENEMY_ATTACK,
	ENEMY_HURT,
	ENEMY_DEAD,
	NUM_OF_EANIMATION_STATES
};


#endif /* defined (__PLAYER_ANIMATION_STATE__)*/