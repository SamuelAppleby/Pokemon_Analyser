#pragma once
#include "BaseType.h"
#include <utility>
#include <iostream>  


class Type
{
public:
	Type() {}
	Type(std::pair<BaseType, BaseType> t);
	void Analyse();
	std::pair<BaseType, BaseType> GetType() const {
		return type;
	}

	std::map<DamageResult, int> GetOffensiveOccurences() {
		return offensiveOccurence;
	}

	float GetOffensiveStat() const {
		return offensiveStat;
	}

	std::map<DamageResult, int> GetResistanceOccurences() {
		return resistanceOccurence;
	}

	float GetDefensiveStat() const {
		return defensiveStat;
	}

	float GetTotalStat() const {
		return totalStat;
	}

	bool operator< (const Type& other) const {
		return totalStat > other.totalStat;
	}
	std::map<PokemonType, float> offensive;
	std::map<PokemonType, float> resistance;

private:
	std::pair<BaseType, BaseType> type;

	std::map<DamageResult, int> offensiveOccurence;
	float offensiveStat;

	std::map<DamageResult, int> resistanceOccurence;
	float defensiveStat;

	int totalStat;
};

