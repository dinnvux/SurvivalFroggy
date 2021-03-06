# Survival Froggy
 • Được lấy cảm hứng từ các thể loại game như Crossy Road,... Survival Froggy là game về một chú ếch cố gắng băng qua dòng đường tràn ngập xe cộ và con sông chảy xiết với những chú rùa, nhưng thanh gỗ trôi lềnh bềnh, cũng như tồn tại mối hiểm nguy mang tên cá sấu! 
  
  ## Hướng dẫn cài đặt
  • Download file zip của game rồi extract tại ổ E. (Nếu bạn không có ổ E thì điều chỉnh lại Makefile sao cho phù hợp)
  
  • Mở folder trong Visual Studio Code.
  
  • Sử dụng lệnh `mingw32-make` và `./game.exe` để chạy game.
  
  • Sau đó thì tận hưởng con game!
 
  ## Luật chơi
  • Press ↑ để điều khiển chú ếch đi lên.
  
  • Press → để điều khiển chú ếch rẽ phải.
  
  • Press ↓ để điều khiển chú ếch đi xuống.
  
  • Press ← để điều khiển chú ếch sang trái.
  
  • Press ENTER để qua level mới mỗi khi hoàn thành level hoặc mỗi khi chết.
  
  -> Về tổng thể game sẽ có 8 level, 4 loại xe với 4 vận tốc khác nhau; trên sông thì có gỗ trôi, rùa bơi, và đương nhiên là cá sấu. Sau mỗi level thì lượng xe, lượng thanh gỗ cũng như vận tốc di chuyển đều được gia tăng. Không những thế thời gian của mỗi level sẽ càng ngày càng giảm hơn!
  
  **Win Condition:** Để có thể giành chiến thắng thì người chơi sẽ phải đưa chú ếch đến đầm lầy của mình không những một mà là năm lần để có thể qua được một level! 
  
 ## Một số chức năng đã cài đặt
  • Hệ thống đếm ngược thời gian : cụ thể mỗi level bạn sẽ có 63s để có thể băng qua đến đầm lầy của mình, sau mỗi level thì thời gian sẽ giảm đi ít hơn.
  
  • Hiệu ứng chuyển màn.
  
  • Thêm một số hoạt ảnh chuyển động của cá sấu, rùa, cũng như của chú ếch. Có thể tham khảo như sau:
  
  ![Cars](https://user-images.githubusercontent.com/100585484/170363889-158e59dd-85e0-457e-84ac-07d1f024cf78.png)
  ![Croc](https://user-images.githubusercontent.com/100585484/170363966-1db3237c-4b7d-4b9a-82e1-0a39360cd25a.png)
  ![Frog](https://user-images.githubusercontent.com/100585484/170363977-b4a861a1-1e9b-4db1-97af-6458aa53027c.png)
  ![Turtle](https://user-images.githubusercontent.com/100585484/170364104-d125c2e5-c342-4425-b7b3-dd0c63d1f876.png)
  ![Map](https://user-images.githubusercontent.com/100585484/170364134-e6a28087-fc99-45f8-8d90-134b6bb7eecb.png)

-> Và đây là một chiếc video gameplay nho nhỏ của mình: https://youtu.be/-68XLtWrrJA
  
## Các kĩ thuật được sử dụng
  • Class ( tính kế thừa )
  • Con trỏ.
  • Mảng tĩnh, mảng động.
  • Liên kết file.
  • Mảng 1 chiều, mảng 2 chiều.
  • Vector.
  • Sử dụng thư viện đồ họa SFML. (Link học SFML: https://www.sfml-dev.org/learn.php ; https://www.youtube.com/playlist?list=PL21OsoBLPpMOO6zyVlxZ4S4hwkY_SLRW9)
  
# Kết luận 
  ## Hướng phát triển
  • Trong tương lai em mong có thể cải thiện hơn về mặt hình ảnh, có thể thêm vào các hiệu ứng về âm thanh, menu cũng như hiệu ứng khi thua game.
   
  • Tạo thêm nhiều level với đa dạng map. Thậm chí nếu có thể thì sẽ không chỉ 1 chú ếch mà sẽ là 2 chú ếch.
  ## Bài học
  • Game vẫn chưa thật sự hoàn thiện và logic code vẫn phụ thuộc khá nhiều từ các nguồn trên mạng. 
  
  • Mặt khác, em đã biết thêm nhiều hơn về thư viện đồ họa, về logic của game và biết làm game rất khó, cần sự tỉ mỉ, cần mẫn....
