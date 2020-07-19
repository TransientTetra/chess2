#ifndef APPLICATION_HPP
#define APPLICATION_HPP


#include <string>
#include "view/window.hpp"
#include "constants.hpp"

class Application
{
private:
protected:
	std::string title;
	Window window;
public:
	Application(std::string title);

	virtual void run() = 0;
};


#endif //APPLICATION_HPP
