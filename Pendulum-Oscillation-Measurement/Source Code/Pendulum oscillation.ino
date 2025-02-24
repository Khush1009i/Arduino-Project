/*============================
Developer       : Khush Soni
Initial Release : 22 February 2025
License         : MIT
=============================*/

unsigned long pretime;
unsigned long currtime;
int pin = 6; // Pin connected to the IR sensor
float timePeriod;
boolean flag = true; // Flag to track the first pass over the mean position
int i = 0; // Index for storing oscillation times
float g; // Used to calculate the acceleration due to gravity
float g1 = 0; // Average value of g over iterations
float t; // Time in seconds
float timePeriods[200]; // Array to store time periods of oscillations
int numOscillations = 0; // Variable to count the number of complete oscillations

void setup() {
  Serial.begin(9600);
  pinMode(pin, INPUT); // Set the IR sensor pin as input
  pretime = micros(); // Initialize the previous time
  Serial.println("Oscillation Time Periods:");
  Serial.println("Oscillation No\tTime Period (s)"); // Print table header
}

void loop() {
  if (digitalRead(pin) == 0) { // When the IR sensor detects the pendulum crossing the mean position
    if (flag == true) { // If this is the first crossing
      currtime = micros(); // Get the current time in microseconds
      timePeriod = currtime - pretime; // Calculate time period
      pretime = currtime; // Update previous time for the next calculation
      flag = false; // Toggle flag to prevent continuous triggering
      t = timePeriod / 1000000.0; // Convert time period to seconds

      // Calculate acceleration due to gravity (g)
      g = (1.36 / (t * t)); // In this case, (4π²l = 1.36). You may need to adjust for your pendulum length.

      // Store the time period in the array
      timePeriods[numOscillations] = t;

      // Print time period in table format
      Serial.print(numOscillations + 1); // Oscillation number
      Serial.print("\t\t");
      Serial.println(t, 6); // Time period with 6 decimal places

      numOscillations++; // Increment the oscillation count

      if (numOscillations >= 200) { // Limit to 200 oscillations
        Serial.println("Max Oscillations reached (200)");
        while (1); // Stop the program after 200 oscillations
      }
    }
  }
  else {
    // When the pendulum is not crossing the mean position, reset flag to allow next crossing
    if (flag == false) {
      flag = true;
      delay(100); // Short delay to debounce
    }
  }

  // Optional: If you want to calculate and print the average g value, you can use g1
  // g1 = (g1 + g) / 2.0; // Calculate the running average of g (if needed)
  // Serial.println(g1); // Output the average value of g (optional)

  delay(10); // Small delay to avoid overloading the serial output
}
















// Code by Khush
