#include <iostream>
using namespace std;

// this is the function to calculate the bmi
double calculateBMI(double weight, double height) {
    // this code is used to Convert height from centimeters to meters
    double heightInMeters = height / 100.0;

    // Calculate BMI
    double bmi = weight / (heightInMeters * heightInMeters);
    return bmi;
}

// this function is usd to to categorize and display BMI based on WHO standards
void displayBMIResult(double bmi) {
    cout << "BMI: " << bmi << " - ";
    if (bmi < 18.5) {
        cout << "Underweight" << endl;
    } else if (bmi < 25) {
        cout << "Normal weight" << endl;
    } else if (bmi < 30) {
        cout << "Overweight" << endl;
    } else {
        cout << "Obese" << endl;
    }
}

int main() {
    double weight, height, bmiResult;

    cout << "Welcome to the BMI Calculator\n";
    cout << "Please enter your weight (in kilograms): ";
    cin >> weight;
    cout << "Please enter your height (in centimeters): ";
    cin >> height;

    bmiResult = calculateBMI(weight, height);
    cout << "Your calculated BMI is: " << bmiResult << endl;

    cout << "Based on WHO standards, your BMI indicates: ";
    displayBMIResult(bmiResult);

    return 0;
}
