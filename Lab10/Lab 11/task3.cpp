#include <iostream>
#include <fstream>
#include <string>

int main() {
    // -----------------------------------------
    // STEP 1: Write to the file
    // -----------------------------------------
    
    // Create an output file stream object
    std::ofstream outFile; 
    
    // Connect the object to a file named "digits.txt" using the open() method
    outFile.open("digits.txt"); 
    
    // Check if the file opened successfully
    if (outFile.is_open()) {
        outFile << 1 << "\n"; // Write 1 and move to the next line
        outFile << 2 << "\n"; // Write 2 and move to the next line
        
        outFile.close(); // Always close the file when done writing
        std::cout << "--- Data successfully written to digits.txt ---\n\n";
    } else {
        std::cout << "Error: Could not open the file for writing.\n";
        return 1; // Exit with an error code
    }

    // -----------------------------------------
    // STEP 2: Read from the file
    // -----------------------------------------
    
    // Create an input file stream object
    std::ifstream inFile;
    
    // Connect to the existing file using the open() method
    inFile.open("digits.txt"); 
    
    // Check if the file opened successfully
    if (inFile.is_open()) {
        std::string currentDigit;
        
        std::cout << "Displaying contents of digits.txt:\n";
        
        // Read the file line by line until we reach the end
        while (std::getline(inFile, currentDigit)) {
            std::cout << "Read digit: " << currentDigit << "\n";
        }
        
        inFile.close(); // Close the file when done reading
    } else {
        std::cout << "Error: Could not open the file for reading.\n";
        return 1;
    }

    return 0;
}