## ⚖️Pendulum Oscillation Measurement Code
This Arduino project measures the time period of pendulum oscillations using an IR sensor. It calculates the time taken for each oscillation, estimates the gravitational acceleration, and displays the results on the Serial Monitor.

## How It Works:
- **IR Sensor Detection**: The code uses an IR sensor to detect when the pendulum crosses the mean position (center point) of its oscillation.<br>

- **Time Measurement:** Every time the pendulum crosses the mean position, the time is recorded using micros(), which provides precise time in microseconds.<br>

- **Time Period Calculation:** The time period of the pendulum's oscillation is calculated as the difference between consecutive crossings of the mean position.
**Gravitational Acceleration Calculation:** Using the formula<br>
![image](https://github.com/Khush1009i/Arduino-Project/blob/main/Pendulum-Oscillation-Measurement/Equation%20used/Equation%20of%20gravitational%20accelaration.png)<br>
where, T is the time period, the gravitational acceleration is estimated.
Data Output: The results, including the time period and calculated gravitational acceleration, are printed on the Serial Monitor in real-time.
<br>

## **Key Features**:

- **Accurate Oscillation Timing**: The time between crossings is measured to calculate accurate time periods.
- **Gravitational Acceleration**: The program estimates the gravitational acceleration based on the time period of oscillations.
- **Easy Data Viewing**: Results are displayed in real-time via the Serial Monitor for easy analysis.

## **Code Structure:**

- **Setup**: Initializes the IR sensor, sets up the serial communication, and prepares for time measurement.

- **Loop:** Continuously reads the IR sensor, measures time intervals, calculates time periods and gravitational acceleration, and outputs the results.

## Summary:
- The code calculates the time period of the pendulum's oscillation by measuring the time between two consecutive crossings of the mean position.
- It then computes the gravitational acceleration (g) based on the time period and outputs the results to the Serial Monitor.

---

## Output
![image](https://github.com/Khush1009i/Arduino-Project/blob/main/Pendulum-Oscillation-Measurement/Source%20Code/Output.png)
