//Made by Paprotskyi Ihor, SE, FI-2, NaUKMA
#include "structures.h"

std::ostream& operator<<(std::ostream& os, const SList& list) {  //4
	for (size_t i = 0; i < list._wordsQuantity; ++i)
		os<<list._words[i]<<std::endl;
	return os;
}