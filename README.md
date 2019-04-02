# SoalShift_Modul3_A05

LAPORAN MODUL3 Kelompok A5

Chaniyah Zulfa M (05111740000115)

Faqih Fathan I. (05111740000175)

# SOAL
1. Buatlah program C yang bisa menghitung faktorial secara parallel lalu menampilkan hasilnya secara berurutan <br>
Contoh:
    ./faktorial 5 3 4
    3! = 6
    4! = 24
    5! = 120

2. Pada suatu hari ada orang yang ingin berjualan 1 jenis barang secara private, dia memintamu membuat program C dengan spesifikasi sebagai berikut:<br>

    a. Terdapat 2 server: server penjual dan server pembeli <br>
    b. 1 server hanya bisa terkoneksi dengan 1 client <br>
    c. Server penjual dan server pembeli memiliki stok barang yang selalu sama <br>
    d. Client yang terkoneksi ke server penjual hanya bisa menambah stok <br>
          - Cara menambah stok: client yang terkoneksi ke server penjual mengirim string “tambah” ke server lalu stok bertambah 1 <br>
    e. Client yang terkoneksi ke server pembeli hanya bisa mengurangi stok <br>
          - Cara mengurangi stok: client yang terkoneksi ke server pembeli mengirim string “beli” ke server lalu stok berkurang 1 <br>
    f. Server pembeli akan mengirimkan info ke client yang terhubung dengannya apakah transaksi berhasil atau tidak berdasarkan ketersediaan stok
          - Jika stok habis maka client yang terkoneksi ke server pembeli akan mencetak “transaksi gagal” <br>
          - Jika stok masih ada maka client yang terkoneksi ke server pembeli akan mencetak “transaksi berhasil” <br>
    g. Server penjual akan mencetak stok saat ini setiap 5 detik sekali <br>
    h. Menggunakan thread, socket, shared memory <br>

3. Agmal dan Iraj merupakan 2 sahabat yang sedang kuliah dan hidup satu kostan, sayangnya mereka mempunyai gaya hidup yang berkebalikan, dimana Iraj merupakan laki-laki yang sangat sehat,rajin berolahraga dan bangun tidak pernah kesiangan sedangkan Agmal hampir menghabiskan setengah umur hidupnya hanya untuk tidur dan ‘ngoding’. Dikarenakan mereka sahabat yang baik, Agmal dan iraj sama-sama ingin membuat satu sama lain mengikuti gaya hidup mereka dengan cara membuat Iraj sering tidur seperti Agmal, atau membuat Agmal selalu bangun pagi seperti Iraj. Buatlah suatu program C untuk menggambarkan kehidupan mereka dengan spesifikasi sebagai berikut: <br>
    a. Terdapat 2 karakter Agmal dan Iraj <br>
    b. Kedua karakter memiliki status yang unik <br>
        - Agmal mempunyai WakeUp_Status, di awal program memiliki status 0 <br>
        - Iraj memiliki Spirit_Status, di awal program memiliki status 100 <br>
        - Terdapat 3 Fitur utama <br>
              + All Status, yaitu menampilkan status kedua sahabat <br>
                Ex: Agmal WakeUp_Status = 75 
                    Iraj Spirit_Status = 30
              + “Agmal Ayo Bangun” menambah WakeUp_Status Agmal sebesar 15 point <br>
              + “Iraj Ayo Tidur” mengurangi Spirit_Status Iraj sebanyak 20 point <br>
        - Terdapat Kasus yang unik dimana: <br>
              + Jika Fitur “Agmal Ayo Bangun” dijalankan sebanyak 3 kali, maka Fitur “Iraj Ayo Tidur” Tidak bisa dijalankan selama 10   detik (Dengan mengirim pesan ke sistem “Fitur Iraj Ayo Tidur disabled 10 s”) <br>
              + Jika Fitur  “Iraj Ayo Tidur” dijalankan sebanyak 3 kali, maka Fitur “Agmal Ayo Bangun” Tidak bisa dijalankan selama 10 detik (Dengan mengirim pesan ke sistem “Agmal Ayo Bangun disabled 10 s”) <br>
        - Program akan berhenti jika Salah Satu : <br>
              + WakeUp_Status Agmal >= 100 (Tampilkan Pesan “Agmal Terbangun,mereka bangun pagi dan berolahraga”) <br>
              + Spirit_Status Iraj <= 0 (Tampilkan Pesan “Iraj ikut tidur, dan bangun kesiangan bersama Agmal”) <br>
        - Syarat Menggunakan Lebih dari 1 Thread <br>

