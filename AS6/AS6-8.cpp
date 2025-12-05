// Viết một chương trình tính toán chi phí viện phí cho bệnh nhân và ghi báo cáo ra một file.
// Đầu tiên, chương trình cần hỏi xem bệnh nhân nhập viện theo diện Nội trú (in-patient) hay Ngoại trú (out-patient).
// Nếu là Nội trú (In-patient): Cần nhập các dữ liệu sau:
// Số ngày nằm viện.
// Giá phòng mỗi ngày (daily rate).
// Chi phí thuốc men.
// Chi phí dịch vụ bệnh viện (xét nghiệm, v.v.).

// Nếu là Ngoại trú (Out-patient): Cần nhập các dữ liệu sau:
// Chi phí dịch vụ bệnh viện (xét nghiệm, v.v.).
// Chi phí thuốc men.

// Yêu cầu kỹ thuật: Chương trình phải sử dụng hai hàm chồng (overloaded functions) để tính tổng chi phí.
// Một hàm nhận các tham số cho dữ liệu Nội trú.
// Hàm còn lại nhận các tham số cho dữ liệu Ngoại trú. Cả hai hàm đều phải trả về tổng chi phí.

// Kiểm tra đầu vào (Input Validation):
// Không chấp nhận số âm cho bất kỳ dữ liệu nào.

#include <iostream>
#include <fstream>
using namespace std;

double calculateTotalExpense(int days, double dailyRate, double medicationCost, double serviceCost) {  // Hàm cho bệnh nhân nội trú
    return (days * dailyRate) + medicationCost + serviceCost;
}

double calculateTotalExpense(double medicationCost, double serviceCost) {   // Hàm cho bệnh nhân ngoại trú
    return medicationCost + serviceCost;
}

double getPositiveInput(const string &prompt) {
    double value;
    do {
        cout << prompt;
        cin >> value;
        if (value < 0) {
            cout << "Value cannot be negative. Please try again.\n";
        }
    } while (value < 0);
    return value;
}

double getPositiveIntInput(const string &prompt) {
    int value;
    do {
        cout << prompt;
        cin >> value;
        if (value < 0) {
            cout << "Value cannot be negative. Please try again.\n";
        }
    } while (value < 0);
    return value;
}

int main() {
    char patientType;
    cout << "Is the patient an In-patient or Out-patient? (I/O): ";
    cin >> patientType;
    double totalExpense = 0.0;
    if (patientType == 'I' || patientType == 'i') {
        int days = static_cast<int>(getPositiveIntInput("Enter the number of days in the hospital: "));
        double dailyRate = getPositiveInput("Enter the daily room rate: ");
        double medicationCost = getPositiveInput("Enter the medication cost: ");
        double serviceCost = getPositiveInput("Enter the hospital service cost: ");
        totalExpense = calculateTotalExpense(days, dailyRate, medicationCost, serviceCost);
    } else if (patientType == 'O' || patientType == 'o') {
        double medicationCost = getPositiveInput("Enter the medication cost: ");
        double serviceCost = getPositiveInput("Enter the hospital service cost: ");
        totalExpense = calculateTotalExpense(medicationCost, serviceCost);
    } else {
        cout << "Invalid patient type entered.\n";
        return 1;
    }

    ofstream outFile("hospital_expense_report.txt");
    if (!outFile) {
        cout << "Error opening file for writing.\n";
        return 1;
    }
    outFile << "HOSPITAL EXPENSE REPORT\n";
    outFile << "------------------------\n";
    outFile << "Patient Type: " << ( (patientType == 'I' || patientType == 'i') ? "In-patient" : "Out-patient") << "\n";
    outFile << "------------------------\n";
    outFile << fixed;
    outFile.precision(2);
    outFile << "Total hospital expense: $" << totalExpense << "\n";
    outFile.close();
    cout << "Expense report generated: hospital_expense_report.txt\n";

   

    return 0;
}