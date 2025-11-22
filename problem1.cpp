#include <iostream>
#include <string>
#include <cctype>

// Hàm tăng tốc độ nhập xuất
void setup_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
}

int main() {
    setup_io();

    std::string s;
    // Đọc cả dòng input, có thể chứa dấu cách
    std::getline(std::cin, s);

    long long sum = 0;
    // Duyệt qua từng ký tự trong chuỗi
    for (char c : s) {
        // Kiểm tra nếu ký tự là một chữ số
        if (isdigit(c)) {
            // Chuyển ký tự số thành giá trị số nguyên và cộng vào tổng
            // Ví dụ: '5' - '0' = 5
            sum += c - '0';
        }
    }

    std::cout << sum << std::endl;

    return 0;
}
