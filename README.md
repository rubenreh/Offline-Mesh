# Offline Mesh Messenger

The Offline Mesh Messenger is a simple but powerful tool built using ESP32 microcontrollers. It's designed to help people stay connected in areas where the internet is down or unavailable, especially in places affected by conflict or crisis, such as Palestine.

This project allows two or more ESP32 boards to talk to each other without any Wi-Fi or internet connection. Instead, it creates its own local network—a "mesh"—where each device can send and receive short text messages. It's like a tiny emergency texting system you can carry in your pocket.

---

## 💡 Why This Project?
During war, natural disasters, or internet shutdowns, it's often impossible for people to stay in touch. This system is meant to be a low-cost, easy-to-use way to help families, aid workers, or communities communicate without needing any existing infrastructure.

The inspiration for this project came from the struggles faced by people in Palestine, where access to safe, reliable communication is often taken away. By building something small but meaningful, we can create tools that empower people during their hardest moments.

---

## 🔧 What You Need
- 2 or more ESP32 boards
- Arduino IDE installed on your computer
- A USB cable to connect the ESP32
- Optional: small batteries or power banks to make it portable

That’s it! No internet. No routers. Just power the boards and start typing.

---

## 🚀 How It Works
1. Flash the code to each ESP32 board using the Arduino IDE.
2. Open the Serial Monitor on your computer.
3. Type a message and hit enter.
4. Your message is sent out wirelessly to all other ESP32 boards in range.
5. Any messages from other boards will also show up on your Serial Monitor.

---

## 🧠 What Makes It Special?
- **Offline**: Works with no internet or cell signal.
- **Portable**: Runs on USB or battery power.
- **Expandable**: Add small screens, keypads, or storage later.
- **Empowering**: Gives people a way to connect in emergencies.

---

## 📦 Future Ideas
- Add small displays so users don’t need a computer to read messages.
- Add storage to save the last few messages.
- Allow messages to pass through multiple nodes (longer range).
- Use solar panels for off-grid operation.

---

## 🫶 Inspired By
This project is a response to the communication blackouts during the crisis in Gaza and other war-affected regions. It's a reminder that technology can and should serve people, especially in their most vulnerable moments.

You don’t need to be a huge company or organization to make something helpful. Even a few boards and a few lines of code can bring connection, support, and hope.

---

## 🛠 Built With
- ESP32 microcontrollers
- C++ (Arduino framework)
- painlessMesh library

---

## 📜 License
MIT License – open to everyone, forever.

If this helps even one person feel less alone, it’s worth it.
