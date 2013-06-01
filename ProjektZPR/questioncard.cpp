#include "questioncard.h"



QuestionCard::QuestionCard(const std::string question,  const std::string answer, const int idQuestion , const bool questionType): question_(question), answerOpen_(answer), 
	idQuestion_(idQuestion), questionType_(questionType)
{	
	//Values from SuperMemo algoritm
	interval_ = 1;
	eFactor_ = 2.5;
	how_many_ = 0;
	now = boost::gregorian::date(1991,01,10);
}

QuestionCard::QuestionCard( const std::string question,  CloseAnswer answer, const int idQuestion, const bool questionType): question_(question),  closeAnswer_(answer), 
	idQuestion_(idQuestion), questionType_(questionType)
{
	//Values from SuperMemo algoritm
	interval_ = 1;
	eFactor_ = 2.5;
	how_many_ = 0;
	now = boost::gregorian::date(1991,01,10);
}

boost::gregorian::date QuestionCard::dateOfNextQuestion(int mark )
{	
	++ how_many_;
	if (mark > 3.0)
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

	now =  boost::gregorian::day_clock::local_day();
	boost::gregorian::date_duration number_days(static_cast<long>(interval_));
	now += number_days;
	qDebug() << QString::fromStdString(to_simple_string(now)); 
	return now;

}
QuestionCard::~QuestionCard()
{

}
