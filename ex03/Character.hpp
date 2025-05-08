#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"
# include <AMateria.hpp>

class Character: public ICharacter
{
	public:
		Character(const std::string &name);
		Character(const Character &cpy);
		Character &operator=(const Character &cpy);
		virtual ~Character();

		const std::string &getName() const;
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter & target);

	private:
		static const int maxSlot = 4;
		AMateria *slots[maxSlot];	
		std::string name;
};

#endif