4. Buatlah sebuah program C dimana dapat menyimpan list proses yang sedang berjalan (ps -aux) maksimal 10 list proses. Dimana awalnya list proses disimpan dalam di 2 file ekstensi .txt yaitu  SimpanProses1.txt di direktori /home/Document/FolderProses1 dan SimpanProses2.txt di direktori /home/Document/FolderProses2 , setelah itu masing2 file di  kompres zip dengan format nama file KompresProses1.zip dan KompresProses2.zip dan file SimpanProses1.txt dan SimpanProses2.txt akan otomatis terhapus, setelah itu program akan menunggu selama 15 detik lalu program akan mengekstrak kembali file KompresProses1.zip dan KompresProses2.zip 
Dengan Syarat : <br>
    - Setiap list proses yang di simpan dalam masing-masing file .txt harus berjalan bersama-sama <br>
    - Ketika mengkompres masing-masing file .txt harus berjalan bersama-sama <br>
    - Ketika Mengekstrak file .zip juga harus secara bersama-sama <br>
    - Ketika Telah Selesai melakukan kompress file .zip masing-masing file, maka program akan memberi pesan “Menunggu 15 detik untuk mengekstrak kembali” <br>
    - Wajib Menggunakan Multithreading <br>
    - Boleh menggunakan system <br>
    
5. Angga, adik Jiwang akan berulang tahun yang ke sembilan pada tanggal 6 April besok. Karena lupa menabung, Jiwang tidak mempunyai uang sepeserpun untuk membelikan Angga kado. Kamu sebagai sahabat Jiwang ingin membantu Jiwang membahagiakan adiknya sehingga kamu menawarkan bantuan membuatkan permainan komputer sederhana menggunakan program C. Jiwang sangat menyukai idemu tersebut. Berikut permainan yang Jiwang minta. <br>
  a. Pemain memelihara seekor monster lucu dalam permainan. Pemain dapat  memberi nama pada monsternya. <br>
  b. Monster pemain memiliki hunger status yang berawal dengan nilai 200 (maksimalnya) dan nanti akan berkurang 5 tiap 10 detik.Ketika hunger status mencapai angka nol, pemain akan kalah. Hunger status dapat bertambah 15 apabila pemain memberi makan kepada monster, tetapi banyak makanan terbatas dan harus beli di Market. <br>
  c. Monster pemain memiliki hygiene status yang berawal dari 100 dan nanti berkurang 10 tiap 30 detik. Ketika hygiene status mencapai angka nol, pemain akan kalah. Hygiene status' dapat bertambah 30 hanya dengan memandikan monster. Pemain dapat memandikannya setiap 20 detik(cooldownnya 20 detik). <br>
  d. Monster pemain memiliki health status yang berawal dengan nilai 300. Variabel ini bertambah (regenerasi)daa 5 setiap 10 detik ketika monster dalam keadaan standby. <br>
  e. Monster pemain dapat memasuki keadaan battle. Dalam keadaan ini, food status(fitur b), hygiene status'(fitur c), dan ‘regenerasi’(fitur d) tidak akan berjalan. Health status dari monster dimulai dari darah saat monster pemain memasuki battle. Monster pemain akan bertarung dengan monster NPC yang memiliki darah 100. Baik monster pemain maupun NPC memiliki serangan sebesar 20. Monster pemain dengan monster musuh akan menyerang secara bergantian. <br>
  f. Fitur shop, pemain dapat membeli makanan sepuas-puasnya selama stok di toko masih tersedia.<br>
      - Pembeli (terintegrasi dengan game) <br>
          + Dapat mengecek stok makanan yang ada di toko. <br>
          + Jika stok ada, pembeli dapat membeli makanan. <br>
      - Penjual (terpisah) <br>
          + Bisa mengecek stok makanan yang ada di toko <br>
          + Penjual dapat menambah stok makanan. <br>
    Spesifikasi program: <br>
A. Program mampu mendeteksi input berupa key press. (Program bisa berjalan tanpa perlu menekan tombol enter) <br>
B. Program terdiri dari 3 scene yaitu standby, battle, dan shop. <br>
C. Pada saat berada di standby scene, program selalu menampilkan health status, hunger status, hygiene status, stok makanan tersisa, dan juga status kamar mandi (“Bath is ready” jika bisa digunakan, “Bath will be ready in [bath cooldown]s” jika sedang cooldown). Selain itu program selalu menampilkan 5 menu, yaitu memberi makan, mandi, battle, shop, dan exit. <br> Contoh :

Standby Mode
Health : [health status]
Hunger : [hunger status]
Hygiene : [hygiene status]
Food left : [your food stock]
Bath will be ready in [cooldown]s
Choices
Eat
Bath
Battle
Shop
Exit

D. Pada saat berada di battle scene, program selalu menampilkan health status milik pemain dan monster NPC. Selain itu, program selalu menampilkan 2 menu yaitu serang atau lari. <br> Contoh :

Battle Mode
Monster’s Health : [health status]
Enemy’s Health : [enemy health status]
Choices
Attack
Run

E. Pada saat berada di shop scene versi pembeli, program selalu menampilkan food stock toko dan milik pemain. Selain itu, program selalu menampilkan 2 menu yaitu beli dan kembali ke standby scene. <br> Contoh :

        Shop Mode
        Shop food stock : [shop food stock]
        Your food stock : [your food stock]
        Choices
Buy
Back

F. Pada program penjual, program selalu menampilkan food stock toko. Selain itu, program juga menampilkan 2 menu yaitu restock dan exit. <br> Contoh :

Shop
Food stock : [shop food stock]
Choices
Restock
Exit

Pastikan terminal hanya mendisplay status detik ini sesuai scene terkait (hint: menggunakan system(“clear”))

# JAWABAN
