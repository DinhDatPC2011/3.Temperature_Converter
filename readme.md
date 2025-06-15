# 🌡️ Temperature Converter

Welcome to the **Temperature Converter** project! This repository contains a simple command-line application that converts temperatures between Celsius, Fahrenheit, and Kelvin. It is part of a series of mini exercises designed for beginners learning C programming.

## 🚀 Project Overview

This project aims to help beginners practice their C programming skills through hands-on experience. By building a temperature converter, you will learn about fundamental programming concepts such as variables, data types, user input, and control structures.

### 🔗 Download and Execution

You can download the latest version of the Temperature Converter from the [Releases section](https://github.com/DinhDatPC2011/3.Temperature_Converter/releases). Make sure to download the appropriate file for your operating system and follow the instructions to execute the program.

### 📚 Topics Covered

- **C Programming**: Gain hands-on experience with the C language.
- **Command-Line Interface (CLI)**: Learn how to create applications that run in the terminal.
- **ASCII Art**: Explore how to use ASCII characters to enhance your application.
- **Learning by Doing**: This project emphasizes practical learning through coding exercises.

## 🛠️ Features

- **Temperature Conversion**: Convert temperatures between Celsius, Fahrenheit, and Kelvin.
- **User-Friendly Interface**: The command-line interface is simple and easy to navigate.
- **Error Handling**: The application includes basic error handling to manage invalid inputs.

## 📖 Getting Started

To get started with the Temperature Converter, follow these steps:

1. **Clone the Repository**: 
   ```bash
   git clone https://github.com/DinhDatPC2011/3.Temperature_Converter.git
   ```

2. **Navigate to the Directory**:
   ```bash
   cd 3.Temperature_Converter
   ```

3. **Compile the Program**:
   Use the following command to compile the program:
   ```bash
   gcc -o temp_converter temp_converter.c
   ```

4. **Run the Program**:
   Execute the program with the following command:
   ```bash
   ./temp_converter
   ```

## 🎨 ASCII Art

The Temperature Converter features a unique ASCII art header that adds a fun touch to the command-line interface. Here’s a sneak peek of what it looks like:

```
  _______                   _______  _______  _______  _______ 
 |       |                 |       ||       ||       ||       |
 |   _   | ____    ____   |   _   ||   _   ||   _   ||   _   |
 |  | |  ||    |  |    |  |  | |  ||  | |  ||  | |  ||  | |  |
 |  |_|  ||   |  |   |   |  |_|  ||  |_|  ||  |_|  ||  |_|  |
 |       ||   |  |   |   |       ||       ||       ||       |
 |_______||___|  |___|   |_______||_______||_______||_______|
```

## 📊 Example Usage

Here’s how to use the Temperature Converter:

1. When you run the program, it will prompt you to enter a temperature value.
2. Choose the unit you want to convert from.
3. Enter the temperature value.
4. The program will display the converted temperature in the selected unit.

### Example:

```
Enter temperature value: 100
Choose unit to convert from (C/F/K): C
Temperature in Fahrenheit: 212
Temperature in Kelvin: 373.15
```

## 🔍 How It Works

The Temperature Converter uses simple mathematical formulas to convert temperatures:

- **Celsius to Fahrenheit**: 
  \[ F = C \times \frac{9}{5} + 32 \]
  
- **Fahrenheit to Celsius**: 
  \[ C = (F - 32) \times \frac{5}{9} \]

- **Celsius to Kelvin**: 
  \[ K = C + 273.15 \]

- **Kelvin to Celsius**: 
  \[ C = K - 273.15 \]

- **Fahrenheit to Kelvin**: 
  \[ K = (F - 32) \times \frac{5}{9} + 273.15 \]

- **Kelvin to Fahrenheit**: 
  \[ F = (K - 273.15) \times \frac{9}{5} + 32 \]

## 📋 Code Structure

The project consists of the following files:

- **temp_converter.c**: The main C file that contains the program logic.
- **README.md**: This documentation file.
- **Makefile**: A simple makefile to compile the program (if applicable).

### Example Code Snippet

Here’s a snippet of the main function from `temp_converter.c`:

```c
#include <stdio.h>

int main() {
    float temperature;
    char unit;
    
    printf("Enter temperature value: ");
    scanf("%f", &temperature);
    
    printf("Choose unit to convert from (C/F/K): ");
    scanf(" %c", &unit);
    
    // Conversion logic here
    
    return 0;
}
```

## 🧪 Testing

To ensure the program works correctly, you can run a series of test cases. Here are some example inputs and expected outputs:

| Input (C) | Output (F) | Output (K) |
|-----------|------------|------------|
| 0         | 32         | 273.15     |
| 100       | 212        | 373.15     |
| -40       | -40        | 233.15     |

## 🤝 Contributing

Contributions are welcome! If you would like to improve the Temperature Converter, please follow these steps:

1. Fork the repository.
2. Create a new branch (`git checkout -b feature/YourFeature`).
3. Make your changes.
4. Commit your changes (`git commit -m 'Add some feature'`).
5. Push to the branch (`git push origin feature/YourFeature`).
6. Open a pull request.

## 📄 License

This project is licensed under the MIT License. Feel free to use and modify the code as you wish.

## 🔗 Additional Resources

For more information on C programming, consider visiting the following resources:

- [C Programming Language](https://en.wikipedia.org/wiki/C_(programming_language))
- [Learn C](https://www.learn-c.org/)
- [GeeksforGeeks - C Programming](https://www.geeksforgeeks.org/c-programming-language/)

## 📬 Contact

If you have any questions or feedback, feel free to reach out:

- GitHub: [DinhDatPC2011](https://github.com/DinhDatPC2011)
- Email: [your-email@example.com](mailto:your-email@example.com)

Thank you for checking out the Temperature Converter project! We hope you find it useful in your journey of learning C programming. For updates and new releases, visit the [Releases section](https://github.com/DinhDatPC2011/3.Temperature_Converter/releases).