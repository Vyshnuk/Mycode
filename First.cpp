#ifndef BIRD_HH
#define BIRD_HH

#include <string>
#include <ostream>
#include <vector>
#include <iostream>


/*
 * BIRD CLASS
 */
 // All member functions are implemented in this header file.
 // This class does not need modifications.

class Bird {
public:

	explicit Bird(std::string const &name) : name(name)
	{}

	

	// Virtual - this class may be derived from
	virtual ~Bird() {}


	// All birds can fly, or at least the birds we are implementing
	// in this exercise.
	//
	// Notice that flying is not a const member function -
	// const birds cannot fly! They can only speak.

	void fly(std::ostream &os) { os << name << " flies!" << std::endl; }

	// How birds speak is defined by their genus (it is implemented in
	// the derived classes)

	virtual void speak(std::ostream &os) const = 0;

	
	std::string getName() const
	{
		return name1;
	}

private:
	std::string name1;

};



/*
 * AVIARY CLASS
 */
 // This class must not be copied!

class Aviary {
public:
	Aviary() {}

	// When a bird is added to the aviary, it's ownership
	// is transferred. When the aviary is destroyed, all
	// the birds are destroyed too.
	void addBird(Bird *bird);

	// This function calls the speak() method of all
	// birds in the order they were added to the aviary.
	// The first parameter is passed to the speak() method
	// of a bird.
	void speakAll(std::ostream &os) const;

	// Create a new type alias sizeType

	// Returns how many birds there are in the aviary.
	size_t size() const;


	// TODO: You must implement the indexing operator [].
	// It must work for both const and nonconst aviaries.
	// The return types are const Bird * for the const version and
	// Bird * for the nonconst version.

	// TODO: implement also destructor for aviary

private:
	// TODO: add the needed storage for the aviary
};


/*
 * DUCK CLASS
 */

 // TODO: Implement class Duck here, inheriting from Bird


 /*
  * OWL CLASS
  */
  // TODO: Implement class Owl here, inheriting from Bird

#endif

