// Công ty Bán buôn Dây đồng Middletown bán các cuộn dây đồng với giá $100 mỗi cuộn.
// Hãy viết một chương trình hiển thị trạng thái của một đơn hàng. Chương trình cần có các chức năng sau:

// Hàm 1: Nhập dữ liệu Hàm này sẽ hỏi người dùng các thông tin sau:
// Số lượng cuộn dây được đặt hàng.
// Số lượng cuộn dây đang có trong kho (tồn kho).
// Có phí vận chuyển và xử lý đặc biệt hay không?
// Phí vận chuyển và xử lý thông thường là $10 mỗi cuộn.
// Nếu có phí đặc biệt, chương trình sẽ hỏi phí đặc biệt là bao nhiêu trên mỗi cuộn.
// Các dữ liệu thu thập được sẽ được chuyển (truyền) làm tham số cho một hàm khác để hiển thị.

// Hàm 2: Hiển thị trạng thái Hàm này nhận dữ liệu từ hàm trên và hiển thị:
// Số lượng cuộn sẵn sàng để giao từ kho hiện tại.
// Số lượng cuộn bị nợ lại/chờ hàng (backorder) - nếu số lượng đặt lớn hơn số lượng trong kho.
// Tổng tiền hàng (Subtotal) của phần sẵn sàng giao (số cuộn sẵn sàng giao x $100).
// Tổng phí vận chuyển và xử lý cho phần sẵn sàng giao.
// Tổng cộng giá trị đơn hàng cho phần sẵn sàng giao.
// Yêu cầu kỹ thuật:Tham số "phí vận chuyển và xử lý" trong hàm thứ hai phải có tham số mặc định (default argument) là 10.00.

// Kiểm tra đầu vào (Input Validation):
// Không chấp nhận số lượng đặt hàng nhỏ hơn 1.
// Không chấp nhận số lượng tồn kho hoặc phí vận chuyển nhỏ hơn 0.



#include <iostream>
using namespace std;

int askOrderDetails(int &stock, bool &specialShipping, double &shippingFee) {
    int orderQuantity;
    do {
        cout << "Enter the number of coils ordered: ";
        cin >> orderQuantity;
        if (orderQuantity < 1) {
            cout << "Order quantity must be at least 1. Please try again.\n";
        }
    } while (orderQuantity < 1);

    do {
        cout << "Enter the number of coils in stock: ";
        cin >> stock;
        if (stock < 0) {
            cout << "Stock cannot be negative. Please try again.\n";
        }
    } while (stock < 0);

    char specialChoice;
    cout << "Is there a special shipping and handling fee? (y/n): ";
    cin >> specialChoice;
    specialShipping = (specialChoice == 'y' || specialChoice == 'Y');

    if (specialShipping) {
        do {
            cout << "Enter the special shipping and handling fee per coil: ";
            cin >> shippingFee;
            if (shippingFee < 0) {
                cout << "Shipping fee cannot be negative. Please try again.\n";
            }
        } while (shippingFee < 0);
    } else {
        shippingFee = 10.00; // Default shipping fee
    }

    return orderQuantity;
}

int calculateAndDisplayStatus(int orderQuantity, int stock, double shippingFee = 10.00) {
    const double COIL_PRICE = 100.00;
    int readyToShip = min(orderQuantity, stock); //Nếu 2 cái này khó hiểu quá thì ở dưới dùng if else cũng được
    int backOrder = max(0, orderQuantity - stock);//Nếu 2 cái này khó hiểu quá thì ở dưới dùng if else cũng được
    
    /*
   if (orderQuantity > stock) {
        readyToShip = stock;       // Chỉ giao được số hàng đang có
        backOrder = orderQuantity - stock; // Số còn nợ lại
    } else {
        readyToShip = orderQuantity;       // Giao đủ
        backOrder = 0;
    }
    */
    double subtotal = readyToShip * COIL_PRICE;
    double totalShipping = readyToShip * shippingFee;
    double totalOrderValue = subtotal + totalShipping;

    cout << "\n===== ORDER STATUS =====\n";
    cout << "Coils ready to ship: " << readyToShip << "\n";
    cout << "Coils on backorder: " << backOrder << "\n";
    cout << "Subtotal for coils ready to ship: $" << subtotal << "\n";
    cout << "Total shipping and handling: $" << totalShipping << "\n";
    cout << "Total order value: $" << totalOrderValue << "\n";
    cout << "=========================\n";

    return 0;
}

int main() {
    int orderQuantity, stock;
    bool specialShipping;
    double shippingFee;
     
    orderQuantity = askOrderDetails(stock, specialShipping, shippingFee);
  if (specialShipping) {
      calculateAndDisplayStatus(orderQuantity, stock, shippingFee); // nếu có phí dặc biệt thì truyền vào 3 tham số 
    } else {
      calculateAndDisplayStatus(orderQuantity, stock);  // nếu không có phí đặc biệt thì chỉ truyền vào 2 tham số đầu
    }
    

    return 0;
}