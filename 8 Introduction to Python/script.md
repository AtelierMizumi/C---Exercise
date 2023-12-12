> Trình bày phần 6 Introduction on Python

# Mở

Đến với thư viện Python, có thể thấy, bất cứ một lớp ứng dụng nào cũng có một thư viện dành để giải quyết vấn đề ấy. Các thư viện chuẩn của Python cũng rất bao quát như multi media hay tới cả thư viện để viết GUI như TK Interface.

> Ngắn thì thêm dài thì thôi

### Định hướng phát triển của Python 
Tại sao các thư viện của Python lại đa dạng các chủng loại cho nhiều ứng dụng như vậy thì chúng ta phải nhìn lại một số tính chất cơ bản của Python
* Python được thiết kế với ưu điểm là dễ đọc, dễ học và dễ nhớ, ngôn ngữ hình thức trong Python có cấu trúc rõ ràng, sử dụng các từ khoá tiếng anh thay vì dấu câu như các ngôn ngữ khác, cùng với cấp phát bộ nhớ tự động. Các nhà phát triển ngôn ngữ Python luôn chú trọng tính rõ ràng trong ngôn ngữ hơn hiệu năng của ngôn ngữ (tham khảo thêm pre optimization và tác hại nó có thể đem lại)
### Tại sao lại lựa chọn Python
Bởi vì những tính chất trên, Python dễ dàng trở nên phổ biến và vô hình chung đã giúp ngôn ngữ này được lựa chọn làm tiêu chuẩn. Lí do mà Python lại trở thành top 1 trong Machine Learning và Data Analyst cho dù hiệu năng không tốt bằng C++ hay Java là Python rút ngắn thời gian phát triển phần mềm, giúp họ có thể tiến hành phân tích dữ liệu của họ sớm hơn (fast deploy) và vẫn có thể giải quyết vấn đề hiệu năng bằng việc sử dụng nhiều phần cứng mạnh mẽ và scale chúng lên (phần cứng là thứ mà họ không thiếu). 
### Python trở thành một phong trào
Không những thế, những thư viện ngoài cũng đã được tối ưu, thậm chí được viết bằng các ngôn ngữ bậc thấp và được nạp vào như một module, vừa đơn giản lại mang đến hiệu năng cao. Vậy là vấn đề hiệu năng cũng đã được giải quyết
Và như vậy một khi trở nên phổ biến, vô hình chung mọi người sẽ thống nhất sử dụng một ngôn ngữ (giống như Tiếng Anh), sẽ càng nhiều người quyết định phát triển thư viện của họ phục vụ nhiều mục đích khác nhau. Khiến cho thư viện của Python càng trở nên phong phú, đa dạng và mạnh mẽ.

# Giới thiệu một số thư viện ngoài
Hãy cùng đi qua một số thư viện ngoài cho Trí Tuệ Nhân Tạo hoặc Phân Tích Dữ Liệu:

* NumPy (Numerical Python): NumPy là một thư viện quan trọng trong Python cho tính toán số học và đại số tuyến tính. Nó cung cấp các cấu trúc dữ liệu mảng nhiều chiều và các hàm số học cơ bản. NumPy là một thư viện có phần code bên trong được viết bằng C++ và Fortran nên mang lại hiệu năng cao.

Ví dụ:
```python
import numpy as np

# Tạo mảng NumPy
arr = np.array([1, 2, 3, 4, 5])

# Tính tổng các phần tử trong mảng
total = np.sum(arr)

# Nhân ma trận
matrix_a = np.array([[1, 2], [3, 4]])
matrix_b = np.array([[5, 6], [7, 8]])
result = np.dot(matrix_a, matrix_b)
```


* Matplotlib
Là một công cụ mạnh mẽ để biểu diễn dữ liệu một cách trực quan. Bạn có thể tạo các loại đồ thị như đồ thị đường, đồ thị cột, biểu đồ hộp, và nhiều loại biểu đồ khác để hiểu rõ hơn về dữ liệu của mình. Được sử dụng để mô phỏng lại dữ liệu theo dạng biểu đồ để phân tích.

