# 🌸 Menstrual Cycle Tracker

A simple **C-based console application** that helps users log, track, and analyze their menstrual cycles — built as part of my Embedded Systems training at **Emertxe Information Technologies**.

---

## 🩷 Features

- 📅 **Add Period Data** – Record start date and cycle duration  
- 📖 **View History** – See previous entries stored in a text file  
- 🧮 **Predict Next Cycle** – Automatically calculates your upcoming period date  
- 💾 **Persistent Storage** – All entries saved in a local file for future reference  
- ⚙️ **Lightweight Console UI** – Clean, simple, and efficient design  

---

## 🛠 **Technical Details**

- **Language:** C  
- **Concepts Used:**  
  - File handling (`fopen`, `fprintf`, `fscanf`)  
  - Structures & pointers  
  - Time/date manipulation (`time.h`, `struct tm`)  
  - Modular programming (separate `.c` and `.h` files)

---

## 📁 **Project Structure**


---

## 🚀 **How to Run**

1. **Clone the repository**
   ```bash
   git clone https://github.com/swathyram44/Menstrual_tracker.git
   cd Menstrual_tracker
gcc main.c tracker.c -o menstrual_tracker


./menstrual_tracker


=== Menstrual Cycle Tracker ===
1. Add Period Data
2. View History
3. Exit
Enter your choice: 1

Enter Start Date (dd mm yyyy): 12 03 2025
Enter Cycle Duration (in days): 28

✅ Data saved successfully!
Next Period Expected: 09-04-2025


🙌 Acknowledgements

Special thanks to my mentors at Emertxe Information Technologies for their constant support and guidance throughout this project.

💡 Future Enhancements

🔔 Add ovulation and fertility prediction

📊 Generate detailed statistics of cycle variations

🌐 GUI-based tracker (future version in C++/Python)

🧠 Author

Swathy Ramshankar
