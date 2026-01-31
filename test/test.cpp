#include <catch2/catch_test_macros.hpp>
#include <iostream>

#include "interquartile_range.h"

using namespace std;

// // the syntax for defining a test is below. It is important for the name to be unique, but you can group multiple tests with [tags]. A test can have [multiple][tags] using that syntax.
// TEST_CASE("Example Test Name - Change me!", "[flag]"){
// 	// instantiate any class members that you need to test here
// 	int one = 1;

// 	// anything that evaluates to false in a REQUIRE block will result in a failing test 
// 	REQUIRE(one == 0); // fix me!

// 	// all REQUIRE blocks must evaluate to true for the whole test to pass
// 	REQUIRE(false); // also fix me!
// }

// TEST_CASE("Test 2", "[flag]"){
// 	// you can also use "sections" to share setup code between tests, for example:
// 	int one = 1;

// 	SECTION("num is 2") {
// 		int num = one + 1;
// 		REQUIRE(num == 2);
// 	};

// 	SECTION("num is 3") {
// 		int num = one + 2;
// 		REQUIRE(num == 3);
// 	};

// 	// each section runs the setup code independently to ensure that they don't affect each other
// }

// you must write 5 unique, meaningful tests for credit on the testing portion of this quiz!

// the provided tests from edugator are below. Note that you must determine the correct output for the [output_hidden] tests yourself

TEST_CASE("Function: IQR 1", "[given]") {
	std::vector<int> v = {2, 4, 4, 5, 6, 7, 8};
	Node* head = nullptr;
	for(int i: v)
		head = insertEnd(head, i);

	REQUIRE(interQuartile(head) == 3.00);
	
    while (head != nullptr) 
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

TEST_CASE("Function: IQR 2", "[given]") {
	std::vector<int> v = {1, 2, 3, 4};
	Node* head = nullptr;
	for(int i: v)
		head = insertEnd(head, i);

	REQUIRE(interQuartile(head) == 2.00);
	
    while (head != nullptr) 
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

// uncomment these and put the correct values in the REQUIRE blocks

TEST_CASE("Function: IQR 3", "[output_hidden]") {
	std::vector<int> v = {1, 8, 15, 43, 82, 101, 110, 2456, 55345, 137556};
	Node* head = nullptr;
	for(int i: v)
		head = insertEnd(head, i);

	REQUIRE(interQuartile(head) == 2441);
	
    while (head != nullptr) 
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

TEST_CASE("Function: IQR 4", "[output_hidden]") {
	std::vector<int> v = {2, 4, 4, 5, 6, 7, 8, 9, 10};
	Node* head = nullptr;
	for(int i: v)
		head = insertEnd(head, i);

	REQUIRE(interQuartile(head) == 4.5);
	
    while (head != nullptr) 
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

TEST_CASE("Function: IQR 5", "[output_hidden]") {
	std::vector<int> v = {1, 8, 15, 43, 82, 101, 110, 2456, 55345, 137556, 137576};
	Node* head = nullptr;
	for(int i: v)
		head = insertEnd(head, i);

	REQUIRE(interQuartile(head) == 55330);
	
    while (head != nullptr) 
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

TEST_CASE("Case: base length 4", "[length_testing]") {
	std::vector<int> v = {10, 11, 15, 35};
	Node* head = nullptr;
	for(int i: v)
		head = insertEnd(head, i);

	REQUIRE(interQuartile(head) == 14.5);
	
    while (head != nullptr) 
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

TEST_CASE("Case: base length 5", "[length_testing]") {
	std::vector<int> v = {12, 22, 28, 37, 45, 60, 65, 72, 73, 81, 86, 88, 94, 95, 97, 98, 101};
	Node* head = nullptr;
	for(int i: v)
		head = insertEnd(head, i);

	REQUIRE(interQuartile(head) == 53.5);
	
    while (head != nullptr) 
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

TEST_CASE("Case: base length 6", "[length_testing]") {
	std::vector<int> v = {12, 22, 28, 37, 45, 60, 65, 72, 73, 81, 86, 88, 94, 95, 97, 98, 101, 115};
	Node* head = nullptr;
	for(int i: v)
		head = insertEnd(head, i);

	REQUIRE(interQuartile(head) == 50);
	
    while (head != nullptr) 
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

TEST_CASE("Case: base length 7", "[length_testing]") {
	std::vector<int> v = {12, 22, 28, 37, 45, 60, 65, 72, 73, 81, 86, 88, 94, 95, 97, 98, 101, 115, 116};
	Node* head = nullptr;
	for(int i: v)
		head = insertEnd(head, i);

	REQUIRE(interQuartile(head) == 52);
	
    while (head != nullptr) 
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

TEST_CASE("Decimal Q1 and IQR", "[length_testing]") {
	std::vector<int> v = {1, 3, 7, 8, 9, 13, 18, 20, 22, 26, 28, 31, 33};
	Node* head = nullptr;
	for(int i: v)
		head = insertEnd(head, i);

	REQUIRE(interQuartile(head) == 19.5);
	
    while (head != nullptr) 
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}