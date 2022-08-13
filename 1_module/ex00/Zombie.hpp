#ifndef EX00_ZOMBIE_HPP
#define EX00_ZOMBIE_HPP

#include <string>

class Zombie
{
private:
	std::string name;

public:
	Zombie(const std::string& name);

	~Zombie(void);

	void announce( void );

	const std::string& GetName() const;

	void SetName(const std::string& name);

};


#endif //EX00_ZOMBIE_HPP
