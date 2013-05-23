#ifndef DECK_H
#define DECK_H
#include <QObject>
#include <boost/serialization/nvp.hpp>

typedef std::pair<std::string, std::string> CloseAnswer; //odpowiedz + TRUE/FALSE
class Deck
{
public:
	Deck();
	// Tworzymy nowy kurs
	Deck(std::stringstream& fileContent, const std::string question,  const std::string answer, const int Idquestion );

	Deck(std::stringstream& fileContent, const std::string question,  CloseAnswer answer, const int Idquestion );

	~Deck();

private:
	friend class boost::serialization::access;
	
};

#endif // DECK_H
