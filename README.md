Câu 2: Các thuật toán sắp xếp:
sort - O(nlogn), bubble sort - O(n^2), merge sort - O(nlogn), counting sort - O(n)
sort: hàm thư viện
bubble sort: với mỗi 2 phần tử kề nhau, nếu phần tử sau lớn hơn phần tử trước thì đổi chỗ. làm liên tục đến khi dãy tăng dần
merge sort: tách mảng ra thành 2 mảng nhỏ có kích thước gần nhau nhất có thể. sau đó sort lại 2 mảng này rồi ghép với nhau thành một mảng sort hoàn chỉnh
counting sort: đếm số lần xuất hiện của từng phần tử trong mảng rồi mặc định mảng sẽ chạy từ bé đến lớn; Ví dụ: mảng {1, 2, 3, 1, 2, 5} có số lần xuất hiện lần lượt là: {2,2,1,0,1}; nếu làm một mảng mới là mảng hoàn chỉnh sau khi sort lại, ta sẽ chạy từ đầu đến cuối mảng đếm số lần xuất hiện, rồi cout ra a[i] lần i;
Câu 3: Các thuật toán tìm kiếm:
1. Binary search - O(logn)
2. thực hiện nhiều bước bỏ qua các phần tử ko cần thiết và càng gần với phần tử cần tìm thì giảm khoảng cách bỏ qua - O(logn)
