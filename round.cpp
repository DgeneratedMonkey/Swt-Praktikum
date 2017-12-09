/////////////////////////////////////////////
// round.cpp // letzte Änderung: 25.11.2017//
// letzte Editirung: Miguel				   //	
// Version: 0.1							   //	
// -------- Kommentare --------------------//
/*Miguel: benötige zugriff auf beide player via setPlayer oder so
*/
/////////////////////////////////////////////

#include "round.hpp"

Round::Round(int maxAnz = 0)
{
    int_maxRoundNumber=maxAnz;
    double_currentRoundNumber=1;
	currentRoundPhase = new MovePhase;
	return;
}

Round::~Round()
{
	delete currentRoundPhase;
	return;
}

void Round::setCurrentRoundPhase(Phase* phase)
{
	delete currentRoundPhase;
	currentRoundPhase = phase;
	return;
}

void Round::changePhase()
{
	currentRoundPhase->changePhase(this);
	return;
}

void Round::changePlayer()
{
	currentRoundPhase->changePlayer(this);
	return;
}

bool Round::checkWinCondition()
{
	if(double_currentRoundNumber >= int_maxRoundNumber && int_maxRoundNumber != 0)
	{
		return true;
	}
	else
	{
	return false;
	}
}

double Round::getCurrentRoundNumber() const
{
	return double_currentRoundNumber;
}

int Round::getMaxRoundNumber() const
{
	return int_maxRoundNumber;
}

void Round::setCurrentRoundNumber(const double roundAnz)
{
	double_currentRoundNumber = roundAnz;
	return;
}

void MovePhase::changePhase(Round* round)
{
	round->setCurrentRoundPhase(new AttackPhase);
	return;
}

void AttackPhase::changePlayer(Round* round)
{
	round->setCurrentRoundPhase(new MovePhase);
	round->setCurrentRoundNumber(round->getCurrentRoundNumber() + 0.5);
	// Spielerwechsel
}

void MovePhase::changePlayer(Round* round){}

void AttackPhase::changePhase(Round* round){}