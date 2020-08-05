//Section 7
//Vectors

#include <iostream>
#include <vector> //remember to include vector

int main(){
	
	//std::vector <char> vowels;  //empty vector
	//std::vector <char> vowels(5); //5 initiliazied to zero
	
	//std::vector <char> vowels{'a','e','i','o','u'};
	
	//std::cout << vowels[0] << std::endl;
	//std::cout << vowels[4] << std::endl;
	
	/*
	std::vector <int> test_scores {100,98,89};
	
	std::cout << "\nTest Scores using Array Sintax: " << std::endl;
	std::cout << "test_scores[0]" << std::endl;
	std::cout << "test_scores[1]" << std::endl;
	std::cout << "test_scores[2]" << std::endl;
	
	std::cout << "\nTest scores  using vector syntax: " << std::endl;
	
	std::cout << "\nTest Scores using Array Sintax: " << std::endl;
	std::cout << test_scores.at(0) << std::endl;
	std::cout << test_scores.at(1) << std::endl;
	std::cout << test_scores.at(2) << std::endl;
	
	std::cout << "There are " << test_scores.size() << " scores in the vector" << std::endl;
	
	std::cout << "\nEnter 3 Test scores ";
	std::cin >> test_scores.at(0);
	std::cin >> test_scores.at(1);
	std::cin >> test_scores.at(2);
	
	*/
	
// Multidimensional Vectors

	std::vector <std::vector <int>> movie_ratings
	{
		{1,2,3,4},
		{1,2,4,4},
		{1,3,4,5}
	};
	
	std::cout << "\nHere are the movies rating for reviewer #1 using array sintax: " << std::endl;
	std::cout << movie_ratings[0][0] << std::endl;
	std::cout << movie_ratings[0][1] << std::endl;
	std::cout << movie_ratings[0][2] << std::endl;
	std::cout << movie_ratings[0][3] << std::endl;
	
	std::cout << "\nHere are the movies rating for reviewer #2 using vector sintax: " << std::endl;
	std::cout << movie_ratings.at(0).at(0) << std::endl;
	std::cout << movie_ratings.at(0).at(1) << std::endl;
	std::cout << movie_ratings.at(0).at(2) << std::endl;
	std::cout << movie_ratings.at(0).at(3) << std::endl;
	
	
	return 0;
}