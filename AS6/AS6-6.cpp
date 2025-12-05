
/*Viết một chương trình tính số ngày nghỉ trung bình của nhân viên trong một công ty. Chương trình cần phải có các hàm sau đây:

Hàm 1: Được gọi bởi hàm main, có nhiệm vụ yêu cầu người dùng nhập vào số lượng nhân viên trong công ty. 
Giá trị này cần được trả về (return) dưới dạng số nguyên (int). (Hàm này không nhận tham số đầu vào).

Hàm 2: Được gọi bởi hàm main, nhận vào một tham số là số lượng nhân viên (lấy từ Hàm 1). 
Hàm này sẽ yêu cầu người dùng nhập số ngày nghỉ trong năm qua của từng nhân viên. 
Tổng số ngày nghỉ của tất cả nhân viên cần được trả về dưới dạng số nguyên (int).

Hàm 3: Được gọi bởi hàm main, nhận vào hai tham số: số lượng nhân viên và tổng số ngày nghỉ. 
Hàm này sẽ trả về số ngày nghỉ trung bình dưới dạng số thực (double).
(Lưu ý: Hàm này không được thực hiện in ra màn hình hay yêu cầu người dùng nhập liệu, chỉ tính toán và trả về kết quả).

Kiểm tra dữ liệu đầu vào (Input Validation):
Không chấp nhận số lượng nhân viên nhỏ hơn 1.
Không chấp nhận số ngày nghỉ là số âm cho bất kỳ nhân viên nào.
*/

#include <iostream>
using namespace std;

int getNumberOfEmployees() {
    int numEmployees;
    do {
        cout << "Enter the number of employees: ";
        cin >> numEmployees;
        if (numEmployees < 1) {
            cout << "Number of employees must be at least 1. Please try again.\n";
        }
    } while (numEmployees < 1);
    return numEmployees;
}

int  getTotalDaysOff(int numEmployees) {
    int totalDaysOff = 0;
    for (int i = 1; i <= numEmployees; ++i) {
        int daysOff;
        do {
            cout << "Enter the number of days off for employee " << i << ": ";
            cin >> daysOff;
            if (daysOff < 0) {
                cout << "Number of days off cannot be negative. Please try again.\n";
            }
        } while (daysOff < 0);
        totalDaysOff += daysOff;
    }
    return totalDaysOff;
}

int calcAverageDaysOff(int numEmployees, int totalDaysOff) {
    return static_cast<double>(totalDaysOff) / numEmployees;
}

int main() {
    int numEmployees = getNumberOfEmployees();
    int totalDaysOff = getTotalDaysOff(numEmployees);
    int averageDaysOff = calcAverageDaysOff(numEmployees, totalDaysOff);
    cout << "The average number of days off per employee is: " << averageDaysOff << "\n";
    return 0;
}