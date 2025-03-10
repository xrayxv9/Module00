#ifndef PhoneBook_hpp
# define PhoneBook_hpp

# include "Contacts.hpp"

class PhoneBook
{
	public :
		PhoneBook();
		~PhoneBook();
		
	private:
		int			id = 0;

		Contact contacts[8];

		void	add_contact();
};

#endif
