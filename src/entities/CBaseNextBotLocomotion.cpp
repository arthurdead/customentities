#include "CBaseNextBotLocomotion.h"

CBaseNextBotLocomotion::CBaseNextBotLocomotion(CCustomNextBotCombatCharacter *const bot) noexcept
	: NextBotGroundLocomotion(bot), m_pCustomBot{bot}
{

}

float CBaseNextBotLocomotion::GetMaxJumpHeight() const
{
	return 180.0f;
}

float CBaseNextBotLocomotion::GetDeathDropHeight() const
{
	return 200.0f;
}

float CBaseNextBotLocomotion::GetRunSpeed() const
{
	float speed{m_pCustomBot->m_flGroundSpeed};
	if(speed <= 0.0f)
		speed = 150.0f;
	return speed;
}

float CBaseNextBotLocomotion::GetWalkSpeed() const
{
	return GetRunSpeed() * 0.5f;
}

float CBaseNextBotLocomotion::GetMaxAcceleration() const
{
	return 200.0f;
}

float CBaseNextBotLocomotion::GetMaxDeceleration() const
{
	return 350.0f;
}

float CBaseNextBotLocomotion::GetMaxYawRate() const
{
	return 250.0f;
}