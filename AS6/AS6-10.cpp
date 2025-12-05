// Viết một chương trình xác định xem khu vực nào trong 5 khu vực địa lý của một thành phố lớn (Bắc, Nam, Đông, Tây và Trung tâm) có số vụ tai nạn ô tô được báo cáo ít nhất trong năm ngoái.
//Chương trình cần có hai hàm sau đây, được gọi bởi hàm main:
// int getNumAccidents(string region):
// Hàm này nhận vào tên của một khu vực (ví dụ: "North").
// Nó sẽ hỏi người dùng nhập số vụ tai nạn ô tô được báo cáo ở khu vực đó trong năm qua.
// Thực hiện kiểm tra tính hợp lệ của dữ liệu (validate input).
// Sau đó trả về số vụ tai nạn.
// Hàm này cần được gọi một lần cho mỗi khu vực của thành phố.

// void findLowest(int n, int s, int e, int w, int c):
// Hàm này nhận vào 5 con số đại diện cho tổng số vụ tai nạn của 5 khu vực.
// Nó xác định số nào nhỏ nhất và in ra tên của khu vực đó, cùng với số liệu tai nạn tương ứng.

// Kiểm tra dữ liệu đầu vào (Input Validation):
// Không chấp nhận số vụ tai nạn nhỏ hơn 0.

#include <iostream>
#include <string>
using namespace std;

int getNumAccidents(const string &region) {
    int numAccidents;
    do {
        cout << "Enter the number of reported car accidents in the " << region << " region: ";
        cin >> numAccidents;
        if (numAccidents < 0) {
            cout << "Number of accidents cannot be negative. Please try again.\n";
        }
    } while (numAccidents < 0);
    return numAccidents;
}

void findLowest(int n, int s, int e, int w, int c) {
    int minAccidents = n;
    string region = "North";

    if (s < minAccidents) {
        minAccidents = s;
        region = "South";
    }
    if (e < minAccidents) {
        minAccidents = e;
        region = "East";
    }
    if (w < minAccidents) {
        minAccidents = w;
        region = "West";
    }
    if (c < minAccidents) {
        minAccidents = c;
        region = "Central";
    }

    cout << "The region with the fewest reported car accidents is the " << region << " region with " << minAccidents << " accidents.\n";
}
int main() {
    int northAccidents = getNumAccidents("North");
    int southAccidents = getNumAccidents("South");
    int eastAccidents = getNumAccidents("East");
    int westAccidents = getNumAccidents("West");
    int centralAccidents = getNumAccidents("Central");

    findLowest(northAccidents, southAccidents, eastAccidents, westAccidents, centralAccidents);

    return 0;
}