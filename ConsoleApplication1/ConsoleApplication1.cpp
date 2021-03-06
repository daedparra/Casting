

/**
VFS Object Oriented Programming C++
Purpose: Exercises in type casting

@version 1.3 27/06/18
*/

#include "stdafx.h"
#include <iostream>
using namespace std;
//
// example classes you can use in the exercises below:
//

class Animal {
public:
	virtual ~Animal() {}
};

class Mammal : public Animal {
public:
	virtual ~Mammal() {}
};

class Human : public Mammal {
public:
	virtual ~Human() {}
};

class Food {
public:
	virtual ~Food() {}
};

class Savoury : public Food {
public:
	virtual ~Savoury() {}
};

class Dessert : public Food {
public:
	virtual ~Dessert() {}
};

class Cake : public Dessert {
public:
	virtual ~Cake() {}
};

//
// EXECISE ONE
//

//
// show an example of an implicit type conversion with an integral type
// show an example of an implicit type conversion with a pointer to a class
//

void ImplicitTypeConversion()
{
	// Int implicit conversion
	int Int = 1;
	float Float = Int;

	// Pointer implicit conversion
	Mammal* mammal = new Mammal();
	Animal* animal = mammal;
}

//
// EXECISE TWO
//

//
// show an example of a C style cast with an integral type
// show an example of a C style cast with a pointer to a class
//

void CStyleCast()
{
	//C style cast with int type
	float x = 8.4f;
	int y = (int)x;


	//C style cast with a pointer
	Animal* animal = new Animal();
	Human* animalH = nullptr;
	animal = (Human*)animalH;
}

//
// EXECISE THREE
//

//
// show an example of a static_cast using a pointer to a class
//

void StaticCast()
{
	Animal* animal = new Animal();
	Human* animalH = nullptr;
	animal = static_cast<Human*>(animalH);
}

//
// EXECISE FOUR
//

//
// show an example of when a dynamic_cast succeeds
// show an example of when a dynamic_cast fails
//

void DynamicCast()
{
	Animal* animal = new Animal();
	Human* animalH = new Human();
	animal = dynamic_cast<Human*>(animalH);

	if (animal != nullptr) {
		cout << "suceed";
	}
	else {
		cout << "fail";
	}

	Food* food = new Food();
	Dessert* foodD = new Dessert();
	foodD = dynamic_cast<Dessert*>(food);

	if (foodD != nullptr) {
		cout << "suceed";
	}
	else {
		cout << "fail";
	}
}

//
// EXECISE FIVE
//

//
// show an example of a const_cast
//

void ConstCast()
{
	const Human* human = new Human();
	Human* humanN = const_cast<Human*>(human);
}

int main()
{
	ImplicitTypeConversion();
	CStyleCast();
	StaticCast();
	DynamicCast();
	ConstCast();

	return 0;
}

