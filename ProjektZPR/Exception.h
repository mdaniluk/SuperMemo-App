#pragma once
#include <exception>
#include <string>
#include <QDebug>

using std::exception;
using std::string;

/**
 * Class represents our own Exception
 * @author Piotr Maleci & Michal Daniluk
 *
 */
class myException : public std::exception {

public:
	myException (const string message) : message_(message) {}
	const string returnMessage() const {
		return message_;}
	~myException() throw() {}

private:
	const string message_;
};

class LackFile : public myException {
public:
	LackFile(const string message) : myException(message) {}
	~LackFile() throw() {}
};