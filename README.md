## Contents:
<ol>
   <li><a href="https://s-nithish-kumar.github.io/IoT_based_Smart_Tank_Water_Level_Monitoring/#1-problem-statement">Problem Statement</a></li>
   <li><a href="https://s-nithish-kumar.github.io/IoT_based_Smart_Tank_Water_Level_Monitoring/#2-objectives">Objectives</a></li>
   <li><a href="https://s-nithish-kumar.github.io/IoT_based_Smart_Tank_Water_Level_Monitoring/#3-impact-of-solving-the-problem">Impact of Solving the Problem</a></li>
   <li><a href="https://s-nithish-kumar.github.io/IoT_based_Smart_Tank_Water_Level_Monitoring/#4-existing-products">Existing Products</a></li>
   <li><a href="https://s-nithish-kumar.github.io/IoT_based_Smart_Tank_Water_Level_Monitoring/#5-proposed-approach">Proposed Approach</a></li>
   <li><a href="https://s-nithish-kumar.github.io/IoT_based_Smart_Tank_Water_Level_Monitoring/#6-process-flow">Process Flow</a></li>
   <li><a href="https://s-nithish-kumar.github.io/IoT_based_Smart_Tank_Water_Level_Monitoring/#7-circuit-design">Circuit Design</a></li>
   <li><a href="https://s-nithish-kumar.github.io/IoT_based_Smart_Tank_Water_Level_Monitoring/#8-real-time-database">Real-time Database</a></li>
   <li><a href="https://s-nithish-kumar.github.io/IoT_based_Smart_Tank_Water_Level_Monitoring/#9-implementation">Implementation</a>
   <ul>
      <li><a href="https://s-nithish-kumar.github.io/IoT_based_Smart_Tank_Water_Level_Monitoring/#user-interface">User Interface</a> </li>
      <li><a href="https://s-nithish-kumar.github.io/IoT_based_Smart_Tank_Water_Level_Monitoring/#tank-side">Tank Side</a></li>
      <li><a href="https://s-nithish-kumar.github.io/IoT_based_Smart_Tank_Water_Level_Monitoring/#component-housing">Component Housing</a></li>
   </ul></li>
   <li><a href="https://s-nithish-kumar.github.io/IoT_based_Smart_Tank_Water_Level_Monitoring/#10-conclusion-and-future-works">Conclusion and Future Works</a></li>
   <li><a href="https://s-nithish-kumar.github.io/IoT_based_Smart_Tank_Water_Level_Monitoring/#11-references">References</a></li>
</ol>

### 1. Problem Statement:
- Turning a water pump on and off is an easy task, but due to other busy chores, people tend to forget to turn the pump off, which results in water overflow and waste.
+ A system that can turn the pump on when the tank empties and turn the pump off before the tank overflows can help to avoid water waste.

### 2. Objectives:
- To design and develop a wireless system using IoT and integrate it with Ultrasonic sensors for water level monitoring.
- Display the real time water level using a touch based interactive screen and give the low and overflow alerts using LEDs or a buzzer.

### 3. Impact of Solving the Problem:
- In a few places, the overflowing water is directed toward plants and trees to avoid waste. But in most scenarios, the overflow is not directed and goes to waste. This alert device can help overcome this problem.
- In most places, water is scarce, and the monthly bill is based on the amount of water consumed. Avoiding water wastage by overflow will help reduce the water bill.
- The device, being IoT-based, is wireless, which overcomes the problem of wire routing from tank to water pump.

### 4. Existing Products:
- Most of the existing products have wire connections between the controller and tank-side hardware that need to be routed from the tank to the water pump, which increases the complexity.
- The devices can detect only low and high levels, not the water level in between the low and high ranges. Continuous water level tracking can help the user turn the pump on manually when required, and this will help in situations when the user gets a water blockage alert, typically for repairing the pipelines.
- Continuous water level consumption tracking can help service providers charge the bill accordingly.

### 5. Proposed Approach:
- The approach shown in Figure 1 proposes SMPS, or solar, as a power supply for both the tank side and the user side. 

<p align="center">
<img src="images/propose_concept.jpeg" height="60%" width="60%">
</p>
<p align="center">Figure 1 Proposed Concept</p>

- Two NodeMCUs are used for uploading and receiving data. An Arduino and LCD display are used on the user side for receiving water levels and displaying them.
- The NodeMCU on the user side receives new data that will be passed to the Arduino through serial communication.
- Figure 2 shows the components needed for the proposed concept

<p align="center">
<img src="images/Components_used.jpg" height="60%" width="60%">
</p>
<p align="center">Figure 2 Components Used</p>

### 6. Process Flow:
The overall process flow is shown in Figure 3. The water-resistant Ultrasonic sensor estimates the water level, and the data is updated using the NodeMCU on top of the tank in Google Firebase whenever the value changes. The NodeMCU in the user interface reads the updated value and displays it on the LCD screen. LEDs are used to indicate the high and low water levels in the tanks.

<p align="center">
<img src="images/process_flow.jpeg" height="60%" width="60%">
</p>
<p align="center">Figure 3 Process Flow</p>

### 7. Circuit Design:

### 8. Real-time Database:

### 9. Implementation:
#### User Interface:
#### Tank Side:
#### Component Housing:

### 10. Conclusion and Future Works:

### 11. References:












