#ifndef PhoneBook_hpp
# define PhoneBook_hpp

# include "Contacts.hpp"

class PhoneBook
{
	public :
		PhoneBook(void);
		~PhoneBook(void);
		
		void	add_contact();
		Contact contacts[8];

	private:
		int			id;


};

#endif
