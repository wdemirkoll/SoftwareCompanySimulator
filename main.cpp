#include <iostream>
#include <string>

// Company and CEO names
std::string CompanyName;
std::string CeoName;

// Company asset (money balance)
double CompanyMoney = 0;

// Developer counts
int JuniorDevs = 0;
int MidDevs = 0;
int SeniorDevs = 0;

// Project counts
int AppProjects = 0;
int GameProject = 0;
int SecurityProjects = 0;

// Used for all menu choices
int Choose;

// Displays all current company statistics on screen
void Statistic(){
    std::cout << "-----------------------------------------" << std::endl;
    std::cout << "Company Name: " << CompanyName << std::endl;
    std::cout << "Company Money: $" << CompanyMoney << std::endl;
    std::cout << "CEO Name: " << CeoName << std::endl;
    std::cout << "-----------------------------------------" << std::endl;

    // Developer information
    std::cout << "Junior Developers: " << JuniorDevs << std::endl;
    std::cout << "Mid Developers: " << MidDevs << std::endl;
    std::cout << "Senior Developers: " << SeniorDevs << std::endl;
    std::cout << "-----------------------------------------" << std::endl;

    // Project information
    std::cout << "Application Projects: " << AppProjects << std::endl;
    std::cout << "Game Projects: " << GameProject << std::endl;
    std::cout << "Security Projects: " << SecurityProjects << std::endl;
    std::cout << "-----------------------------------------" << std::endl << std::endl;
}

// Prints main menu options
void MainMenu(){
    std::cout << "[1] - New Project" << std::endl;
    std::cout << "[2] - Sell Project" << std::endl;
    std::cout << "[3] - Buy Developer" << std::endl;
    std::cout << "[4] - Exit" << std::endl;
}

// Menu for creating new projects
void NewProjectMenu(){
    std::cout << "[1] - A new application project" << std::endl;
    std::cout << "[2] - A new game project" << std::endl;
    std::cout << "[3] - A new security project" << std::endl;
}

// Menu for selling projects
void SellProjectMenu(){
    std::cout << "[1] - Sell application project" << std::endl;
    std::cout << "[2] - Sell game project" << std::endl;
    std::cout << "[3] - Sell security project" << std::endl;
}

// Menu for buying developers
void BuyDeveloperMenu(){
    std::cout << "[1] - Buy junior developer" << std::endl;
    std::cout << "[2] - Buy mid developer" << std::endl;
    std::cout << "[3] - Buy senior developer" << std::endl;
}

// Takes menu choice from user
void ChooseFunction(){
    std::cout << "Choose: ";
    std::cin >> Choose;
}

// Gets company name, CEO name and gives starting money
void Entry(){
    std::cout << "Enter your software company name: ";
    std::getline(std::cin, CompanyName);

    std::cout << "Enter your name: ";
    std::getline(std::cin, CeoName);

    // Starting bonus for testing
    std::cout << "A $5000 gift for testing my project :)" << std::endl << std::endl;
    CompanyMoney += 5000;
}

int main(){
    Entry();

    // Main game loop
    while(true){
        Statistic();
        MainMenu();
        ChooseFunction();

        switch(Choose){
        case 1:
            // Create new projects
            NewProjectMenu();
            ChooseFunction();

            if (Choose == 1){
                // Application project requirements
                if (JuniorDevs >= 2 && MidDevs >= 1)
                    AppProjects++;
                else
                    std::cout << "You need 2 junior and 1 mid developer to create an application project!" << std::endl;
            }
            else if (Choose == 2){
                // Game project requirements
                if (MidDevs >= 6 && SeniorDevs >= 2)
                    GameProject++;
                else
                    std::cout << "You need 6 mid and 2 senior developers to create a game project!" << std::endl;
            }
            else if (Choose == 3){
                // Security project requirements
                if (MidDevs >= 5 && SeniorDevs >= 10)
                    SecurityProjects++;
                else
                    std::cout << "You need 5 mid and 10 senior developers to create a security project!" << std::endl;
            }
            else{
                // Wrong menu selection
                std::cout << "Invalid selection!" << std::endl;
            }
            break;

        case 2:
            // Sell projects
            SellProjectMenu();
            ChooseFunction();

            if (Choose == 1 && AppProjects > 0){
                AppProjects--;
                CompanyMoney += 1500;
            }
            else if (Choose == 2 && GameProject > 0){
                GameProject--;
                CompanyMoney += 4500;
            }
            else if (Choose == 3 && SecurityProjects > 0){
                SecurityProjects--;
                CompanyMoney += 12500;
            }
            else{
                std::cout << "You don't have this project to sell!" << std::endl;
            }
            break;

        case 3:
            // Buy new developers
            BuyDeveloperMenu();
            ChooseFunction();

            if (Choose == 1 && CompanyMoney >= 500){
                CompanyMoney -= 500;
                JuniorDevs++;
            }
            else if (Choose == 2 && CompanyMoney >= 1500){
                CompanyMoney -= 1500;
                MidDevs++;
            }
            else if (Choose == 3 && CompanyMoney >= 4000){
                CompanyMoney -= 4000;
                SeniorDevs++;
            }
            else{
                std::cout << "Not enough money!" << std::endl;
            }
            break;

        case 4:
            // Exit
            return 0;

        default:
            // Invalid main menu selection
            std::cout << "Invalid selection, try again!" << std::endl;
            break;
        }
    }
}
