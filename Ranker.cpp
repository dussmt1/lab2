#include<math.h>
#include"Ranker.h"

void Ranker::Game(double SA,double SB)
{
	double inA = rA(),inB = rB();
	RA = inA+(double)K*(SA-pow(1+pow(10,(inB-inA)/400),-1));
	RB = inB+(double)K*(SB-pow(1+pow(10,(inA-inB)/400),-1));
	return;
}
int Ranker::rA()
{
	return ((int)(RA*2+1))/2;
}
int Ranker::rB()
{
	return ((int)(RB*2+1))/2;
}
Ranker::Ranker(int k,int ra,int rb)
{
	K = k;
	RA=ra;
	RB=rb;
}
