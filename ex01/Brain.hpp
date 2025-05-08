#pragma once

#include <string>
class Brain
{
	public:
		Brain();
		Brain(const Brain &cpy);
		Brain &operator=(const Brain &cpy);
		~Brain();
		
		std::string getIdea(int i) const;
		void setIdea(int i, std::string idea);
	private:
		std::string ideas[100];
};
