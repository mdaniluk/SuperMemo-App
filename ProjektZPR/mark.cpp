#include "mark.h"
#include <boost/algorithm/string.hpp>

Mark::Mark(void)
{
	value_ = 0;
}


Mark::~Mark(void)
{
}
void Mark::computeForClose(int type , std::vector<bool> user, std::vector<bool> correct ){
		int correctValue = 0;
		for(int i = 0; i < user.size(); i++){
			if(user.at(i) == correct.at(i) )
				correctValue++;
		}
		value_ = 5 * ((double)correctValue/(double)user.size());
}

void Mark::computeForOpen(int type, std::string user, std::string correct){
		if(boost::iequals(user, correct) ){
			value_ = 5;
		}
		else{
			value_ = 0;

			int correctValue = 0;
			int sizeMin;
			int sizeMax;
			if(user.size() > correct.size()){
				sizeMin = correct.size();
				sizeMax = user.size();
			}	
			else{
				sizeMin = user.size();
				sizeMax = correct.size();user.size();
			}
			for (int i = 0; i < sizeMin; i++ ) {
				if (user[i] == correct[i]) {
						correctValue++;
				}
			}
			if(correctValue > 1)
				value_ = 5 * ((double)correctValue/(double)sizeMax);
			else
				value_ = 0;
		}
	}

