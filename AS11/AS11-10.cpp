#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Drink {
    string DrinkName;
    double Cost;
    int NumberInMachine;
};

// Hàm hiển thị menu
void displayMenu(const Drink drinks[], int size) {
    cout << "\n--- MENU MAY BAN NUOC ---\n";
    cout << left << setw(5) << "STT" 
         << setw(15) << "Ten Nuoc" 
         << setw(10) << "Gia" 
         << setw(10) << "Con Lai" << endl;
    cout << "----------------------------------------\n";
    for (int i = 0; i < size; ++i) {
        cout << left << setw(5) << (i + 1) 
             << setw(15) << drinks[i].DrinkName 
             << "$" << setw(9) << fixed << setprecision(2) << drinks[i].Cost 
             << drinks[i].NumberInMachine << endl;
    }
    cout << "6. Thoat chuong trinh\n";
    cout << "----------------------------------------\n";
}

int main() {
    
    const int NUM_DRINKS = 5;
    Drink machine[NUM_DRINKS] = {
        {"Cola", 0.75, 20},
        {"Root Beer", 0.75, 20},
        {"Lemon-Lime", 0.75, 20},
        {"Grape Soda", 0.80, 20},
        {"Cream Soda", 0.80, 20}
    };

    double totalEarnings = 0.0;
    int choice;

    while (true) {
        displayMenu(machine, NUM_DRINKS);
        cout << "Moi chon do uong (1-6): ";
        cin >> choice;

        
        if (choice == 6) {
            break;
        }

        // Validate lựa chọn menu
        if (choice < 1 || choice > 6) {
            cout << "Lua chon khong hop le. Vui long chon lai.\n";
            continue;
        }

        // Chuyển về index mảng (0-4)
        int index = choice - 1;

        // Kiểm tra hết hàng
        if (machine[index].NumberInMachine <= 0) {
            cout << "Rất tiếc, " << machine[index].DrinkName << " da het hang.\n";
            continue;
        }

        // Nhập tiền
        double moneyInserted;
        cout << "Gia cua " << machine[index].DrinkName << " la $" << machine[index].Cost << endl;
        
        // Input Validation: Tien khong am va <= 1.00
        do {
            cout << "Vui long nhat so tien (toi da $1.00): $";
            cin >> moneyInserted;

            if (moneyInserted < 0 || moneyInserted > 1.00) {
                cout << "Loi: So tien khong duoc am va khong qua $1.00.\n";
            } else if (moneyInserted < machine[index].Cost) {
                cout << "Loi: So tien khong du ($" << machine[index].Cost << "). Moi nap them.\n";
                // Trong thực tế có thể cho nhập thêm, nhưng ở đây ta bắt nhập lại số tiền hợp lệ
            }
        } while (moneyInserted < 0 || moneyInserted > 1.00 || moneyInserted < machine[index].Cost);

        // Xử lý giao dịch
        double change = moneyInserted - machine[index].Cost;
        machine[index].NumberInMachine--; // Trừ tồn kho
        totalEarnings += machine[index].Cost; // Cộng doanh thu

        cout << "\n--- Giao dich thanh cong! ---\n";
        cout << "Ban nhan duoc: " << machine[index].DrinkName << endl;
        cout << "Tien thua tra lai: $" << change << endl;
    }

    // Kết thúc chương trình
    cout << "\nChuong trinh ket thuc.\n";
    cout << "Tong doanh thu cua may hom nay: $" << totalEarnings << endl;

    return 0;
}