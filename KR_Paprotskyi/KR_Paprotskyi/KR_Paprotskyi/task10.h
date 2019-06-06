//Made by Paprotskyi Ihor, SE, FI-2, NaUKMA
#ifndef CALCULATOR_H
#define CALCULATOR_H

template <typename Structure>
void calculator(Structure& a, Structure& b, void (* const f)(Structure&,const Structure&))
{
	f(a,b);	
}

#endif