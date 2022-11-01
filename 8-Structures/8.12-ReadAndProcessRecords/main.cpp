#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

struct Appointment {
    string date;
    string time;
    string name;
    string purpose;
    float charge;
};

void printOneAppointmentInfo(Appointment appt);
int findAppointmentofPatient(string patientName, Appointment appts[], int numAppts);
float getTotalChargeofPatient(string name, Appointment appts[], int nappts);

int main() {
    string fileName {};
    cin >> fileName;
    cin.ignore();
    ifstream input;
    input.open(fileName);

    if (!input.is_open()) {
        cout << "File not found!" << endl;
        return 1; // 1 indicates error
    }

    Appointment collection [10];
    int count = 0;
    string line {};
    Appointment loader;
    getline(input, line);
    while (!input.fail()) {
        loader.date = line;
        getline(input, line);
        loader.time = line;
        getline(input, line);
        loader.name = line;
        getline(input, line);
        loader.purpose = line;
        input >> loader.charge;
        input.ignore();
        // cout << loader.date << " " << loader.time << " " << loader.name << " " << loader.purpose << " " << loader.charge << endl;
        collection[count] = loader;
        count += 1;
        getline(input, line);
    }
    input.close();
    // cout << collection[0].date << " " << collection[0].time << " " << collection[0].name << " " << collection[0].purpose << " " << collection[0].charge << endl;
    string targetPatientName {};
    getline(cin, targetPatientName);
    cout << fixed << setprecision(2);
    if (findAppointmentofPatient(targetPatientName, collection, count) == 0) {
        cout << "No record found." << endl;
    }
    else {
        cout << "The total charge for " << targetPatientName << " is " << getTotalChargeofPatient(targetPatientName, collection, count);
        cout << endl;
    }
    return 0;
}

void printOneAppointmentInfo(Appointment appt) {
    cout << "Date: " << appt.date << endl;
    cout << "Time: " << appt.time << endl;
    cout << "Name: " << appt.name << endl;
    cout << "Purpose: " << appt.purpose << endl;
    cout << fixed << setprecision(2);
    cout << "Charge: " << appt.charge << endl;
}

int findAppointmentofPatient(string patientName, Appointment appts[], int numAppts) {
    int numRecords {};
    for (int i = 0; i < numAppts; i++) {
        if (appts[i].name.find(patientName) != string::npos) {
            numRecords += 1;
            printOneAppointmentInfo(appts[i]);
        }
    }
    return numRecords;
}

float getTotalChargeofPatient(string name, Appointment appts[], int nappts) {
    float totalCharge {};
    for (int i = 0; i < nappts; i++) {
        if (appts[i].name == name) {
            totalCharge += appts[i].charge;
        }
    }
    return totalCharge;
}