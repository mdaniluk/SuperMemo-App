#include "questioncard.h"



QuestionCard::QuestionCard(const std::string question,  const std::string answer, const int idQuestion , const bool questionType): question_(question), answerOpen_(answer), 
	idQuestion_(idQuestion), questionType_(questionType)
{	
	//Values from SuperMemo algoritm
	interval_ = 1;
	eFactor_ = 2.5;
	how_many_ = 0;
}

QuestionCard::QuestionCard( const std::string question,  CloseAnswer answer, const int idQuestion, const bool questionType): question_(question),  closeAnswer_(answer), 
	idQuestion_(idQuestion), questionType_(questionType)
{
	//Values from SuperMemo algoritm
	interval_ = 1;
	eFactor_ = 2.5;
	how_many_ = 0;
}

boost::gregorian::date QuestionCard::dateOfNextQuestion(int mark )
{	
	++ how_many_;
	if (mark < 3.0)
	{
			eFactor_ = eFactor_ + (0.1 - mark * (0.08 + mark * 0.02));
			if (eFactor_ < 1.3) 
			{
				eFactor_ = 1.3;
			}
					
			if (interval_ == 1)
			{
				interval_ = 6;
			}
			else
			{
				interval_ *= eFactor_;
			}
		}
		else
		{
			interval_ = 1;
		}

	boost::gregorian::date teraz =  boost::gregorian::day_clock::local_day();
	boost::gregorian::date_duration liczba_dni(static_cast<long>(interval_));
	teraz += liczba_dni;
	return teraz;

}
QuestionCard::~QuestionCard()
{

}
