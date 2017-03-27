#ifndef RANKERH
#define RANKERH
class Ranker
{
private:
	double RA,RB;
	int K;
public:
	void Game(double,double);
	int rA();
	int rB();
	Ranker(int,int,int);
};
#endif
