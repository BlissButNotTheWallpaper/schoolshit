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
		total_mowing_cost = mowing_cost;		
		std::cout << total_mowing_cost << "\n";
	} else {
		total_mowing_cost = square_yards * mowing_cost;
		total_mowing_cost = total_mowing_cost / 5000;
		std::cout << total_mowing_cost << "\n";
	}
	return total_mowing_cost;	
}

int fertilizing() {
	std::cout << "You Picked our Fertilizing Service" << "\n";
	int application_of_fertilizer;
	std::cout << "Enter the amount of application(s) of fertilizer: (for ex: 2)" << "\n";
	std::cin >> application_of_fertilizer;
	int fertilizing_cost = 1800;
	int total_fertilizing_cost;
	if(application_of_fertilizer <= 1) {
		total_fertilizing_cost = fertilizing_cost;
		std::cout << total_fertilizing_cost << "\n";
	} else {
		total_fertilizing_cost = application_of_fertilizer * fertilizing_cost;
		std::cout << total_fertilizing_cost << "\n";
	}
	return total_fertilizing_cost;
} 

int tree_planting() {
	std::cout << "You picked our tree planting service" << "\n";
	int amount_of_tree;
	std::cout << "Enter the amount of tree(s) to be planted: (for ex: 3)" << "\n";
	std::cin >> amount_of_tree; 
	int cost_per_tree = 3000;
	int total_cost_per_tree;
	if(amount_of_tree <= 1) {
		total_cost_per_tree = cost_per_tree;
		std::cout << total_cost_per_tree << "\n";
	} else {
		total_cost_per_tree = amount_of_tree * cost_per_tree;
		std::cout << total_cost_per_tree << "\n";
	}
	return total_cost_per_tree;
}

void check_user_choice () {
	int user_choice = prompt_user();
	if(user_choice == 1) {
		mowing();
	} else if(user_choice == 2) {
		fertilizing();	
	} else if(user_choice == 3) {
		tree_planting();
	} else {
		std::cout << "invalid option: " << user_choice << " (pick from 1-3)" << "\n";
	}
}

int main() {
	check_user_choice();
}
