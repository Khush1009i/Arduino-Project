
# ⚖️Pendulum Oscillation Measurement

This project is designed to measure the time period of oscillations of a pendulum using an IR sensor and an Arduino. The goal is to calculate the time period for each oscillation accurately and display the results in a table format via the Serial Monitor.
<br>

## ⚙️Features
- **Time Period Calculation**: The time between consecutive crossings of the pendulum's mean position is measured to calculate the time period.
- **Accurate Oscillation Counting**: The code ensures that only valid oscillations are counted, avoiding random or false readings.
- **Table Output**: The results are displayed in a structured table format for easy analysis of the oscillation time periods.
- **IR Sensor Based Detection**: An IR sensor is used to detect when the pendulum crosses the mean position, triggering the timing calculations.
<br>

## 🗒️Requirements
- **Hardware**:
  - Arduino board (e.g., Arduino Uno, Arduino Nano, etc.)
  - IR sensor (e.g., TCS3200 or similar)
  - Pendulum (with a fixed length)
  - Jumper wires and breadboard
  
- **Software**:
  - Arduino IDE
  - Serial Monitor or Serial Plotter for output
<br>

## 🏋️‍♂️How It Works
1. The program measures the time taken for the pendulum to complete each oscillation.
2. An IR sensor detects when the pendulum crosses the mean position.
3. The time between each crossing is calculated and stored.
4. The results (time period of each oscillation) are printed in a table format via the Serial Monitor.
<br>

## 📒Instructions
1. **Setup**: Connect the IR sensor to the Arduino. The sensor’s output pin should be connected to pin 2 of the Arduino.
2. **Code Upload**: Upload the `Pendulum_Oscillation.ino` file to your Arduino board using the Arduino IDE.
3. **Serial Monitor**: Open the Serial Monitor to view the results. Each oscillation's time period will be printed in the format:
    ```
    Oscillation No    Time Period (s)
    1                 1.234567
    2                 1.245678
    ```
4. **Sensor Calibration**: Ensure that the IR sensor is positioned correctly to detect the pendulum crossing the mean position. Adjust the threshold as necessary.
<br>

## 👨🏻‍💻Code Explanation
The main code logic is written in the `Pendulum_Oscillation.ino` file. The code uses the following concepts:
- **IR sensor detection**: The sensor detects the pendulum's crossing of the mean position.
- **Timing**: The time is measured using the `micros()` function to track the time between consecutive crossings.
- **Data Storage**: The time period of each oscillation is stored in an array and displayed in a tabular format.
- **Oscillation Counting**: The code correctly counts the number of oscillations and computes their respective time periods.
<br>

## 👮🏻‍♂️License
MIT License. See the [LICENSE](https://github.com/Khush1009i/Arduino-Project/blob/main/LICENSE) file for more details.
<br><br>

## 🤝Contributions
Feel free to fork this repository, make changes, and create pull requests. Contributions are welcome!
<br><br>


## 🤝Issue
Feel free to find & solve any kind issue you fell for. Issues  are welcome too...!
