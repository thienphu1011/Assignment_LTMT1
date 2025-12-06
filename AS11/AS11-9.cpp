#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Student {
    string Name;
    int Idnum;
    double* Tests; // Con trỏ đến mảng điểm
    double Average;
    char Grade;
};

// Hàm tính toán xếp loại dựa trên điểm trung bình
char calculateGrade(double avg) {
    if (avg >= 91) return 'A';
    else if (avg >= 81) return 'B';
    else if (avg >= 71) return 'C';
    else if (avg >= 61) return 'D';
    else return 'F';
}

int main() {
    int numStudents;
    int numTests;

    // 1. Nhập số lượng bài kiểm tra và số lượng sinh viên
    cout << "Nhap so luong bai kiem tra cho moi sinh vien: ";
    cin >> numTests;
    cout << "Nhap so luong sinh vien: ";
    cin >> numStudents;

    // 2. Cấp phát động mảng cấu trúc sinh viên
    Student* list = new Student[numStudents];

    // 3. Nhập dữ liệu cho từng sinh viên
    for (int i = 0; i < numStudents; ++i) {
        cin.ignore(); // Xóa bộ nhớ đệm trước khi nhập chuỗi
        cout << "\n--- Nhap thong tin sinh vien thu " << (i + 1) << " ---\n";
        cout << "Ten sinh vien: ";
        getline(cin, list[i].Name);
        
        cout << "Ma so sinh vien (ID): ";
        cin >> list[i].Idnum;

        // Cấp phát động mảng điểm cho sinh viên này
        list[i].Tests = new double[numTests];
        
        double total = 0;
        cout << "Nhap diem (" << numTests << " bai): \n";
        for (int j = 0; j < numTests; ++j) {
            do {
                cout << "  Bai " << (j + 1) << ": ";
                cin >> list[i].Tests[j];
                if (list[i].Tests[j] < 0) {
                    cout << "  Loi: Diem khong duoc am. Nhap lai.\n";
                }
            } while (list[i].Tests[j] < 0); // Input Validation
            total += list[i].Tests[j];
        }

        // Tính trung bình và xếp loại
        list[i].Average = total / numTests;
        list[i].Grade = calculateGrade(list[i].Average);
    }

    // 4. Hiển thị bảng kết quả
    cout << "\n-------------------------------------------------------------\n";
    cout << left << setw(20) << "Ho Ten" 
         << setw(15) << "ID" 
         << setw(15) << "Diem TB" 
         << setw(10) << "Xep Loai" << endl;
    cout << "-------------------------------------------------------------\n";

    for (int i = 0; i < numStudents; ++i) {
        cout << left << setw(20) << list[i].Name 
             << setw(15) << list[i].Idnum 
             << setw(15) << fixed << setprecision(2) << list[i].Average 
             << setw(10) << list[i].Grade << endl;
    }

    // 5. Giải phóng bộ nhớ động
    for (int i = 0; i < numStudents; ++i) {
        delete[] list[i].Tests; // Xóa mảng điểm con trước
    }
    delete[] list; // Xóa mảng sinh viên

    return 0;
}