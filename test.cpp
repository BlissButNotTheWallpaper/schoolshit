#include <iostream>
#include <string>
int prompt_user () {
	std::cout << "Welcome to Tom and Jerry Lawn Service" << "\n";
	std::cout << "Services We Offer:" << "\n";
	std::cout << "(1) Mowing (2,100 php per 5,000 square yards)" << "\n"; 
	std::cout << "(2) Fertilizing (1,800 php per application)" << "\n";
	std::cout << "(3) Tree Planting (3,000 php per tree)" << "\n";
	int user_choice;
	std::cout << "type the number of the service you want, for ex: 1 for Mowing" << "\n";
	std::cin >> user_choice;
	return user_choice;	
}

int mowing() {
	std::cout << "You picked our Mowing Service" << "\n";
	int square_yards;
	std::cout << "Enter the amount of sqaure yards: (for ex: 10000)" << "\n"; 
	std::cin >> square_yards;
	int mowing_cost = 2100; 
	int total_mowing_cost;
	if(square_yards <= 5000) {
		total_mowing_cost = 2100;		
		std::cout << total_mowing_cost << "\n";
	} else {
		total_mowing_cost = square_yards * mowing_cost;
		total_mowing_cost = total_mowing_cost / 5000;
		std::cout << total_mowing_cost << "\n";
	}
	return total_mowing_cost;	
}

void check_user_choice () {
	int user_choice = prompt_user();
	if(user_choice == 1) {
		mowing();
	} else if(user_choice == 2) {
		//fertilizing();	
		std::cout << "fertilizing function" << "\n";
	} else if(user_choice == 3) {
		//tree_planting();
		std::cout << "tree planting funtion" << "\n";
	} else {
		std::cout << "invalid option" << "\n";
	}
}

int main() {
	check_user_choice();
}
