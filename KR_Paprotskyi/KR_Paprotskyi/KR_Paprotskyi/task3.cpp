//Made by Paprotskyi Ihor, SE, FI-2, NaUKMA
#include "structures.h"

void destroy(SList& list)
{
	for (size_t i = 0; i < list._wordsQuantity; ++i)
	{
		delete [] list._words[i]; 
		list._words[i]= 0;
	}
	delete[] list._words;
	list._words = 0;
	return;
}

size_t countWords(const char* s)//counts number of words
{
  size_t wordsQuantity = 0;
  size_t i = 0;
  while(s[i]!='\0')
  {
    if (s[i]==' ')
      ++i;
    else if ((s[i] >= 'a') && (s[i] <= 'z'))
    {
      ++wordsQuantity;
      while((s[i]!=' ') && (s[i] != '\0'))
        ++i;
    }
  }
  return wordsQuantity;
}

SList& toSList(const char* s)
{
	size_t n = countWords(s);
	SList list = {new char*[n], n};
	
	size_t wordLen; //length of the current word
	size_t wordsCounter = 0;//words counter
	size_t i = 0;//index of char in char*
	while(s[i]!='\0')
	{
		if (s[i] == ' ')//skip space/whitespace
			i++;
		else if (s[i]>='a' && s[i]<='z')//start of the word
		{
		  wordLen = 0;
		  while ((s[i+wordLen]!=' ') && (s[i+wordLen]!='\0'))
		  {
			wordLen++;
		  }
		  list._words[wordsCounter] = new char[wordLen+1];
		  list._words[wordsCounter][wordLen] ='\0';
		  for (size_t j = 0; j < wordLen; j++, i++)
		  {
			  list._words[wordsCounter][j] = s[i];
		  }
		  wordsCounter++;
		}
	}
	return list;
}