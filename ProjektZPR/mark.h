#pragma once
#include <string>
#include <vector>
/**
 * Class represents logic of computing mark
 * @author Piotr Maleci & Michal Daniluk
 *
 */
class Mark
{
public:
	Mark(void);
	~Mark(void);
	void computeForOpen(int type, std::string user, std::string correct );
	void computeForClose(int type , std::vector<bool> user, std::vector<bool> correct );
	int getValue(){ return value_; }
private:
	int value_;
};

