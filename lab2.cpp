#include<iostream>
#include<fstream>
#include"Ranker.h"

int main()
{
	std::ifstream reader;
	std::ofstream outfile;
	reader.open("file.in",std::ios::in);
	if(!reader.is_open())
	{
		std::cerr<<"file.in not found"<<std::endl;
		return 1;
	}
	outfile.open("file.out",std::ios::out);
	if(!outfile.is_open())
	{
		std::cerr<<"have no access to file.out"<<std::endl;
		reader.close();
		return 2;
	}
	int tmp1,tmp2,tmp3;
	double tmp;
	if(reader>>tmp1>>tmp2>>tmp3)
	{
		Ranker ranker(tmp1,tmp2,tmp3);
		outfile<<ranker.rA()<<" "<<ranker.rB()<<std::endl;
		while(reader>>tmp)
		{
			ranker.Game(tmp,1.0-tmp);
			outfile<<ranker.rA()<<" "<<ranker.rB()<<std::endl;
		}
		
	}
}
