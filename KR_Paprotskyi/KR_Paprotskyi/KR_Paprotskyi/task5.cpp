//Made by Paprotskyi Ihor, SE, FI-2, NaUKMA
#include "structures.h"

size_t charlen(const char *str)
{
    size_t length = 0;
    while (str[++length]);
    return length;
}

char*& toCharArr(const SList& list)
{
	size_t myStrLength = 0;
	size_t numberOfWords = list._wordsQuantity;
	
	for (size_t i = 0; i < numberOfWords; ++i)
		myStrLength+=charlen(list._words[i]);
	
	char* res = new char[myStrLength + numberOfWords]; //(number of words - 1), which equals to spaces + 1(for '\0')  
	
	size_t wordLetter = 0; //letter index of each word
	size_t resultIndex = 0;
	for (size_t wordIndex = 0; wordIndex < numberOfWords; ++wordIndex)
	{
		while (list._words[wordIndex][wordLetter] != '\0')
		{
			res[resultIndex++] = list._words[wordIndex][wordLetter++];
		}
		if (wordIndex != (numberOfWords-1))
		{
			res[resultIndex++] = ' ';
		}
		wordLetter=0;
	}
	res[myStrLength+numberOfWords-1] = '\0';

	return res;
}