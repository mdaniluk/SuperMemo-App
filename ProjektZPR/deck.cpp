#include "deck.h"

Deck::Deck(std::stringstream& fileContent)
{
	list<PQcard> listPQ;
	using boost::property_tree::ptree;
	ptree pt;
    read_xml(fileContent, pt);
	PQcard card;

	BOOST_FOREACH( ptree::value_type const& v, pt.get_child("SuperMemo") ) {

		if(v.first == "Task"){
			if (v.second.get<int>("<xmlattr>.Type")==0)
			{
				card=PQcard(new QuestionCard(v.second.get<std::string>("Question"), v.second.get<std::string>("AnswerOpen"), v.second.get<int>("<xmlattr>.Id"), "True" ));
				listPQ.push_back(card);
			}
			else{
				CloseAnswer answer;
			BOOST_FOREACH( ptree::value_type const& v2, pt.get_child("Task") ) {
						if(v2.first=="AnswerClose"){
							answer.push_back( std::make_pair(v2.second.get<std::string>("a"),v2.second.get<std::string>("<xmlattr>.Value")));
							answer.push_back( std::make_pair(v2.second.get<std::string>("b"),v2.second.get<std::string>("<xmlattr>.Value")));
							answer.push_back( std::make_pair(v2.second.get<std::string>("c"),v2.second.get<std::string>("<xmlattr>.Value")));
							answer.push_back( std::make_pair(v2.second.get<std::string>("d"),v2.second.get<std::string>("<xmlattr>.Value")));
						}
						
					}
				card=PQcard(new QuestionCard(v.second.get<std::string>("Question"), answer ,v.second.get<int>("<xmlattr>.Id"), "False" ));
				listPQ.push_back(card);
			}

		}
	}


}

Deck::~Deck()
{

}
