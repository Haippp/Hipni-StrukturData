![Learn](https://img.shields.io/badge/Learning-8A2BE2)
# Pengantar
Untuk memulai pastikan kaliman telah memiliki akun pada [GitHub](https://github.com/signup) dan telah sudah melakukan instalasi [Git SCM](https://git-scm.com/downloads/win), Jika kalian tidak tahu cara memasang git bisa [klik link ini](https://git-scm.com/book/id/v2/Memulai-Memasang-Git).
## Langkah Konfigurasi
Oke kita langsung saja ke langkah langkahnya, Berikut Version Control Menggunakan github :
1. Buka VsCode kalian terlebih dahulu kemudian buat folder kerja kalian dan hindari penggunaan spasi pada nama folder.
2. Buka terminal CMD/Command Prompt pada VsCode, bisa menggunaakn shortcut ```CTRL + backtik(`) ```
3. Lakukan konfigurasi Git, ketikkan `git config --global user.name "UsernameGithub"` dan `git config --global user.email emailKalian@example.com`. Untuk konfigurasi lebih lanjut bisa kalian cek [disini](https://git-scm.com/book/id/v2/Memulai-Pengaturan-Awal-Git)
4. Untuk mengecek hasil konfigurasinya kalian bisa ketikkan `git config --list` kalau keluar tinggal klik `q` pada keyboard.
5. Selanjutnya kita akan menjadikan folder kita sebagai repository dengan menggunakan perintah `git init`.
6. Selanjutnya buat file kode program bahasa C++ yang menampilkan "Hello World" sebagai contoh, dan lakukan kompilasi.
7. Lihat status Repository dengan perinth `git status`.
8. Untuk menambahkan kode program ke dalam repository bisa mengunakan perintah `git add <nama file>` atau bisa menggunakan `git add .` untuk menambahkan semua perubahan.
9. Kemudian untuk melihat perubahan tentang apa yang kita tambahkan tadi kita ketikkan lagi perintah `git status`
10. Lakukan commit repository dengan perintah `commit -m "pesan yang ingin disampaikan"`
11. Lalu lihat log perubahan repository dengan perintah `git log`
12. Jika ada perubahan lagi tinggal kalian add dan commit lagi.
13. Kemudian kita akan membuat repository pada github dengan klik `New` dan untuk nama repository, description dan status privat/public bisa kalian sesuaikan sendiri.
14. Salin perintah rekomendasi dari github pada halaman depan repository biar lebih gampang
```bash
git remote add origin https://github.com/username/namaRepository.git
git branch -M main
git push -u origin main
```
16. Kita akan menyambungkan lokal repositorynya ke github dengan `git remote add origin https://github.com/username/namaRepository.git` dan menyambungkan ke branch utama atau main dengan `git branch -M main`
17. Lalu kita push repository lokal ke github dengan perintah `git push -u origin main`
18. Dan yapp kalian bisa cek hasilnya di [github](https://github.com/username/namaRepository.git) repository kalian