### Ví dụ biểu diễn sự thay đổi nhiệt độ trong 7 ngày:

```python
import matplotlib.pyplot as plt

# Dữ liệu về nhiệt độ trong 7 ngày
ngay = [1, 2, 3, 4, 5, 6, 7]
nhiet_do = [25, 27, 22, 30, 28, 26, 24]

# Vẽ đồ thị đường
plt.plot(ngay, nhiet_do, marker='o', linestyle='-', color='b', label='Nhiệt độ')

# Đặt tên trục và tiêu đề
plt.xlabel('Ngày')
plt.ylabel('Nhiệt độ (°C)')
plt.title('Biểu đồ nhiệt độ trong 7 ngày')

# Thêm chú giải
plt.legend()

# Hiển thị đồ thị
plt.show()
```

- plt.plot(ngay, nhiet_do, marker='o', linestyle='-', color='b', label='Nhiệt độ'): Dòng này tạo một đường đồ thị, sử dụng dữ liệu từ ngay và nhiet_do. Các tham số như marker, linestyle, và color được sử dụng để tùy chỉnh hình dạng và màu sắc của đường. label là để thêm chú giải cho đường.
- plt.xlabel('Ngày') và plt.ylabel('Nhiệt độ (°C)'): Đặt tên cho trục x và trục y.
- plt.title('Biểu đồ nhiệt độ trong 7 ngày'): Đặt tiêu đề cho biểu đồ.
- plt.legend(): Thêm chú giải cho đồ thị, hiển thị các nhãn được đặt bằng label.
- plt.show(): Hiển thị biểu đồ.

![Example Graph](https://cdn.discordapp.com/attachments/538969606836977665/1184215479104057495/YL3IvrF.png?ex=658b299b&is=6578b49b&hm=8666a5fe9e80b52e9aea36fa918afcfe625e662039b7f1819e6c99c0e42b1645&)

## PyTorch: PyTorch là một thư viện học máy và thị giác máy tính, chủ yếu được sử dụng để xây dựng và huấn luyện các mô hình học máy sâu.

### Ví dụ cho việc sử dụng thư viện PyTorch và dữ liệu đã được luyện sẵn cho việc nhận diện động vật:

```python
import torch
from torchvision import models, transforms
from PIL import Image
from torchvision import models

# Đường dẫn lấy thông tin phân loại các con vật
LABELS_URL = "https://raw.githubusercontent.com/anishathalye/imagenet-simple-labels/master/imagenet-simple-labels.json"
LABELS = requests.get(LABELS_URL).json()

# Tải mô hình pre-trained ResNet và đặt chế độ đánh giá (evaluation)
model = models.resnet18(pretrained=True)
model.eval()

# Định nghĩa một hàm để dự đoán đối tượng trong ảnh
def predict_object(image_path):
    # Tiền xử lý ảnh
    image = Image.open(image_path)
    preprocess = transforms.Compose([
        transforms.Resize(256),
        transforms.CenterCrop(224),
        transforms.ToTensor(),
        transforms.Normalize(mean=[0.485, 0.456, 0.406], std=[0.229, 0.224, 0.225]),
    ])
    input_tensor = preprocess(image)
    input_batch = input_tensor.unsqueeze(0)

    # Dự đoán
    with torch.no_grad():
        output = model(input_batch)

    # Lấy kết quả và nhãn có độ tin cậy cao nhất
    _, predicted_idx = torch.max(output, 1)
    confidence = torch.nn.functional.softmax(output[0], dim=0)[predicted_idx.item()].item()
    predicted_label = LABELS[predicted_idx.item()]

    return predicted_label, confidence

# Đường dẫn đến ảnh cần dự đoán
image_path = "path/to/your/image.jpg"

# Dự đoán và in kết quả
predicted_label, confidence = predict_object(image_path)
print(f"Predicted Label: {predicted_label}")
print(f"Confidence: {confidence:.2f}")
```
