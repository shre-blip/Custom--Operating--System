A lightweight custom operating system built from scratch for educational purposes. This project explores low-level system programming, bootloaders, kernel development, and hardware interaction.

🚀 Features

🔹 Bootloader written in Assembly

🔹 Kernel written in C / C++ / Rust

🔹 Basic process scheduling

🔹 Memory management (paging / segmentation)

🔹 Simple shell / command-line interface

🔹 File system support (e.g., FAT32 / custom FS)

🔹 Hardware interaction (keyboard, display, etc.)

🛠️ Tech Stack

Languages: Assembly, C (or Rust/C++ if used)

Build Tools: GCC / NASM / QEMU / Make

Emulator / VM: QEMU, VirtualBox, or Bochs

📦 Installation & Setup
1️⃣ Clone the repository
git clone https://github.com/your-username/custom-os.git
cd custom-os

2️⃣ Build the OS
make

3️⃣ Run on QEMU
qemu-system-x86_64 -kernel build/myos.bin

📸 Screenshots

(Add boot screen / CLI screenshots here)

📚 Project Structure
custom-os/
├── boot/          # Bootloader code (Assembly)
├── kernel/        # Kernel source code
├── drivers/       # Device drivers (keyboard, display, etc.)
├── lib/           # Utility libraries
├── Makefile       # Build instructions
└── README.md      # Project documentation

🎯 Roadmap

 Implement multitasking

 Add networking support

 Create a GUI system

 Package manager for applications

🤝 Contributing

Contributions are welcome! Please fork the repository and submit a pull request.

📄 License

This project is licensed under the MIT License.
