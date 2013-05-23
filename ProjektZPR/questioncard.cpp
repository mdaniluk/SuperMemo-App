#include "questioncard.h"



QuestionCard::QuestionCard(const std::string question,  const std::string answer, const int idQuestion , const bool questionType): question_(question), answer_(answer), 
	idQuestion_(idQuestion), questionType_(questionType)
{

}

QuestionCard::QuestionCard( const std::string question,  CloseAnswer answer, const int idQuestion, const bool questionType): question_(question),  closeAnswer_(answer), 
	idQuestion_(idQuestion), questionType_(questionType)
{

}
QuestionCard::~QuestionCard()
{

}
