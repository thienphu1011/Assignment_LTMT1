#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


struct MonthlyBudget {
    double housing;
    double utilities;
    double householdExpenses;
    double transportation;
    double food;
    double medical;
    double insurance;
    double entertainment;
    double clothing;
    double miscellaneous;
};


void getMonthlyExpenses(MonthlyBudget &b) {
    cout << "Nhap so tien thuc te da chi cho cac muc sau:\n";
    cout << "Housing (Nha o): ";
    cin >> b.housing;
    cout << "Utilities (Dien nuoc): ";
    cin >> b.utilities;
    cout << "Household Expenses (Chi phi gia dinh): ";
    cin >> b.householdExpenses;
    cout << "Transportation (Di lai): ";
    cin >> b.transportation;
    cout << "Food (An uong): ";
    cin >> b.food;
    cout << "Medical (Y te): ";
    cin >> b.medical;
    cout << "Insurance (Bao hiem): ";
    cin >> b.insurance;
    cout << "Entertainment (Giai tri): ";
    cin >> b.entertainment;
    cout << "Clothing (Quan ao): ";
    cin >> b.clothing;
    cout << "Miscellaneous (Linh tinh): ";
    cin >> b.miscellaneous;
}

// Hàm hiển thị một dòng so sánh cho từng mục
void printCategoryReport(string name, double budget, double spent) {
    double diff = spent - budget;
    cout << left << setw(20) << name 
         << "$" << setw(9) << budget 
         << "$" << setw(9) << spent;
    
    if (diff > 0) {
        cout << "Over:  $" << diff << endl;
    } else if (diff < 0) {
        cout << "Under: $" << -diff << endl; // In số dương cho dễ nhìn
    } else {
        cout << "Even" << endl;
    }
}

// Hàm hiển thị báo cáo tổng kết
void displayReport(const MonthlyBudget &goal, const MonthlyBudget &spent) {
    cout << "\n---------------- BAO CAO NGAN SACH THANG ----------------\n";
    cout << left << setw(20) << "Category" 
         << setw(10) << "Budget" 
         << setw(10) << "Spent" 
         << "Difference" << endl;
    cout << "---------------------------------------------------------\n";

    printCategoryReport("Housing", goal.housing, spent.housing);
    printCategoryReport("Utilities", goal.utilities, spent.utilities);
    printCategoryReport("Household", goal.householdExpenses, spent.householdExpenses);
    printCategoryReport("Transportation", goal.transportation, spent.transportation);
    printCategoryReport("Food", goal.food, spent.food);
    printCategoryReport("Medical", goal.medical, spent.medical);
    printCategoryReport("Insurance", goal.insurance, spent.insurance);
    printCategoryReport("Entertainment", goal.entertainment, spent.entertainment);
    printCategoryReport("Clothing", goal.clothing, spent.clothing);
    printCategoryReport("Miscellaneous", goal.miscellaneous, spent.miscellaneous);

    cout << "---------------------------------------------------------\n";

    // Tính tổng
    double totalBudget = goal.housing + goal.utilities + goal.householdExpenses + 
                         goal.transportation + goal.food + goal.medical + 
                         goal.insurance + goal.entertainment + goal.clothing + 
                         goal.miscellaneous;

    double totalSpent = spent.housing + spent.utilities + spent.householdExpenses + 
                        spent.transportation + spent.food + spent.medical + 
                        spent.insurance + spent.entertainment + spent.clothing + 
                        spent.miscellaneous;

    double totalDiff = totalSpent - totalBudget;

    cout << left << setw(20) << "TOTAL" 
         << "$" << setw(9) << totalBudget 
         << "$" << setw(9) << totalSpent;

    if (totalDiff > 0) {
        cout << "Over budget by $" << totalDiff << endl;
    } else if (totalDiff < 0) {
        cout << "Under budget by $" << -totalDiff << endl;
    } else {
        cout << "Exactly on budget." << endl;
    }
}

int main() {
    // Khởi tạo ngân sách mục tiêu theo đề bài
    MonthlyBudget budgetGoals = { 
        500.00, // Housing
        150.00, // Utilities
        65.00,  // Household Expenses
        50.00,  // Transportation
        250.00, // Food
        30.00,  // Medical
        100.00, // Insurance
        150.00, // Entertainment
        75.00,  // Clothing
        50.00   // Miscellaneous
    };

    MonthlyBudget actualSpent;

    // Gọi hàm nhập liệu
    getMonthlyExpenses(actualSpent);

    // Thiết lập định dạng số thập phân (2 chữ số sau dấu phẩy)
    cout << fixed << setprecision(2);

    // Gọi hàm báo cáo
    displayReport(budgetGoals, actualSpent);

    return 0;
}