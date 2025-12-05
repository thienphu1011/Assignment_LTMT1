// Số nguyên tố là số chỉ chia hết cho chính nó và 1. Ví dụ: số 5 là số nguyên tố vì nó chỉ chia hết cho 1 và 5.
// Tuy nhiên, số 6 không phải là số nguyên tố vì nó có thể chia hết cho 1, 2, 3 và 6.

// Yêu cầu: Viết một hàm có tên là isPrime:
// Nhận vào một số nguyên (integer) làm tham số.
// Trả về true nếu tham số đó là số nguyên tố.
// Trả về false nếu không phải.

// Viết một chương trình hoàn chỉnh để demo (chạy thử) hàm này.
// Gợi ý: Nhớ rằng toán tử % chia một số cho số khác và trả về phần dư. Biểu thức num1 % num2 sẽ trả về 0 nếu num1 chia hết cho num2.

#include <iostream>
using namespace std;

bool isPrime(int number) {
    if (number <= 1) {
        return false; // Số nhỏ hơn hoặc bằng 1 không phải số nguyên tố
    }
    for (int i = 2; i * i <= number; ++i) { // Kiểm tra từ 2 đến căn bậc hai của number
        if (number % i == 0) {
            return false; // Tìm thấy ước số, không phải số nguyên tố
        }
    }
    return true; // Không tìm thấy ước số, là số nguyên tố
}


int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (isPrime(num)) {
        cout << num << " is a prime number.\n";
    } else {
        cout << num << " is not a prime number.\n";
    }

    return 0;
}