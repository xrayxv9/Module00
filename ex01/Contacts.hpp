#include <string>
#include <iostream>


class Contact{
	public:
		~Contact();
		Contact();

		void	setname(std::string);
		void	setnick(std::string nickname);
		void	setlastname(std::string lastname);

	private:
		std::string FirstName;
		std::string nickname;
		std::string lastName;
		std::string darkestSecret;
		std::string PhoneNumber;
};

