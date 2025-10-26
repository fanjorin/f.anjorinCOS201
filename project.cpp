#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main() {
    // Initialize random seed
    srand(time(0));
    
    // Variables for input
    string fullName;
    bool isPauStudent;
    int courseChoice, locationChoice;
    
    // Get user input
    cout << "Enter full name: ";
    getline(cin, fullName);
    
    cout << "Is PAU student? (1=true, 0=false): ";
    int temp;
    cin >> temp;
    isPauStudent = (temp == 1);
    
    cout << "Enter course (1-5): ";
    cin >> courseChoice;
    
    cout << "Enter location (1-5): ";
    cin >> locationChoice;
    
    // Variables for course and location data
    string courseName;
    int days;
    double regFee;
    string locationName;
    double lodgingPerDay;
    
    // Map course choice using multi-way if-else
    if (courseChoice == 1) {
        courseName = "Photography";
        days = 3;
        regFee = 10000;
    } else if (courseChoice == 2) {
        courseName = "Painting";
        days = 5;
        regFee = 8000;
    } else if (courseChoice == 3) {
        courseName = "Fish Farming";
        days = 7;
        regFee = 15000;
    } else if (courseChoice == 4) {
        courseName = "Baking";
        days = 5;
        regFee = 13000;
    } else if (courseChoice == 5) {
        courseName = "Public Speaking";
        days = 2;
        regFee = 5000;
    } else {
        // Default values if invalid input
        courseName = "Invalid Course";
        days = 0;
        regFee = 0;
    }
    
    // Map location choice using multi-way if-else
    if (locationChoice == 1) {
        locationName = "Camp House A";
        lodgingPerDay = 10000;
    } else if (locationChoice == 2) {
        locationName = "Camp House B";
        lodgingPerDay = 2500;
    } else if (locationChoice == 3) {
        locationName = "Camp House C";
        lodgingPerDay = 5000;
    } else if (locationChoice == 4) {
        locationName = "Camp House D";
        lodgingPerDay = 13000;
    } else if (locationChoice == 5) {
        locationName = "Camp House E";
        lodgingPerDay = 5000;
    } else {
        // Default values if invalid input
        locationName = "Invalid Location";
        lodgingPerDay = 0;
    }
    
    // Calculate initial costs
    double lodgingCost = lodgingPerDay * days;
    double total = regFee + lodgingCost;
    
    // Apply discounts using logical operators
    double lodgingDiscount = 0;
    double regDiscount = 0;
    
    // Rule 1: If PAU student AND location is Camp House A or B, give 5% discount on lodging
    if (isPauStudent && (locationChoice == 1 || locationChoice == 2)) {
        lodgingDiscount = lodgingCost * 0.05;
        lodgingCost -= lodgingDiscount;
    }
    
    // Rule 2: If days > 5 OR regFee > 12000, give 3% discount on registration
    if ((days > 5) || (regFee > 12000)) {
        regDiscount = regFee * 0.03;
        regFee -= regDiscount;
    }
    
    // Recalculate total after discounts
    total = regFee + lodgingCost;
    
    // Random bonus using rand()
    int r = rand() % 100 + 1;  // Random number between 1-100
    double promo = 0;
    
    if (r == 7 || r == 77) {
        promo = 500;
        total -= promo;
    }
    
    // Output breakdown
    cout << "\n=== COURSE REGISTRATION BREAKDOWN ===" << endl;
    cout << "Name: " << fullName << "   (PAU student: " << (isPauStudent ? "Yes" : "No") << ")" << endl;
    cout << "Course: " << courseName << "   Days: " << days << endl;
    cout << "Registration: ₦" << regFee << "  (reg discount: ₦" << regDiscount << ")" << endl;
    cout << "Lodging: ₦" << lodgingPerDay << " × " << days << " = ₦" << (lodgingPerDay * days) 
         << "  (lodging discount: ₦" << lodgingDiscount << ")" << endl;
    cout << "Random draw: " << r << "  Promo applied: ₦" << promo << endl;
    cout << "TOTAL: ₦" << total << endl;
    
    return 0;
}